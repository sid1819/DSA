#include <GL/glut.h>
#include <iostream>

using namespace std;

int xc, yc, rx, ry;

void myInit() {
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("Ellipse Bresenham");
    glClearColor(1.0, 1.0, 1.0, 0);
    glColor3f(0.0, 0.0, 0.0);
    gluOrtho2D(0, 500, 0, 500);
}

void draw_pixel(int x, int y) {
    glBegin(GL_POINTS);
    glVertex2i(x, y);
    glEnd();
}

void draw_ellipse(int xc, int yc, int rx, int ry) {
    int x = 0, y = ry;
    int rxSq = rx * rx;
    int rySq = ry * ry;
    int p;

    // Initial decision parameter of region 1
    p = rySq - rxSq * ry + 0.25 * rxSq;

    while (2 * rySq * x < 2 * rxSq * y) {
        draw_pixel(xc + x, yc + y);
        draw_pixel(xc + x, yc - y);
        draw_pixel(xc - x, yc + y);
        draw_pixel(xc - x, yc - y);

        x++;
        if (p < 0) {
            p += 2 * rySq * x + rySq;
        } else {
            y--;
            p += 2 * rySq * x - 2 * rxSq * y + rySq;
        }
    }

    // Region 2
    p = rySq * (x + 0.5) * (x + 0.5) + rxSq * (y - 1) * (y - 1) - rxSq * rySq;
    while (y > 0) {
        draw_pixel(xc + x, yc + y);
        draw_pixel(xc + x, yc - y);
        draw_pixel(xc - x, yc + y);
        draw_pixel(xc - x, yc - y);

        y--;
        if (p > 0) {
            p += -2 * rxSq * y + rxSq;
        } else {
            x++;
            p += 2 * rySq * x - 2 * rxSq * y + rxSq;
        }
    }
}

void myDisplay() {
    glClear(GL_COLOR_BUFFER_BIT);
    draw_ellipse(xc, yc, rx, ry);
    glFlush();
}

int main(int argc, char** argv) {
    cout << "Enter coordinates of centre : ";
    cin >> xc >> yc;
    cout << "Enter x,y radius of ellipse: ";
    cin >> rx >> ry;
    glutInit(&argc, argv);
    myInit();
    glutDisplayFunc(myDisplay);
    glutMainLoop();
}