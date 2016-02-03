
#include<stdlib.h>
#include<GL/glut.h>
#include<math.h>
#define PI 3.14

static GLfloat spin = 450.0,final=450.0,x=-400,y=450.0,radius=50.0f;
static int flag=0,i=0;
void spinDisplay(void);
void display(void);
void init(void){
    
glClearColor (0.0, 0.0, 0.0, 0.0);
glShadeModel (GL_FLAT);
}
void display(void){
    
glClear(GL_COLOR_BUFFER_BIT);


        glColor3f(0.956863, 0.116863, 0.116863);
        glRasterPos3f (200.0, 400.0, 0.0);
        glutBitmapString(GLUT_BITMAP_TIMES_ROMAN_24, "BOUNCING BALL");
        glColor3f(0.956863, 0.113863, 0.116863);
        glRasterPos3f (150.0, 350.0, 0.0);
        glutBitmapString(GLUT_BITMAP_TIMES_ROMAN_24, "Press left mouse button to bounce");


	
        //the ball
	int triangleAmount = 20; 
	
	GLfloat twicePi = 2.0f * PI;
	glColor3f(0 ,0.270588, 0.0745098);
        glPushMatrix();
        
        glColor3f(1, 1, 0);

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


        glutSwapBuffers();
}

void spinDisplay(void){


    if(y<=-500){
        flag=1;
        final=final-50.0;
        x=x+40;
        radius=radius-0.22;
    }
    if(y<=final &&flag==1 ){
    
        y=y+10;
    
    }

    else{
        flag=0;
        y=y-10;
    }
    if(x>=400 ){
        
        glutIdleFunc(NULL);
    }
    glutPostRedisplay();

}

void reshape(int w, int h){
    
    glViewport (0, 0, (GLsizei) w, (GLsizei) h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-500.0, 500.0, -500.0, 500.0, -500.0, 500.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

void mouse(int button, int state, int x, int y){
    
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


int main(int argc, char** argv){
    
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize (1000, 1000);
    glutInitWindowPosition (100, 100);
    glutCreateWindow (argv[0]);
    init ();
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutMouseFunc(mouse);
    glutMainLoop();
    return 0;
}
