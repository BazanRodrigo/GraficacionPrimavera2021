#include<GL/glut.h>
float t (float x){
	float cl= x/255;
	return cl;
}	

void init(void){
	glClearColor(t(31), t(97), t(141),0);
	glMatrixMode(GL_MODELVIEW);
	gluLookAt(0,0,10,0,0,0,0,1,0);
	glMatrixMode(GL_PROJECTION);
	gluPerspective(120,1,1,20);
}

void ojos(){		
	glPushMatrix();
	
	//ojo xd
	//glRotated(45,0,0,0);
	glTranslated(0,0,150.95);
	glColor3f(t(99),t(28),t(22));		
	glutSolidTorus(2,6,200,200);		
	glTranslated(0,0,-150.95);
	
	//Puplia
	glTranslated(0,0,150.95);
	glColor3f(0,0,0);		
	glutSolidTorus(3,3,200,200);
	glTranslated(0,0,-150.95);
	
	//Piel del parpado
	glTranslated(0,0,140.5);
	glColor3f(t(235),t(57),t(0));	
	glutSolidSphere(12,200,200);
	glTranslated(0,0,-140.5);
	
	//---------------------------------------------------------------------------------------------------	
	//ojo xd
	glColor3f(t(99),t(28),t(22));		
	glutSolidTorus(2,6,200,200);	
	//Puplia
	glTranslated(0,0,0.95);
	glColor3f(0,0,0);		
	glutSolidTorus(3,3,200,200);
	glTranslated(0,0,-0.95);
	//Piel del parpado
	glTranslated(0,0,12.5);
	glColor3f(t(235),t(57),t(0));	
	glutSolidSphere(12,200,200);
	glTranslated(0,0,-12.5);	
	glPopMatrix();
}
	
void cuerpo(){
	//Cara
	glPushMatrix();	
	glColor3f(t(252),t(107),t(28));	
	//glScalef(-4,1,2);
	glRotated(-25,0,0,1);	
	glTranslated(50,-20,77);		
	glScalef(10,4,5.5);
	glutSolidSphere(12,200,200);
	
	glColor3f(t(235),t(57),t(0));	
	glScalef(.75,.5,.75);
	glRotated(-30,0,0,1);	
	glTranslated(8,-12,0);		
	glutSolidSphere(12,200,200);
	
	glColor3f(t(246),t(71),t(6));	
	glTranslated(6,5,-20);		
	gluCylinder(gluNewQuadric(), 5,5,40,30,3);
	
	glutSolidSphere(5,200,200);
	
	glColor3f(t(246),t(71),t(6));	
	glRotated(90,1,0,0);	
	glTranslated(4,5,3);		
	gluCylinder(gluNewQuadric(), 5,5,20,400,30);
	
		
	//glColor3f(t(2),t(71),t(6));		
	glTranslated(0,30,0);		
	gluCylinder(gluNewQuadric(), 5,5,20,400,30);
	glTranslated(-2,4,-4);		
	glutSolidSphere(5,200,200);
	
	
	glTranslated(-20,-5,0);	
	glRotated(400,0,1,0);	
	gluCylinder(gluNewQuadric(), .5,1.5,30,40,40);	
	
	
	glTranslated(0,-28,0);	
	//glRotated(400,0,1,0);	
	gluCylinder(gluNewQuadric(), .5,1.5,30,40,40);	
	
	
	glPopMatrix();
}
	
void patas(){
	glLineWidth(1.5); //GROSOR***
	//cilindro = gluNewQuadric();
	glColor3f(1, 0, 0);
	glBegin(GL_LINE_LOOP);
	glVertex3i(0,0,0);
	//glVertex3i(-5000,0,0);
	glVertex3i(0,-5000,0);
	glVertex3i(-1000,-1000,1000);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex3i(-1000,-1000,1000);
	glVertex3i(-2000,-2000,200);
	glEnd();
	
}
	
void dibujaRana(){
	glEnable(GL_DEPTH_TEST);
	glClear(GL_DEPTH_BUFFER_BIT);
	glClear(GL_COLOR_BUFFER_BIT);	
	glScalef(.05,.05,.05);
	for(int i=0;i<=360;i++)	{glEnable(GL_DEPTH_TEST);glClear(GL_DEPTH_BUFFER_BIT);glClear(GL_COLOR_BUFFER_BIT);							
	glRotated(i/100,0,i/100,1);	glTranslated(2,0,0);
	
		ojos();
		cuerpo();
		//patas();
		
	glTranslated(-2,0,0); glRotated(-i/100,0,-i/100,1);
	glFlush(); Sleep(10); glDisable(GL_DEPTH_TEST);		
	}	
	//ojos();	
	//cara();
	
	
	glFlush();		
	glDisable(GL_DEPTH_TEST);
	
}
	
void iluminacion(void){//Usando los predeterminados
	//Luz distante en la posicion(0,0,1)
	//Color de la FL: Negro, blanco y blanco
	/*float Posicionytipo[]={8,8,8,0};//Luz Local
	float Colorambiental[]={1,1,1,1};//Luz Blanca
	float Colordifuso[]={.5,.5,.5,1};//amarillo	
	float Colorespecular[]={0,0,0,1};//blanco
	glLightfv(GL_LIGHT0, GL_POSITION, Posicionytipo);
	glLightfv(GL_LIGHT0,GL_AMBIENT, Colorambiental);
	glLightfv(GL_LIGHT0, GL_DIFFUSE, Colordifuso);
	glLightfv(GL_LIGHT0, GL_SPECULAR, Colorespecular);
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);*/
	
	glMatrixMode(GL_MODELVIEW);
	glutInitDisplayMode(GLUT_DEPTH);
	
	//Area de dibujado
	dibujaRana();
	
}	
	int main(int argc, char** argv){	
		glutInitWindowSize(600,600);	
		glutInit(&argc, argv);
		glutCreateWindow("Programa basico en 3D");
		init();
		glutDisplayFunc(iluminacion);		
		glutMainLoop();				
		return 0;
	}
