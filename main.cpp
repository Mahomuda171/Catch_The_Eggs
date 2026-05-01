
#include <GL/glut.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <string>
using namespace std;

// Window dimensions
const int WIDTH = 800;
const int HEIGHT = 600;

// Function declarations
void display();
void initOpenGL();
//void drawRect(float x, float y, float width, float height, float r, float g, float b);
//void drawCircle(float x, float y, float radius, float r, float g, float b);

// Display function
void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glutSwapBuffers();
}

// Initialize OpenGL
void initOpenGL() {
    glClearColor(0.1f, 0.1f, 0.2f, 1.0f);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, WIDTH, 0, HEIGHT);
    glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(WIDTH, HEIGHT);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Catch The Eggs");

    initOpenGL();
    glutDisplayFunc(display);

    glutMainLoop();
    return 0;
}
