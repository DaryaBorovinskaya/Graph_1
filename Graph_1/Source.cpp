
/*#include <windows.h>
#include <GL/gl.h>
#include <GL/glu.h>


#include <glut.h>

void resize(int width, int height)
{

}


void  display(void)
{
    glColor3d(1, 1, 0);      //���� �����
    glRotated(45, 1, 1, 0);       //������� �����
    glutWireSphere(2.0, 20, 20);     //����������� �����
    glutWireCube(3.0);   //����������� ���
    glutWireTorus(0.275, 0.85, 8, 40);      //����������� ���
    
    glFlush();    //�����������, ��� ������� ��������� ����� ��������� ����������,  � �� ��������� � ������

}
void init(void)
{
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
    glEnable(GL_DEPTH_TEST);
    glClearColor(1.0, 1.0, 1.0, 1.0);    //�������� ���� (���� ����� ������� �����)
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-5.0, 5.0, -5.0, 5.0, 2.0, 12.0);    //��������� ������� ���������
    gluLookAt(0, 0, 5, 0, 1, 0, 0, 1, 0);       //������������ ������ ���� (����������� �������)
    glMatrixMode(GL_MODELVIEW);
}
int main(int argc, char** argv)    //������������� GLUT 
{
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);    //��������� ��� ���� ����� ����������� ����������
    glutInitWindowPosition(50, 10);    //������ ��������� ������������ ���� ������������ �������� ������ ���� ������
    glutInitWindowSize(800, 800);      //��������� ������� ����
    glutCreateWindow("Graphics");    //�������� ���� � ��������� �������� ����
    glutReshapeFunc(resize);
    init();
    glutDisplayFunc(display);    //�������, ���������� �� ��������� � ���� 
    glutMainLoop();
    return 0;
}*/



/*#include <iostream>
#include <windows.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <string>

using namespace std;
#include <glut.h>

void resize(int width, int height)
{

}


void  display(void)
{


    //POINTS
    glViewport(0, 0, 300, 300);        //��������� ������� ��������������, �
     //������� �������������� ����������� ����� ��� ������ ����� ����
    glPointSize(15);         //������ �����
    glBegin(GL_POINTS);
    glColor3d(1, 0, 0);     // ���� �����
    glVertex3d(3, 3, 0);    //���������� �����
    glEnd();


    glViewport(0, 0, 300, 300);
    glPointSize(25);
    glEnable(GL_POINT_SMOOTH);
    glBegin(GL_POINTS);
    glColor3d(0, 0, 1);
    glVertex3d(-5, -5, 0); // ������ �����
    glEnd();

    glViewport(0, 0, 300, 300);
    glPointSize(10);
    glBegin(GL_POINTS);
    glColor3d(1, 1, 0);
    glVertex3d(-3, 4, 0);   // ������ �����
    glColor3d(0, 1, 0);     // �������� �����
    glVertex3d(3, -4, 0);
    glEnd();

    glDisable(GL_POINT_SMOOTH);


    glRasterPos2f(-5, 0);       //������������ ������
    string stroka = "OpenGL";    //��������� �����
    for( int i = 0;i< stroka.length();i++) 
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, stroka[i]);      //������� ����� �����������



    //LINES

    glViewport(0, 300, 300, 300);
    
    glLineWidth(1);       //������� �����
    glBegin(GL_LINES);
    glColor3d(1, 1, 0);     // ������� ����
    glVertex3d(-5, -1, 0); // ������ �����
    glVertex3d(4, 5, 0);
    glEnd();

    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3d(0, 1, 0);     // �������
    glVertex3d(-2, -2, 0); // ������ �����
    glVertex3d(5, 3, 0);
    glEnd();
    
    glLineWidth(1);
    glEnable(GL_LINE_SMOOTH);
    glEnable(GL_LINE_STIPPLE);
    glLineStipple(3, 0x1c47);    //��� ���������� �����
    glBegin(GL_LINES);
    glColor3d(1, 0, 0);   
    glVertex3d(-4, 4, 0);
    glVertex3d(5, -3, 0);
    glEnd();

    glDisable(GL_LINE_SMOOTH);
    glDisable(GL_LINE_STIPPLE);


    //QUAD, TRIANGLE AND POLYLINE
    glViewport(300, 0, 300, 300);
    
    glBegin(GL_QUADS);   //�������
    glColor3d(1, 0.5, 0);
    glVertex2d(-4, -3);
    glVertex2d(1, -1);
    glVertex2d(4, -4);
    glVertex2d(0, -5);
    glEnd();
    

    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL); //�����������
    glBegin(GL_TRIANGLES);
    glColor3d(0, 0, 1);      
    glVertex3d(3, 5, 0);
    glVertex3d(3, 3, 0);
    glVertex3d(1, 4, 0);
    glEnd();

    glLineWidth(3);      
    glBegin(GL_LINE_STRIP);   //�������
    glColor3d(1, 0, 1);
    glVertex3d(-5, 4, 0);
    glVertex3d(-3, 5, 0);
    glVertex3d(-3, 3, 0);
    glVertex3d(-5, 2, 0);
    glVertex3d(-2, 5, 0);
    glVertex3d(-2, 2, 0);
    glEnd();


    //QUAD AND TRIANGLES

    glViewport(300, 300, 300, 300);
    glBegin(GL_QUADS);                  //��������
    glColor3d(1, 0, 0);
    glVertex2d(-5, 5);
    glVertex2d(-3, 5);
    glVertex2d(-3, 3);
    glVertex2d(-5, 3);
    glEnd();

    glBegin(GL_QUADS);                  
    glColor3d(1, 0.5, 0);
    glVertex2d(-5, 3);
    glVertex2d(-3, 3);
    glVertex2d(-3, 1);
    glVertex2d(-5, 1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3d(1, 1, 0);
    glVertex2d(-5, 1);
    glVertex2d(-3, 1);
    glVertex2d(-3, -1);
    glVertex2d(-5, -1);
    glEnd();


    glBegin(GL_QUADS);
    glColor3d(0, 1, 0);
    glVertex2d(-5, -1);
    glVertex2d(-3, -1);
    glVertex2d(-3, -3);
    glVertex2d(-5, -3);
    glEnd();

    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL); //������������
    glBegin(GL_TRIANGLES);
    glColor3d(1, 0, 1);
    glVertex3d(0, 0, 0);
    glVertex3d(2, 4, 0);
    glVertex3d(3, 3, 0);
    
    glColor3d(1, 0, 0.5);
    glVertex3d(0, 0, 0);
    glVertex3d(3, 3, 0);
    glVertex3d(3, 2, 0);
    
    glColor3d(0, 0, 1);
    glVertex3d(0, 0, 0);
    glVertex3d(3, 2, 0);
    glVertex3d(3, 0, 0);
    
    glColor3d(1, 1, 0);
    glVertex3d(0, 0, 0);
    glVertex3d(3, 0, 0);
    glVertex3d(3, -1, 0);
    
    glColor3d(0.5, 0, 0);
    glVertex3d(0, 0, 0);
    glVertex3d(3, -1, 0);
    glVertex3d(2, -2, 0);
    
    glColor3d(0.5, 1, 1);
    glVertex3d(0, 0, 0);
    glVertex3d(2, -2, 0);
    glVertex3d(1, -3, 0);
    glEnd();

    //����� �
    glViewport(600, 0, 600, 600);
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
    glBegin(GL_TRIANGLES);
    glColor3d(1, 0, 0.5);
    glVertex3d(0, 3, 0);
    glVertex3d(2, 5, 0);
    glVertex3d(-2, 5, 0);
    glEnd();

    glBegin(GL_QUADS);
    //glColor3d(1, 0, 0.5);
    glVertex2d(0, 3);
    glVertex2d(-2, 5);
    glVertex2d(-5, -6);
    glVertex2d(-2, -6);
    
    glVertex2d(0, 3);
    glVertex2d(2, 5);
    glVertex2d(5, -6);
    glVertex2d(2, -6);

    glVertex2d(-3, -2);
    glVertex2d(-3, -4);
    glVertex2d(3, -4);
    glVertex2d(3, -2);
    glEnd();

    glFlush();
}
void init(void)
{
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
    glEnable(GL_DEPTH_TEST);
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-6.0, 6.0, -7.0, 6.0, -1.0, 1.0);
    glMatrixMode(GL_MODELVIEW);
}
int main(int argc, char** argv)
{
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowPosition(50, 10);
    glutInitWindowSize(1200, 600);
    glutCreateWindow("Graphics");
    glutReshapeFunc(resize);
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}*/





//������� "HenonIFS"
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <windows.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <string>
#include <math.h>
#include <conio.h>

#include <corecrt_math_defines.h>
#include <random>
#include <time.h>

#include <glut.h> 
#define m 3
using namespace std;
void resize(int width, int height)
{

}


void  display(void)
{
    
    
    //glViewport(600, 600, 500, 500);
    glPointSize(1);
    glBegin(GL_POINTS);
    glColor3d(0, 1, 0);
    srand(time(NULL));
    int i, l, counter;
    float x1, y1, x=0, y=0;
    float a[m], b[m];

    counter = 0;

    for (i = 0; i < m; i++)
    {
        a[i] = cos(2 * M_PI * i / m);
        b[i] = sin(2 * M_PI * i / m);
    }

    while (counter <=10000)
    {
        l = 0 + rand() % m;
        if (l < 2)
        {                            // Sierp
            x1 = x / 2 + a[l];
            y1 = y / 2 + b[l];
        }
        else
        {                           // Henon
            x1 = (x * a[l] + y * b[l] + x * x * b[l]) / 6;
            y1 = (y * a[l] - x * b[l] + x * x * a[l]) / 6;
        }
        x = x1;
        y = y1;
        glVertex3d(320 + ceil(x * 140), 240 + ceil(y * 140),0);
        counter++;
    }
    
    glEnd();
    
    glFlush();
}
void init(void)
{
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
    glEnable(GL_DEPTH_TEST);
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-500.0, 500.0, -500.0, 500.0, -1.0, 1.0);
    glMatrixMode(GL_MODELVIEW);
}
int main(int argc, char** argv)
{
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowPosition(50, 10);
    glutInitWindowSize(1200, 1000);
    glutCreateWindow("Graphics");
    glutReshapeFunc(resize);
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    system("pause");
    return 0;
}



//
/*#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <windows.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <string>
#include <math.h>
#include <conio.h>
#include <glut.h>
#include <corecrt_math_defines.h>
#include <random>
#include <time.h>


using namespace std;
void resize(int width, int height)
{

}


void  display(void)
{
    glPointSize(5);         //������ �����
    glBegin(GL_POINTS);
    glColor3d(0, 1, 0);

    int n;               // ���������� ����������
    float x, y, t;

    x = -0.1;
    y = 0;
    n = 0;


    while (!_kbhit()) {                  // ���������� �����, ���� �� ������ �������

        t = x;
        x = 1 - y + abs(x);
        y = t;
        n++;
        glVertex3d(320 + ceil(x * 20), 240 + ceil(y * 20), n % 16);     // ��������� �����
    }
    _getch();
    glEnd();

    glFlush();
}
void init(void)
{
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
    glEnable(GL_DEPTH_TEST);
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-5.0, 5.0, -5.0, 5.0, 2.0, 12.0);
    glMatrixMode(GL_MODELVIEW);
}
int main(int argc, char** argv)
{
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowPosition(50, 10);
    glutInitWindowSize(1200, 700);
    glutCreateWindow("Graphics");
    glutReshapeFunc(resize);
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}*/