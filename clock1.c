#include<stdlib.h>
#include<GL/glut.h>
#include<math.h>
#define PI 3.14
static GLfloat spin = 360.0,min=360.0,hour=360.0;
void init(void)
{
glClearColor (0.0, 0.0, 0.0, 0.0);
glShadeModel (GL_SMOOTH);
}
void display(void)
{
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(1, 1,0);
glRasterPos3f (0.0,100.0, 0.0);
glutBitmapString(GLUT_BITMAP_TIMES_ROMAN_24, "12");

glColor3f(1, 1,0);
glRasterPos3f (45.0,80.0, 0.0);
glutBitmapString(GLUT_BITMAP_TIMES_ROMAN_24, "1");

glColor3f(1, 1,0);
glRasterPos3f (78.0,50.0, 0.0);
glutBitmapString(GLUT_BITMAP_TIMES_ROMAN_24, "2");

glColor3f(1, 1,0);
glRasterPos3f (100.0,0.0, 0.0);
glutBitmapString(GLUT_BITMAP_TIMES_ROMAN_24, "3");

glColor3f(1, 1,0);
glRasterPos3f (85.0,-50.0, 0.0);
glutBitmapString(GLUT_BITMAP_TIMES_ROMAN_24, "4");

glColor3f(1, 1,0);
glRasterPos3f (55.0,-85.0, 0.0);
glutBitmapString(GLUT_BITMAP_TIMES_ROMAN_24, "5");

glColor3f(1, 1,0);
glRasterPos3f (0.0,-110.0, 0.0);
glutBitmapString(GLUT_BITMAP_TIMES_ROMAN_24, "6");

glColor3f(1, 1,0);
glRasterPos3f (-65.0,-90.0, 0.0);
glutBitmapString(GLUT_BITMAP_TIMES_ROMAN_24, "7");

glColor3f(1, 1,0);
glRasterPos3f (-95.0,-50.0, 0.0);
glutBitmapString(GLUT_BITMAP_TIMES_ROMAN_24, "8");

glColor3f(1, 1,0);
glRasterPos3f (-105.0,0.0, 0.0);
glutBitmapString(GLUT_BITMAP_TIMES_ROMAN_24, "9");

glColor3f(1, 1,0);
glRasterPos3f (-93.0,53.0, 0.0);
glutBitmapString(GLUT_BITMAP_TIMES_ROMAN_24, "10");

glColor3f(1, 1,0);
glRasterPos3f (-54.0,83.0, 0.0);
glutBitmapString(GLUT_BITMAP_TIMES_ROMAN_24, "11");

int i;
	int lineAmount = 100; //# of triangles used to draw circle
	
	GLfloat radius = 120.0f; //radius
	GLfloat twicePi = 2.0f * PI;
	glColor3f(1, 1,0.2);
	glBegin(GL_LINE_LOOP);
		for(i = 0; i <= lineAmount;i++) { 
			glVertex2f(
			    0 + (radius * cos(i *  twicePi / lineAmount)), 
			    0 + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

        
        
        
        	
	GLfloat radius1 = 150.0f; //radius
	//GLfloat twicePi = 2.0f * PI;
	glColor3f(1, 1,0.2);
	glBegin(GL_LINE_LOOP);
		for(i = 0; i <= lineAmount;i++) { 
			glVertex2f(
			    0 + (radius1 * cos(i *  twicePi / lineAmount)), 
			    0 + (radius1* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();
	
        
glPushMatrix();
glRotatef(spin, 0.0, 0.0, 1.0);

glBegin(GL_LINES);
glVertex2f(0,0);
glVertex2f(0,80);
glEnd();
glPopMatrix();
glPushMatrix();
glRotatef(min, 0.0, 0.0, 1.0);
glBegin(GL_LINES);
glVertex2f(0,0);
glVertex2f(0,60);
glEnd();
glPopMatrix();
glPushMatrix();
glBegin(GL_LINES);
glVertex2f(0,0);
glVertex2f(0,50);
glEnd();
glPopMatrix();
glColor3f(0.3,0.3,0.3);
glutSolidSphere(20,20,25);
glutSwapBuffers();
}
void spinDisplay(void)
{
spin = spin - 0.25;
if(spin==0){
    
    min=min-3.0;
}

if (spin <0.0)
spin = spin + 360.0;

if(min<0.0){
    min+=360.0;
}

if(min==0){
    
    hour-=10;
}
if (hour <0.0)
hour= hour + 360.0;
glutPostRedisplay();
}
void reshape(int w, int h)
{
glViewport (0, 0, (GLsizei) w, (GLsizei) h);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(-250.0, 250.0, -250.0, 250.0, -250.0, 250.0);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
}
void mouse(int button, int state, int x, int y)
{
switch (button) {
case GLUT_LEFT_BUTTON:
if (state == GLUT_DOWN)
glutIdleFunc(spinDisplay);
break;
case GLUT_RIGHT_BUTTON:
if (state == GLUT_DOWN)
glutIdleFunc(NULL);
break;
default:
break;
}
}
/*
* Request double buffer display mode.
* Register mouse input callback functions
*/
int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);
glutInitWindowSize (500, 500);
glutInitWindowPosition (100, 100);
glutCreateWindow (argv[0]);
init ();
glutDisplayFunc(display);
glutReshapeFunc(reshape);
glutMouseFunc(mouse);
glutMainLoop();
return 0;
}
