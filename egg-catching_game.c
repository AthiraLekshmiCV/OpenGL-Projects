#include<stdlib.h>
#include<GL/glut.h>
#include<stdlib.h>
#include<GL/gl.h>
#include<stdio.h>
#include<math.h>
#include <string.h>
#include <unistd.h>


#define PI 3.14
static GLfloat spin = 0.0,pos=0.0;
static GLint rand_num=0;
static GLfloat radius=0,x=0,y=2000;
static int count=0,score=0,i;
char buffer[20];


void init()
{

	glClearColor(1.0, 1.0, 1.0, 1.0);
	srand(time(NULL));
        glShadeModel(GL_SMOOTH);
     
        
        
    
        
        
        
}
void display(void)
{
    


    
        glClear(GL_COLOR_BUFFER_BIT);
       
        //clouds
        
	glPushMatrix();
	glColor3f(0.25098, 0.878431, 0.815686);
	glTranslatef(-1000,2300,0);
	glutSolidSphere(120,30,25);
	glPopMatrix();

	
	glPushMatrix();
	glColor3f(0.25098, 0.878431, 0.815686);
	glTranslatef(-1200,2300,0);
	glutSolidSphere(170,30,25);
	glPopMatrix();

        //clouds
        
        glPushMatrix();
	glColor3f(0.25098, 0.878431, 0.815686);
	glTranslatef(-2000,1300,0);
	glutSolidSphere(120,30,25);
	glPopMatrix();

	
	glPushMatrix();
	glColor3f(0.25098, 0.878431, 0.815686);
	glTranslatef(-2200,1300,0);
	glutSolidSphere(170,30,25);
	glPopMatrix();
        
        
        
        //clouds
        glPushMatrix();
	glColor3f(0.25098, 0.878431, 0.815686);
	glTranslatef(1000,2000,0);
	glutSolidSphere(120,30,25);
	glPopMatrix();

	
	glPushMatrix();
	glColor3f(0.25098, 0.878431, 0.815686);
	glTranslatef(1200,2000,0);
	glutSolidSphere(170,30,25);
	glPopMatrix();
    
        
        
             //clouds
        glPushMatrix();
	glColor3f(0.25098, 0.878431, 0.815686);
	glTranslatef(0,2000,0);
	glutSolidSphere(120,30,25);
	glPopMatrix();

	
	glPushMatrix();
	glColor3f(0.25098, 0.878431, 0.815686);
	glTranslatef(200,2000,0);
	glutSolidSphere(170,30,25);
	glPopMatrix();
   
            //clouds
        glPushMatrix();
	glColor3f(0.25098, 0.878431, 0.815686);
	glTranslatef(2000,900,0);
	glutSolidSphere(120,30,25);
	glPopMatrix();

	
	glPushMatrix();
	glColor3f(0.25098, 0.878431, 0.815686);
	glTranslatef(2200,900,0);
	glutSolidSphere(170,30,25);
	glPopMatrix();
        
        
     
        
        
        
        
        
	int triangleAmount = 20; 
	
	radius = 100.8f; //radius
	GLfloat twicePi = 2.0f * PI;
	glColor3f(0 ,0.270588, 0.0745098);
        glPushMatrix();
        
 //       glTranslatef(0.0, -2000, 0.0);
         glColor3f(0.854902, 0.647059, 0.12549);

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) { 
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)), 
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd(); 
        glPopMatrix();



glColor3f(0.0,0.7,0);

glRectf(-2500.0, -2500.0,  2500.0, -500.0);
glPushMatrix();
glTranslatef(spin, 0.0, 0.0);
glBegin(GL_POLYGON);
glColor3f(0.545098 ,0.270588, 0.0745098);
glVertex3f (-500.0,-500.0, 0.0);
glVertex3f (500, -500, 0.0);
glVertex3f (700, 400, 0.0);
glVertex3f (-700, 400, 0.0);
glEnd();
glPopMatrix();

glBegin(GL_POLYGON);
glVertex3f (1100.0,800.0, 0.0);
glVertex3f (980, 1500, 0.0);
glVertex3f (1030, 1500, 0.0);
glVertex3f (1150, 800, 0.0);
glEnd();

glBegin(GL_POLYGON);
glVertex3f (1000.0,1400.0, 0.0);
glVertex3f (900, 1450, 0.0);
glVertex3f (1600, 1450, 0.0);
glVertex3f (1700, 1400, 0.0);
glEnd();

glBegin(GL_POLYGON);
glVertex3f (1000.0,1000.0, 0.0);
glVertex3f (900, 1050, 0.0);
glVertex3f (1700, 1050, 0.0);
glVertex3f (1800, 1000, 0.0);
glEnd();

glBegin(GL_POLYGON);
glVertex3f (1600.0,800.0, 0.0);
glVertex3f (1545, 1500, 0.0);
glVertex3f (1590, 1500, 0.0);
glVertex3f (1650, 800, 0.0);
glEnd();

   
        //flower
        glPushMatrix();
	glColor3f(0.815686, 0.12549, 0.564706);
	glTranslatef(0,-900,0);
	glutSolidSphere(40,30,25);
	glPopMatrix();

	
	glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslatef(0,-970,0);
	glutSolidSphere(50,30,25);
	glPopMatrix();
        
        
        glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslatef(0,-830,0);
	glutSolidSphere(50,30,25);
	glPopMatrix();
        
        glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslatef(70,-900,0);
	glutSolidSphere(50,30,25);
	glPopMatrix();
        
        glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslatef(-70,-900,0);
	glutSolidSphere(50,30,25);
	glPopMatrix();
        
        
        
        //flower
        
        
        glPushMatrix();
        glTranslatef(600,-1500,0);
        glPushMatrix();
	glColor3f(0.815686, 0.12549, 0.564706);
	glTranslatef(0,-900,0);
	glutSolidSphere(40,30,25);
	glPopMatrix();

	
	glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslatef(0,-970,0);
	glutSolidSphere(50,30,25);
	glPopMatrix();
        
        
        glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslatef(0,-830,0);
	glutSolidSphere(50,30,25);
	glPopMatrix();
        
        glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslatef(70,-900,0);
	glutSolidSphere(50,30,25);
	glPopMatrix();
        
        glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslatef(-70,-900,0);
	glutSolidSphere(50,30,25);
	glPopMatrix();
        
        
        glPopMatrix();
        
        
        
        
        
        
        
        
        
        
          
        //flower
        
        
        glPushMatrix();
        glTranslatef(1000,-700,0);
        glPushMatrix();
	glColor3f(0.815686, 0.12549, 0.564706);
	glTranslatef(0,-900,0);
	glutSolidSphere(40,30,25);
	glPopMatrix();

	
	glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslatef(0,-970,0);
	glutSolidSphere(50,30,25);
	glPopMatrix();
        
        
        glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslatef(0,-830,0);
	glutSolidSphere(50,30,25);
	glPopMatrix();
        
        glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslatef(70,-900,0);
	glutSolidSphere(50,30,25);
	glPopMatrix();
        
        glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslatef(-70,-900,0);
	glutSolidSphere(50,30,25);
	glPopMatrix();
        
        
        glPopMatrix();
        
        
        
          
        //flower
        
        
        glPushMatrix();
        glTranslatef(-1500,100,0);
        glPushMatrix();
	glColor3f(0.815686, 0.12549, 0.564706);
	glTranslatef(0,-900,0);
	glutSolidSphere(40,30,25);
	glPopMatrix();

	
	glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslatef(0,-970,0);
	glutSolidSphere(50,30,25);
	glPopMatrix();
        
        
        glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslatef(0,-830,0);
	glutSolidSphere(50,30,25);
	glPopMatrix();
        
        glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslatef(70,-900,0);
	glutSolidSphere(50,30,25);
	glPopMatrix();
        
        glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslatef(-70,-900,0);
	glutSolidSphere(50,30,25);
	glPopMatrix();
        
        
        glPopMatrix();
        
        //flower
         
        glPushMatrix();
        glTranslatef(-1700,-1200,0);
        glPushMatrix();
	glColor3f(0.815686, 0.12549, 0.564706);
	glTranslatef(0,-900,0);
	glutSolidSphere(40,30,25);
	glPopMatrix();

	
	glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslatef(0,-970,0);
	glutSolidSphere(50,30,25);
	glPopMatrix();
        
        
        glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslatef(0,-830,0);
	glutSolidSphere(50,30,25);
	glPopMatrix();
        
        glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslatef(70,-900,0);
	glutSolidSphere(50,30,25);
	glPopMatrix();
        
        glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslatef(-70,-900,0);
	glutSolidSphere(50,30,25);
	glPopMatrix();
        
        
        glPopMatrix();
        
        
        
        //flower
         
        glPushMatrix();
        glTranslatef(1700,-1200,0);
        glPushMatrix();
	glColor3f(0.815686, 0.12549, 0.564706);
	glTranslatef(0,-900,0);
	glutSolidSphere(40,30,25);
	glPopMatrix();

	
	glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslatef(0,-970,0);
	glutSolidSphere(50,30,25);
	glPopMatrix();
        
        
        glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslatef(0,-830,0);
	glutSolidSphere(50,30,25);
	glPopMatrix();
        
        glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslatef(70,-900,0);
	glutSolidSphere(50,30,25);
	glPopMatrix();
        
        glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslatef(-70,-900,0);
	glutSolidSphere(50,30,25);
	glPopMatrix();
        
        
        glPopMatrix();
        
        
        
            //flower
         
        glPushMatrix();
        glTranslatef(2200,-300,0);
        glPushMatrix();
	glColor3f(0.815686, 0.12549, 0.564706);
	glTranslatef(0,-900,0);
	glutSolidSphere(40,30,25);
	glPopMatrix();

	
	glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslatef(0,-970,0);
	glutSolidSphere(50,30,25);
	glPopMatrix();
        
        
        glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslatef(0,-830,0);
	glutSolidSphere(50,30,25);
	glPopMatrix();
        
        glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslatef(70,-900,0);
	glutSolidSphere(50,30,25);
	glPopMatrix();
        
        glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslatef(-70,-900,0);
	glutSolidSphere(50,30,25);
	glPopMatrix();
        
        
        glPopMatrix();
        
        
        
        
         //flower
         
        glPushMatrix();
        glTranslatef(-2200,-600,0);
        glPushMatrix();
	glColor3f(0.815686, 0.12549, 0.564706);
	glTranslatef(0,-900,0);
	glutSolidSphere(40,30,25);
	glPopMatrix();

	
	glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslatef(0,-970,0);
	glutSolidSphere(50,30,25);
	glPopMatrix();
        
        
        glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslatef(0,-830,0);
	glutSolidSphere(50,30,25);
	glPopMatrix();
        
        glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslatef(70,-900,0);
	glutSolidSphere(50,30,25);
	glPopMatrix();
        
        glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslatef(-70,-900,0);
	glutSolidSphere(50,30,25);
	glPopMatrix();
        
        
        glPopMatrix();
        
        
        
        
         //flower
         
        glPushMatrix();
        glTranslatef(-600,-300,0);
        glPushMatrix();
	glColor3f(0.815686, 0.12549, 0.564706);
	glTranslatef(0,-900,0);
	glutSolidSphere(40,30,25);
	glPopMatrix();

	
	glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslatef(0,-970,0);
	glutSolidSphere(50,30,25);
	glPopMatrix();
        
        
        glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslatef(0,-830,0);
	glutSolidSphere(50,30,25);
	glPopMatrix();
        
        glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslatef(70,-900,0);
	glutSolidSphere(50,30,25);
	glPopMatrix();
        
        glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslatef(-70,-900,0);
	glutSolidSphere(50,30,25);
	glPopMatrix();
        
        
        glPopMatrix();
        
        
        
        
        
        
        
        
        
         //flower
         
        glPushMatrix();
        glTranslatef(-800,-800,0);
        glPushMatrix();
	glColor3f(0.815686, 0.12549, 0.564706);
	glTranslatef(0,-900,0);
	glutSolidSphere(40,30,25);
	glPopMatrix();

	
	glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslatef(0,-970,0);
	glutSolidSphere(50,30,25);
	glPopMatrix();
        
        
        glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslatef(0,-830,0);
	glutSolidSphere(50,30,25);
	glPopMatrix();
        
        glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslatef(70,-900,0);
	glutSolidSphere(50,30,25);
	glPopMatrix();
        
        glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslatef(-70,-900,0);
	glutSolidSphere(50,30,25);
	glPopMatrix();
        
        
        glPopMatrix();
        

sprintf(buffer,"%d",score);
glColor3f(0.156863, 0.156863, 0.156863);
glRasterPos3f (1000.0, 1700.0, 0.0);
glutBitmapString(GLUT_BITMAP_TIMES_ROMAN_24, "SCOREBOARD");



glColor3f(0.156863, 0.156863, 0.156863);
glRasterPos3f (-500.0, -1700.0, 0.0);
glutBitmapString(GLUT_BITMAP_HELVETICA_18, "PRESS LEFT MOUSE BUTTON TO BEGIN!!!");


glColor3f(0.156863, 0.156863, 0.156863);
glRasterPos3f (-500.0, -2000.0, 0.0);
glutBitmapString(GLUT_BITMAP_HELVETICA_18, "a-> LEFT s-> RIGHT!!!");

glColor3f(0, 0, 0.501961);
glRasterPos3f (1300.0, 1200.0, 0.0);
glutBitmapString(GLUT_BITMAP_HELVETICA_18, buffer);

glutSwapBuffers();

    
}

void spinDisplay(void)
{
    count=rand()%10;
    y-=5;
     
    if(y<=400 && x>=(-700+spin) && x<=(700+spin)){
        y=2000;
        score+=100;
        
        rand_num=rand() %2000 ;
         if(count>=3){
        x=0-rand_num;
        
       }
       else
           x=rand_num;
    }
    else{
        if(y<=-500){
             y=2000;
       
        
        rand_num=rand() %2000 ;
         if(count>=3){
        x=0-rand_num;
        
       }
       else
           x=rand_num;
            
        }
        
    }


    glutPostRedisplay();
 
}
void reshape(int w, int h)
{
glViewport (0, 0, (GLsizei) w, (GLsizei) h);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(-2500.0, 2500.0, -2500.0, 2500.0, -2500.0, 2500.0);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
}

void keyboard (unsigned char key, int x, int y)
{
switch (key) {
case 'a':
spin = (spin +20);
//glutIdleFunc(spinDisplay);

break;
case 's':
spin=spin-20;
glutPostRedisplay();
break;
case 'q':
    exit(0);
    break;
}
}
void mouse(int button, int state, int x, int y)
{
switch (button) {
case GLUT_LEFT_BUTTON:
if (state == GLUT_DOWN)
glutIdleFunc(spinDisplay);
break;
case GLUT_MIDDLE_BUTTON:
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
glutInitWindowSize (5000, 5000);
glutInitWindowPosition (100, 100);
glutCreateWindow ("The egg game");
init ();
glutDisplayFunc(display);
glutReshapeFunc(reshape);
glutKeyboardFunc(keyboard);
glutMouseFunc(mouse);


glutMainLoop();
return 0;
}
