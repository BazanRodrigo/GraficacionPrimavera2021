#include <GL/glut.h>	
typedef int dim3[3];//define un tipo de variable nueva: un arreglo de 3 enteros

dim3 vertices[8]={{-1,-1,-1},{-1,1,-1},{1,1,-1},{1,-1,-1,},{-1,-1,1},{-1,1,1},{1,1,1},{1,-1,1}};//crea un arreglo de 8 de las cosas de arriba

void inicializa(void)
{
	glClearColor(0.5,0.5,0.5,0.0);	//Color de fondo RGBA(A no interesa por ahora)
	glMatrixMode(GL_MODELVIEW);
	gluLookAt(0,4,4,0,0,0,0,1,0);
	glMatrixMode(GL_PROJECTION);	//Para el tipo de matriz a usar:Proyeccion
	glOrtho(0,6,0,6,1,8);
}

void dibujacara(int a, int b, int c, int d){//en esta funcion le pasamos 4 enteros que seran los indices del arreglo de vertices que declaramos anteriormente
	glBegin(GL_QUADS);//esta funcion sirve para dibujar un cuadrado
	glVertex3iv(vertices[a]);//punto 1
	glVertex3iv(vertices[b]);//punto 2
	glVertex3iv(vertices[c]);//punto 3
	glVertex3iv(vertices[d]);//punto 4
	glEnd();//fin xD
}
	
	void Cubo3DQUADS(void){
		glMatrixMode(GL_MODELVIEW);
		glutInitDisplayMode(GL_DEPTH); 	//buffer de profundidad *obligatorio
		for(int i=0; i<=3600; i++)
		{
			glRotated(i,1,1,0);
			glTranslated(1,-1,1);
			glClear(GL_DEPTH_BUFFER_BIT); 	//buffer de profundidad *obligatorio
			glEnable(GL_DEPTH_TEST); 	//buffer de profundidad *obligatorio
			glClear(GL_COLOR_BUFFER_BIT); 	//buffer de profundidad *obligatorio
			glColor3f(1,0,0);
			dibujacara(0,1,2,3); //abajo
			glColor3f(0,1,0);
			dibujacara(0,3,7,4); //atras
			glColor3f(0,0,1);
			dibujacara(0,4,5,1); //izquierda
			glColor3f(1,1,0);
			dibujacara(3,2,6,7); //derecha
			glColor3f(1,0,1);
			dibujacara(4,5,6,7); //arriba
			glColor3f(0,1,1);
			dibujacara(1,2,6,5); //frente
			glFlush();
			glTranslated(-1,1,-1);
			glRotated(-i,1,1,0);
			Sleep(10);
			glDisable(GL_DEPTH_TEST);	 //buffer de profundidad *obligatorio
		}
	}
		
		int main(int argc, char** argv)
		{
			glutInitWindowSize(600,600);
			glutInit(&argc, argv);
			glutCreateWindow("Cubo en 3D");
			inicializa();
			glutDisplayFunc(Cubo3DQUADS);
			glutMainLoop();
			return 0;
		}
