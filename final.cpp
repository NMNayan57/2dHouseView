#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <math.h>
int windowWidth=800; int windowHeight=550;
double sval=1;
double txval=0,txval1=0;

 void StartingText()
{
    char text[120];

        sprintf(text, "UNIVERSITY OF INFORMATION TECHNOLOGY & SCIENCE",5.00,8.00);
    glColor3f(0, 1, 0);
    glRasterPos2f( -35 , 55 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -32 , 02 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }

    sprintf(text, "VILLAGE SCENARIO",5.00,8.00);
    glColor3f(0, 0, 0);
    glRasterPos2f( -20 , 45 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -32 , 02 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }

        sprintf(text, "NAME-S.M. NASIM MAHMUD NOYON",5.00,8.00);
    glColor3f(1, 0, 0);
    glRasterPos2f( -20 , 35 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -32 , 02 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }
        sprintf(text, "ID-1914551087",5.00,8.00);
    glColor3f(1, 0, 0);
    glRasterPos2f( -20 , 30 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -32 , 02 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }
            sprintf(text, "DEPARTMENT OF CSE",5.00,8.00);
    glColor3f(1, 0, 0);
    glRasterPos2f( -20 , 25 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -32 , 02 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }
            sprintf(text, "SUBMITTED TO-",5.00,8.00);
    glColor3f(0, 0, 1);
    glRasterPos2f( -20 , 17 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -32 , 02 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }
                sprintf(text, "SALIM SHADMAN ANKUR",5.00,8.00);
    glColor3f(0, 0, 1);
    glRasterPos2f( -10 , 12 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -32 , 02 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }
                sprintf(text, "PRESS 'd' FOR DAY MOOD",5.00,8.00);
    glColor3f(1, 0, 1);
    glRasterPos2f( -20 , 0 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -32 , 02 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }
        sprintf(text, " PRESS 'n' FOR NIGHT MOOD",5.00,8.00);
    glColor3f(0, 1, 0);
    glRasterPos2f( -21 , -5 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -32 , 02 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }
}


 void Display1()
{
        glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glClearColor(0,0,0,0);
    glMatrixMode( GL_PROJECTION );
    glLoadIdentity();
    gluOrtho2D(-60,60,-40,60);
    glMatrixMode( GL_MODELVIEW );
    glLoadIdentity();
    glPushMatrix();
    StartingText();
    glEnd();
    glPopMatrix();
     glFlush();
    glutSwapBuffers();



}
void init(void)
{

	glClearColor(1.0, 1.0, 1.0, 1.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0, 34.0, 0.0, 30.0);
}

void boat(){

	glColor3f(0.5f, 0.5f, 0.5f);//Violet
    glBegin(GL_POLYGON);
		glVertex2i(23, 7);
		glVertex2i(27, 7);
		glVertex2i(26, 6);
		glVertex2i(24, 6);

	glEnd();


}
void sun(){
    float theta;
    int i;
    glColor4f(1.0f, 1.0f, 0.0f, 0.0f);//yellow
    glBegin(GL_POLYGON);
    for(i=0;i<360;i++){
        theta=i*3.142/180;
        glVertex2f(5+2*cos(theta),20+2*sin(theta));

    }
    glEnd();
}

void moon(){
float theta;
    int i;
glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;



	  glVertex2f(7.5+2.5*cos(theta),27+2.5*sin(theta));
	}

	glEnd();
}


void tree(void){

	// tree
	glColor3f(0.8,0.4,0);//Brown

    glBegin(GL_POLYGON);
		glVertex2i(24, 15);
		glVertex2i(25, 15);
		glVertex2i(25, 11);
		glVertex2i(24, 11);

	glEnd();
glColor3f(0.137255f, 0.556863f, 0.137255f);//Forest Green
	glBegin(GL_POLYGON);
		glVertex2i(23, 20);
		glVertex2i(26, 20);
		glVertex2i(27, 19);
		glVertex2i(27, 16);
		glVertex2i(26, 15);
		glVertex2i(23, 15);
		glVertex2i(22, 16);
		glVertex2i(22, 19);

	glEnd();

}

void tree2(void){

	// tree
	glColor3f(0.1,0.2,0.2);//Brown

    glBegin(GL_POLYGON);
		glVertex2i(24, 15);
		glVertex2i(25, 15);
		glVertex2i(25, 11);
		glVertex2i(24, 11);

	glEnd();
glColor3f(0.1f, 0.3f, 0.2f);//Forest Green
	glBegin(GL_POLYGON);
		glVertex2i(23, 20);
		glVertex2i(26, 20);
		glVertex2i(27, 19);
		glVertex2i(27, 16);
		glVertex2i(26, 15);
		glVertex2i(23, 15);
		glVertex2i(22, 16);
		glVertex2i(22, 19);

	glEnd();

}

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glClearColor(0,0,0,0);
    glMatrixMode( GL_PROJECTION );
    glLoadIdentity();
    gluOrtho2D(0.0, 34.0, 0.0, 30.0);
    glMatrixMode( GL_MODELVIEW );
    glLoadIdentity();
  glViewport(0, 0 ,windowWidth ,windowHeight);




    glColor3f(0.74f, 0.84f, 0.84f);
	// Draw a line
	glBegin(GL_POLYGON);
		glVertex2i(1, 30);
		glVertex2i(33, 30);
		glVertex2i(33, 0);
		glVertex2i(1, 0);
	glEnd();
	glPopMatrix();


	//house
	glColor3f(1.0, 1.0, 0.9);
    glBegin(GL_POLYGON);
		glVertex2i(12, 15);
		glVertex2i(16, 15);
		glVertex2i(16, 11);
		glVertex2i(12, 11);

	glEnd();
	glColor3f(1.0, 1.0, 0.9);
    glBegin(GL_POLYGON);
		glVertex2i(16, 15);
		glVertex2i(21, 15);
		glVertex2i(21, 11);
		glVertex2i(16, 11);

	glEnd();//roof1
	  glColor3f(0.5, 0.5, 0.7);
    glBegin(GL_POLYGON);
		glVertex2i(14, 18);
		glVertex2i(19, 18);
		glVertex2i(21, 15);
		glVertex2i(16, 15);

	glEnd();//roof2
	    glColor3f(0.5, 0.5, 0.7);
    glBegin(GL_TRIANGLES);
		glVertex2i(12, 15);
		glVertex2i(14, 18);
		glVertex2i(16, 15);


	glEnd();
	// door
	  glColor3f(0.5, 0.5, 0.7);
    glBegin(GL_POLYGON);
		glVertex2i(13, 13);
		glVertex2i(15, 13);
		glVertex2i(15, 11);
		glVertex2i(13, 11);


	glEnd();
	// window
	  glColor3f(0.5, 0.5, 0.7);
    glBegin(GL_POLYGON);
		glVertex2i(17, 14);
		glVertex2i(18, 14);
		glVertex2i(18, 13);
		glVertex2i(17, 13);


	glEnd();//window2
	 glColor3f(0.5, 0.5, 0.7);
    glBegin(GL_POLYGON);
		glVertex2i(19, 14);
		glVertex2i(20, 14);
		glVertex2i(20, 13);
		glVertex2i(19, 13);
	glEnd();

	// road
		//glColor3f(0.35f, 0.16f, 0.14f);

	glColor4f(1.0f, 1.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
		glVertex2i(11, 11);
		glVertex2i(19, 11);
		glVertex2i(8, 0);
		glVertex2i(1, 0);
		glVertex2i(1, 3);
	glEnd();

    // fields
   glColor3f(0.0f, 1.0f, 0.0f);//Green
    glBegin(GL_POLYGON);
		glVertex2i(18, 11);
		glVertex2i(33, 11);
		glVertex2i(33, 0);
		glVertex2i(7, 0);

	glEnd();

	glColor3f(0.0f, 1.0f, 0.0f);//Green
    glBegin(GL_POLYGON);
		glVertex2i(1, 11);
		glVertex2i(11, 11);
		glVertex2i(1, 3);

	glEnd();
glPopMatrix();



    glPushMatrix();
    glTranslatef(txval,0,0);
    sun();
    glPopMatrix();

  // river
   glColor4f(0.0f, 1.0f, 1.0f, 1.0f);//light blue
    glBegin(GL_POLYGON);
		glVertex2i(23, 11);
		glVertex2i(33, 11);
		glVertex2i(29, 5);
		glVertex2i(18, 5);

	glEnd();
	glColor4f(0.0f, 1.0f, 1.0f, 1.0f);//light blue
    glBegin(GL_POLYGON);
		glVertex2i(21, 5);
		glVertex2i(32, 5);
		glVertex2i(28, 0);
		glVertex2i(16, 0);

	glEnd();


//boat
glPushMatrix();
    glTranslatef(txval1,0,0);
  boat();
    glPopMatrix();


//tree

glPushMatrix();
tree();
glPopMatrix();

glPushMatrix();
glTranslatef(-16,0,0);
tree();
glPopMatrix();

    	txval+= 0.0005;
		txval1-= 0.0004;
		if(txval > 25){
           txval = 1;
			txval1 = 1;
		}
        glutPostRedisplay();
    glColor3ub(255,255,255);//
    glRecti(-210,310,-200,-210);
    glRecti(200,310,210,-210);
        glFlush();
    glutSwapBuffers();

}

void display2(void)
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glClearColor(0,0,0,0);
    glMatrixMode( GL_PROJECTION );
    glLoadIdentity();
    gluOrtho2D(0.0, 34.0, 0.0, 30.0);
    glMatrixMode( GL_MODELVIEW );
    glLoadIdentity();
  glViewport(0, 0 ,windowWidth ,windowHeight);




    glColor3f(0.1,0.0,0.1);
	// Draw a line
	glBegin(GL_POLYGON);
		glVertex2i(1, 30);
		glVertex2i(33, 30);
		glVertex2i(33, 0);
		glVertex2i(1, 0);
	glEnd();
	glPopMatrix();


	//house
	glColor3f(0.3, 0.3, 0.3);
    glBegin(GL_POLYGON);
		glVertex2i(12, 15);
		glVertex2i(16, 15);
		glVertex2i(16, 11);
		glVertex2i(12, 11);

	glEnd();

	glColor3f(0.3, 0.3, 0.3);
    glBegin(GL_POLYGON);
		glVertex2i(16, 15);
		glVertex2i(21, 15);
		glVertex2i(21, 11);
		glVertex2i(16, 11);

	glEnd();//roof1

	  glColor3f(0.2, 0.2, 0.3);
    glBegin(GL_POLYGON);
		glVertex2i(14, 18);
		glVertex2i(19, 18);
		glVertex2i(21, 15);
		glVertex2i(16, 15);

	glEnd();//roof2

	    glColor3f(0.2, 0.2, 0.2);
    glBegin(GL_TRIANGLES);
		glVertex2i(12, 15);
		glVertex2i(14, 18);
		glVertex2i(16, 15);


	glEnd();
	// door
	  glColor3f(0.2, 0.2, 0.2);
    glBegin(GL_POLYGON);
		glVertex2i(13, 13);
		glVertex2i(15, 13);
		glVertex2i(15, 11);
		glVertex2i(13, 11);


	glEnd();
	// window
	  glColor3f(0.2, 0.2, 0.2);
    glBegin(GL_POLYGON);
		glVertex2i(17, 14);
		glVertex2i(18, 14);
		glVertex2i(18, 13);
		glVertex2i(17, 13);


	glEnd();//window2
	 glColor3f(0.2, 0.2, 0.2);
    glBegin(GL_POLYGON);
		glVertex2i(19, 14);
		glVertex2i(20, 14);
		glVertex2i(20, 13);
		glVertex2i(19, 13);
	glEnd();

	// road
		//glColor3f(0.35f, 0.16f, 0.14f);

	glColor4f(0.2f, 0.2f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
		glVertex2i(11, 11);
		glVertex2i(19, 11);
		glVertex2i(8, 0);
		glVertex2i(1, 0);
		glVertex2i(1, 3);
	glEnd();

    // fields
   glColor3f(0.0f, 0.2f, 0.0f);//Green
    glBegin(GL_POLYGON);
		glVertex2i(18, 11);
		glVertex2i(33, 11);
		glVertex2i(33, 0);
		glVertex2i(7, 0);

	glEnd();

	glColor3f(0.0f, 0.2f, 0.0f);//Green
    glBegin(GL_POLYGON);
		glVertex2i(1, 11);
		glVertex2i(11, 11);
		glVertex2i(1, 3);

	glEnd();
glPopMatrix();





  // river
   glColor4f(0.0f, 0.2f, 0.2f, 0.2f);//light blue
    glBegin(GL_POLYGON);
		glVertex2i(23, 11);
		glVertex2i(33, 11);
		glVertex2i(29, 5);
		glVertex2i(18, 5);

	glEnd();
	glColor4f(0.0f, 0.2f, 0.2f, 0.2f);//light blue
    glBegin(GL_POLYGON);
		glVertex2i(21, 5);
		glVertex2i(32, 5);
		glVertex2i(28, 0);
		glVertex2i(16, 0);

	glEnd();


//boat
glPushMatrix();
    glTranslatef(txval1,0,0);
  boat();
    glPopMatrix();


//sun
glPushMatrix();

   moon();
   glPopMatrix();

//tree
glPushMatrix();
tree2();
glPopMatrix();

glPushMatrix();
glTranslatef(-16,0,0);
tree2();
glPopMatrix();

    	txval+= 0.0005;
		txval1-= 0.0004;
		if(txval > 25){
           txval = 1;
			txval1 = 1;
		}
        glutPostRedisplay();
    glColor3ub(255,255,255);//
    glRecti(-210,310,-200,-210);
    glRecti(200,310,210,-210);
        glFlush();
    glutSwapBuffers();

}

void handleKeypress(unsigned char key, int x, int y) {
	switch (key) {
	    case  'd':
	        glutDestroyWindow(1);
	        glutInitWindowSize(750, 550);
            glutInitWindowPosition(100, 100);
            glutCreateWindow("village scenario");
            glutKeyboardFunc(handleKeypress);
            glutDisplayFunc(display);
              break;

     case 'n':
           glutDestroyWindow(1);
	        glutInitWindowSize(750, 550);
               glutInitWindowPosition(100, 100);
            glutCreateWindow("village scenario");
            glutKeyboardFunc(handleKeypress);
            glutDisplayFunc(display2);

            glutPostRedisplay();
            break;
		case 27:	// Escape key
			exit(1);



	}
}

int main (int argc, char **argv)
{
glutInit(&argc, argv);
glutInitWindowSize(1200,800);
glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
glutInitDisplayMode(GLUT_DOUBLE); // Enable double buffered mode

glutInitWindowPosition(10,10);

glutCreateWindow("VILLAGE SCENARIO");
glShadeModel( GL_SMOOTH );
glEnable( GL_DEPTH_TEST );

glutKeyboardFunc(handleKeypress);
  init();
	glShadeModel( GL_SMOOTH );



glutDisplayFunc(display);
//glutDisplayFunc(display2);

glutDisplayFunc(Display1);
glDepthFunc(GL_LEQUAL);

glutMainLoop();
return 0;
}
