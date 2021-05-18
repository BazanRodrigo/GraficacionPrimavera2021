#include <GL/glut.h>
float color(float color){
	return color/255;
}

float rgb(float c){
	float r=c/255;
	return r;
}	

void inicializa(void){
	glClearColor(1.0,1.0,1.0,0.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0,//left
		3000,//right
		0,//	bottom
		3000//top
		);//Definimos el sistema de coordenadas de la ventana
}

void CurvaBezier(void){
	glClear(GL_COLOR_BUFFER_BIT);
	float a=400,b=400;
	//for(int i=0;i<600;i++){				
		//float puntosDeControl[2][3]={{800,1800,0},{200,50,0}};
		float puntosDeControl[6][3]={{1500,1500,0},{300,1200,0},{600,300,0},{1500,300,0},{3000,750,0},{3000,1200,0}};
		glLineWidth(1); //GROSOR***
		glMap1f(GL_MAP1_VERTEX_3,0.0,1.0,3,7,*puntosDeControl);
		glEnable(GL_MAP1_VERTEX_3);
		glMapGrid1f(100,0.0,1.0);
		glColor3f(1,0,0);
		glEvalMesh1(GL_LINE,0,100);
		//glEvalMesh1(GL_POINT,0,100);
		glDisable(GL_MAP1_VERTEX_3);
	//}
			
	glColor3f(1,1,1);
	glBegin(GL_LINES);
	glVertex2d(-500,0);
	glVertex2d(500,0);
	glEnd();
	glBegin(GL_LINES);
	glVertex2d(0,-500);
	glVertex2d(0,500);
	glEnd();
	glLineWidth(1);	
			
	int z=-0;
	for (int f = 0; f < 3000; f++){
		z=z+10;
		glBegin(GL_LINES);
		glColor3f(rgb(0),rgb(70),rgb(131));
		glVertex2d(0,z);
		glVertex2d(3000,z);
		glEnd();
		
		glBegin(GL_LINES);
		glColor3f(rgb(0),rgb(70),rgb(131));
		glVertex2d(z,0);
		glVertex2d(z,3000);
		glEnd();		
	}
	
	int d=-0;
	for (int f = 0; f < 3000; f++){
		d=d+50;
		glBegin(GL_LINES);
		glColor3f(rgb(42),rgb(193),rgb(0));
		glVertex2d(3000,d);
		glVertex2d(3000,d);
		glEnd();
		
		glBegin(GL_LINES);
		glColor3f(rgb(42),rgb(193),rgb(0));
		glVertex2d(d,0);
		glVertex2d(d,3000);
		glEnd();		
	}
	
	glColor3f(1,1,1);
	glBegin(GL_LINES);
	glVertex2d(-500,0);
	glVertex2d(500,0);
	glEnd();
	glBegin(GL_LINES);
	glVertex2d(0,-500);
	glVertex2d(0,500);
	glEnd();
	
	glLineWidth(1);	
	
	
glFlush();
}

int main (int argc, char **argv) {
	glutInitWindowSize(900,900);
	glutInit (&argc, argv);
	glutCreateWindow("Curvas de bezier");
	inicializa();
	glutDisplayFunc(CurvaBezier);
	glutMainLoop();
	return 0;
}
