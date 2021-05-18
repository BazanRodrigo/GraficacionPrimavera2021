#include <GL/glut.h>

float transforma (float x){
	float t= x/255;
	return t;
}


//Rutina inicializacion
void inicializa (void)
{	
	glClearColor(transforma(88), transforma(24), transforma(69),0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0,1100,0,1000);
}

//Rutina que pinta
void pinta(void){
	glClear(GL_COLOR_BUFFER_BIT);
	
	//linea 1
	glLineWidth(3);	//grosor de linea
	glBegin(GL_LINE_LOOP); //dibuja una linea
	
	glColor3f(transforma(255),transforma(195),transforma(0));	//color de linea 

	
	glBegin(GL_LINE_LOOP);
		glVertex2i( 288 , 394 );
		glVertex2i( 245 , 427 );
		glVertex2i( 298 , 435 );
	glEnd();
	
	glBegin(GL_LINE_LOOP);
		glVertex2i( 305 , 394 );
		glVertex2i( 345 , 427 );
		glVertex2i( 298 , 435 );
	glEnd();
	
	glBegin(GL_LINE_LOOP);
		glVertex2i( 298 , 435 );
		glVertex2i( 350 , 427 );
		glVertex2i( 345 , 463 );
		glVertex2i( 298 , 489 );
	glEnd();
	
	glBegin(GL_LINE_LOOP);
		glVertex2i( 298 , 435 );
		glVertex2i( 298 , 489 );
		glVertex2i( 255 , 463 );
		glVertex2i( 246 , 427 );
	glEnd();
	
	glBegin(GL_LINE_LOOP);
		glVertex2i( 208 , 497 );
		glVertex2i( 255 , 463 );
		glVertex2i( 245 , 427 );
	glEnd();	
	
	glBegin(GL_LINE_LOOP);
		glVertex2i( 345 , 463 );
		glVertex2i( 350 , 427 );
		glVertex2i( 388 , 494 );
	glEnd();	
	
	glBegin(GL_LINE_LOOP);
		glVertex2i( 343 , 463 );
		glVertex2i( 297 , 490 );
		glVertex2i( 326 , 515 );
	glEnd();
	
	glBegin(GL_LINE_LOOP);
		glVertex2i( 296 , 490 );
		glVertex2i( 267 , 517 );
		glVertex2i( 255 , 463 );
	glEnd();
	
	glBegin(GL_LINE_LOOP);
		glVertex2i( 255 , 463 );
		glVertex2i( 268 , 517 );
		glVertex2i( 233 , 535 );
		glVertex2i( 210 , 494 );
	glEnd();
	
	glBegin(GL_LINE_LOOP);
		glVertex2i( 343 , 463 );
		glVertex2i( 388 , 494 );
		glVertex2i( 364 , 535 );
		glVertex2i( 325 , 517 );
	glEnd();
	
	
	glBegin(GL_LINE_LOOP);
		glVertex2i( 340 , 463 );
		glVertex2i( 299 , 491 );
		glVertex2i( 326 , 518 );
		glVertex2i( 347 , 577 );
		glVertex2i( 348 , 610 );
		glVertex2i( 317 , 554 );
		glVertex2i( 310 , 553 );
		glVertex2i( 310 , 538 );
		glVertex2i( 307 , 521 );
		glVertex2i( 298 , 492 );
	glEnd();
	
	glBegin(GL_LINE_LOOP);
		glVertex2i( 326 , 518 );
		glVertex2i( 364 , 535 );
		glVertex2i( 347 , 577 );
	glEnd();
	
	glBegin(GL_LINE_LOOP);
		glVertex2i( 331 , 586 );
		glVertex2i( 342 , 630 );
		glVertex2i( 348 , 610 );
		glVertex2i( 331 , 582 );
	glEnd();
	
	glBegin(GL_LINE_LOOP);
		glVertex2i( 328 , 579 );
		glVertex2i( 313 , 592 );
		glVertex2i( 297 , 595 );
		glVertex2i( 297 , 630 );
		glVertex2i( 320 , 626 );
	glEnd();
	
	glBegin(GL_LINE_LOOP);
		glVertex2i( 295 , 491 );
		glVertex2i( 269 , 516 );
		glVertex2i( 250 , 576 );
		glVertex2i( 250 , 606 );
		glVertex2i( 267 , 577 );
		glVertex2i( 280 , 553 );
		glVertex2i( 284 , 552 );
		glVertex2i( 289 , 520 );
		glVertex2i( 297 , 510 );
	glEnd();
	
	glBegin(GL_LINE_LOOP);
		glVertex2i( 329 , 579 );
		glVertex2i( 317 , 554 );
		glVertex2i( 299 , 551 );
		glVertex2i( 297 , 597 );
		glVertex2i( 312 , 594 );
	glEnd();	
		
	glBegin(GL_LINE_LOOP);
		glVertex2i( 297 , 550 );
		glVertex2i( 297 , 534 );
		glVertex2i( 307 , 536 );
		glVertex2i( 312 , 551 );
	glEnd();
	
	glBegin(GL_LINE_LOOP);
		glVertex2i( 297 , 534 );
		glVertex2i( 307 , 522 );
		glVertex2i( 309 , 535 );
	glEnd();
	
	glBegin(GL_LINE_LOOP);
		glVertex2i( 297 , 534 );
		glVertex2i( 297 , 513 );
		glVertex2i( 306 , 520 );
	glEnd();
	
	glBegin(GL_LINE_LOOP);
		glVertex2i( 297 , 534 );
		glVertex2i( 297 , 508 );
		glVertex2i( 289 , 518 );	
	glEnd();

	glBegin(GL_LINE_LOOP);
		glVertex2i( 296 , 532 );
		glVertex2i( 285 , 538 );
		glVertex2i( 288 , 520 );
	glEnd();

	glBegin(GL_LINE_LOOP);
		glVertex2i( 298 , 550 );
		glVertex2i( 299 , 535 );
		glVertex2i( 288 , 535 );
		glVertex2i( 283 , 552 );
	glEnd();
	
	glBegin(GL_LINE_LOOP);
		glVertex2i( 297 , 596 );
		glVertex2i( 297 , 550 );
		glVertex2i( 279 , 551 );
		glVertex2i( 267 , 581 );
		glVertex2i( 282 , 594 );
	glEnd();
	
	glBegin(GL_LINE_LOOP);
		glVertex2i( 267 , 581 );
		glVertex2i( 281 , 595 );
		glVertex2i( 297 , 595 );
		glVertex2i( 297 , 630 );
		glVertex2i( 274 , 627 );
	glEnd();
	
	glBegin(GL_LINE_LOOP);
		glVertex2i( 266 , 580 );
		glVertex2i( 245 , 616 );
		glVertex2i( 252 , 633 );
	glEnd();
	
	glBegin(GL_LINE_LOOP);
		glVertex2i( 329 , 580 );
		glVertex2i( 350 , 616 );
		glVertex2i( 343 , 633 );
	glEnd();
	
	glBegin(GL_LINE_LOOP);
		glVertex2i( 269 , 581 );
		glVertex2i( 253 , 633 );
		glVertex2i( 257 , 646 );
		glVertex2i( 272 , 637 );
		glVertex2i( 274 , 625 );
	glEnd();
	
	glBegin(GL_LINE_LOOP);
		glVertex2i( 297 , 631 );
		glVertex2i( 274 , 628 );
		glVertex2i( 274 , 628 );
		glVertex2i( 269 , 663 );
		glVertex2i( 297 , 673 );
	glEnd();
	
	glBegin(GL_LINE_LOOP);
		glVertex2i( 298 , 630 );
		glVertex2i( 320 , 628 );
		glVertex2i( 323 , 665 );
		glVertex2i( 298 , 672 );
	glEnd();
	
	glBegin(GL_LINE_LOOP);
		glVertex2i( 299 , 673 );
		glVertex2i( 325 , 663 );
		glVertex2i( 324 , 696 );
		glVertex2i( 298 , 692 );
	glEnd();
	
	glBegin(GL_LINE_LOOP);
		glVertex2i( 297 , 674 );
		glVertex2i( 268 , 665 );
		glVertex2i( 273 , 696 );
		glVertex2i( 295 , 691 );
	glEnd();
	
	glBegin(GL_LINE_LOOP);
		glVertex2i( 296 , 691 );
		glVertex2i( 271 , 697 );
		glVertex2i( 259 , 713 );
		glVertex2i( 289 , 743 );
		glVertex2i( 297 , 731 );
		glEnd();
	
	glBegin(GL_LINE_LOOP);
		glVertex2i( 299 , 689 );
		glVertex2i( 297 , 731 );
		glVertex2i( 297 , 731 );
		glVertex2i( 307 , 743 );
		glVertex2i( 336 , 710 );
		glVertex2i( 336 , 710 );
		glVertex2i( 325 , 698 );
	glEnd();
	
	glBegin(GL_LINE_LOOP);
		glVertex2i( 298 , 731 );
		glVertex2i( 306 , 745 );
		glVertex2i( 298 , 743 );
	glEnd();
	
	glBegin(GL_LINE_LOOP);
		glVertex2i( 296 , 731 );
		glVertex2i( 289 , 745 );
		glVertex2i( 299 , 743 );
	glEnd();
	
	glBegin(GL_LINE_STRIP);
		glVertex2i( 335 , 711 );
		glVertex2i( 307 , 744 );
		glVertex2i( 351 , 729 );
		glVertex2i( 327 , 784 );
		glVertex2i( 379 , 775 );
		glVertex2i( 367 , 817 );
		glVertex2i( 414 , 792 );
		glVertex2i( 430 , 835 );
		glVertex2i( 458 , 789 );
		glVertex2i( 487 , 819 );
		glVertex2i( 494 , 776 );
		glVertex2i( 530 , 792 );
		glVertex2i( 530 , 749 );
		glVertex2i( 559 , 761 );
		glVertex2i( 550 , 726 );
		glVertex2i( 576 , 723 );
		glVertex2i( 556 , 698 );
		glVertex2i( 575 , 690 );
		glVertex2i( 547 , 673 );
		glVertex2i( 563 , 665 );
	glEnd();
	
	glBegin(GL_LINE_STRIP);
		glVertex2i( 259 , 711 );
		glVertex2i( 287 , 742 );
		glVertex2i( 246 , 733 );
		glVertex2i( 268 , 785 );
		glVertex2i( 217 , 772 );
		glVertex2i( 230 , 817 );
		glVertex2i( 183 , 793 );
		glVertex2i( 166 , 834 );
		glVertex2i( 138 , 790 );
		glVertex2i( 107 , 822 );
		glVertex2i( 101 , 775 );
		glVertex2i( 66 , 792 );
		glVertex2i( 67 , 751 );
		glVertex2i( 67 , 751 );
		glVertex2i( 34 , 757 );
		glVertex2i( 46 , 721 );
		glVertex2i( 46 , 721 );
		glVertex2i( 19 , 722 );
		glVertex2i( 39 , 699 );
		glVertex2i( 19 , 691 );
		glVertex2i( 49 , 672 );
		glVertex2i( 31 , 667 );
		glVertex2i( 52 , 640 );
	glEnd();
	
	glBegin(GL_LINE_LOOP);
		glVertex2i( 259 , 713 );
		glVertex2i( 244 , 731 );
		glVertex2i( 217 , 776 );
		glVertex2i( 183 , 789 );
		glVertex2i( 138 , 789 );
		glVertex2i( 103 , 775 );
		glVertex2i( 68 , 751 );
		glVertex2i( 44 , 723 );
		glVertex2i( 44 , 723 );
		glVertex2i( 38 , 698 );
		glVertex2i( 43 , 675 );
		glVertex2i( 43 , 675 );
		glVertex2i( 48 , 672 );
		glVertex2i( 54 , 640 );
		glVertex2i( 32 , 663 );
		glVertex2i( 17 , 692 );
		glVertex2i( 17 , 727 );
		glVertex2i( 33 , 758 );
		glVertex2i( 61 , 792 );
		glVertex2i( 110 , 821 );
		glVertex2i( 110 , 821 );
		glVertex2i( 162 , 834 );
		glVertex2i( 227 , 817 );
		glVertex2i( 268 , 788 );
		glVertex2i( 289 , 749 );	
	glEnd();
	
	glBegin(GL_LINE_LOOP);
		glVertex2i( 335 , 712 );
		glVertex2i( 380 , 776 );
		glVertex2i( 412 , 791 );
		glVertex2i( 456 , 787 );
		glVertex2i( 494 , 776 );
		glVertex2i( 529 , 750 );
		glVertex2i( 549 , 723 );
		glVertex2i( 556 , 699 );
		glVertex2i( 545 , 673 );
		glVertex2i( 540 , 640 );
		glVertex2i( 576 , 689 );
		glVertex2i( 576 , 689 );
		glVertex2i( 576 , 723 );
		glVertex2i( 560 , 759 );
		glVertex2i( 531 , 791 );
		glVertex2i( 486 , 822 );
		glVertex2i( 427 , 835 );
		glVertex2i( 365 , 817 );
		glVertex2i( 329 , 785 );
		glVertex2i( 308 , 746 );
	glEnd();
	
	glBegin(GL_LINE_LOOP);
		glVertex2i( 360 , 693 );
		glVertex2i( 375 , 690 );
		glVertex2i( 393 , 713 );
		glVertex2i( 361 , 717 );
	glEnd();
	
	glBegin(GL_LINE_LOOP);
		glVertex2i( 233 , 692 );
		glVertex2i( 231 , 714 );
		glVertex2i( 199 , 714 );
		glVertex2i( 217 , 691 );
	glEnd();
	
	glBegin(GL_LINE_LOOP);
		glVertex2i( 396 , 715 );
		glVertex2i( 483 , 719 );
		glVertex2i( 450 , 725 );
	glEnd();
	
	glBegin(GL_LINE_STRIP);
		glVertex2i( 385 , 699 );
		glVertex2i( 413 , 681 );
		glVertex2i( 461 , 717 );
		glVertex2i( 483 , 719 );
		glVertex2i( 396 , 716 );
		glVertex2i( 385 , 699 );
		glVertex2i( 385 , 699 );
	glEnd();
	
	glBegin(GL_LINE_LOOP);
		glVertex2i( 334 , 710 );
		glVertex2i( 350 , 731 );
		glVertex2i( 362 , 717 );
		glVertex2i( 358 , 698 );
	glEnd();
	
	glBegin(GL_LINE_LOOP);
		glVertex2i( 377 , 690 );
		glVertex2i( 384 , 700 );
		glVertex2i( 412 , 682 );
	glEnd();
	
	glBegin(GL_LINE_LOOP);
		glVertex2i( 324 , 666 );
		glVertex2i( 324 , 697 );
		glVertex2i( 336 , 709 );
		glVertex2i( 342 , 706 );
	glEnd();
		
	glBegin(GL_LINE_LOOP);
		glVertex2i( 324 , 672 );
		glVertex2i( 341 , 706 );
		glVertex2i( 359 , 699 );
		glVertex2i( 339 , 674 );
	glEnd();
	
	glBegin(GL_LINE_LOOP);
		glVertex2i( 326 , 666 );
		glVertex2i( 337 , 669 );
		glVertex2i( 337 , 676 );
		glVertex2i( 326 , 676 );
	glEnd();
	
	glBegin(GL_LINE_LOOP);
		glVertex2i( 338 , 670 );
		glVertex2i( 338 , 674 );
		glVertex2i( 354 , 687 );
		glVertex2i( 354 , 673 );
	glEnd();
	
	glBegin(GL_LINE_LOOP);
		glVertex2i( 353 , 673 );
		glVertex2i( 360 , 674 );
		glVertex2i( 360 , 698 );
		glVertex2i( 356 , 686 );
		glVertex2i( 356 , 686 );
		glVertex2i( 352 , 686 );
	glEnd();
	
	glBegin(GL_LINE_LOOP);
		glVertex2i( 322 , 625 );
		glVertex2i( 324 , 664 );
		glVertex2i( 337 , 667 );
	glEnd();
	
	glBegin(GL_LINE_LOOP);
		glVertex2i( 324 , 639 );
		glVertex2i( 337 , 645 );
		glVertex2i( 352 , 672 );
		glVertex2i( 339 , 668 );
	glEnd();
	
	glBegin(GL_LINE_LOOP);
		glVertex2i( 339 , 643 );
		glVertex2i( 352 , 674 );
		glVertex2i( 359 , 674 );
		glVertex2i( 349 , 615 );
	glEnd();
	
	glBegin(GL_LINE_LOOP);
		glVertex2i( 266 , 579 );
		glVertex2i( 273 , 628 );
		glVertex2i( 269 , 638 );
		glVertex2i( 257 , 646 );
		glVertex2i( 251 , 631 );
	glEnd();
	
	glBegin(GL_LINE_LOOP);
		glVertex2i( 266 , 579 );
		glVertex2i( 246 , 615 );
	glEnd();
	
	glBegin(GL_LINE_LOOP);
		glVertex2i( 245 , 616 );
		glVertex2i( 255 , 647 );
		glVertex2i( 244 , 673 );
	glEnd();
	
	glBegin(GL_LINE_LOOP);
		glVertex2i( 236 , 673 );
		glVertex2i( 243 , 674 );
		glVertex2i( 243 , 685 );
		glVertex2i( 235 , 699 );
	glEnd();
	
	glBegin(GL_LINE_LOOP);
		glVertex2i( 245 , 618 );
		glVertex2i( 256 , 644 );
		glVertex2i( 243 , 672 );
		glVertex2i( 236 , 674 );	
		glVertex2i( 245 , 616 );
	glEnd();
	
	glBegin(GL_LINE_LOOP);
		glVertex2i( 274 , 631 );
		glVertex2i( 256 , 669 );
		glVertex2i( 270 , 664 );
	glEnd();
	
	glBegin(GL_LINE_LOOP);
		glVertex2i( 269 , 639 );
		glVertex2i( 257 , 644 );
		glVertex2i( 244 , 673 );
		glVertex2i( 257 , 667 );
	glEnd();
	
	glBegin(GL_LINE_STRIP);
		glVertex2i( 243 , 672 );
		glVertex2i( 243 , 682 );
		glVertex2i( 255 , 674 );
		glVertex2i( 256 , 668 );
	glEnd();
	
	glBegin(GL_LINE_LOOP);
		glVertex2i( 330 , 579 );
		glVertex2i( 320 , 630 );
		glVertex2i( 327 , 638 );
		glVertex2i( 338 , 646 );
		glVertex2i( 343 , 633 );
	glEnd();
	
	glBegin(GL_LINE_STRIP);
		glVertex2i( 218 , 691 );
		glVertex2i( 184 , 682 );
	glEnd();
	
	glBegin(GL_LINE_STRIP);
		glVertex2i( 242 , 675 );
		glVertex2i( 242 , 685 );
		glVertex2i( 253 , 676 );
		glVertex2i( 256 , 669 );	
	glEnd();
	
	glBegin(GL_LINE_LOOP);
		glVertex2i( 269 , 663 );
		glVertex2i( 255 , 669 );
		glVertex2i( 255 , 675 );
		glVertex2i( 266 , 677 );
	glEnd();
	
	glBegin(GL_LINE_LOOP);
		glVertex2i( 255 , 672 );
		glVertex2i( 269 , 677 );
		glVertex2i( 269 , 677 );
		glVertex2i( 253 , 704 );
		glVertex2i( 236 , 698 );
		glVertex2i( 236 , 698 );
		glVertex2i( 240 , 686 );
	glEnd();

	glBegin(GL_LINE_LOOP);
		glVertex2i( 268 , 679 );
		glVertex2i( 253 , 707 );
		glVertex2i( 263 , 709 );
		glVertex2i( 271 , 698 );
		glVertex2i( 268 , 679 );
	glEnd();
	
	glBegin(GL_LINE_LOOP);
		glVertex2i( 236 , 697 );
		glVertex2i( 262 , 710 );
		glVertex2i( 245 , 731 );
		glVertex2i( 233 , 716 );
		glVertex2i( 233 , 716 );
	glEnd();
	
	glBegin(GL_LINE_LOOP);
	glVertex2i( 219 , 688 );
	glVertex2i( 185 , 683 );
	glVertex2i( 211 , 701 );
	glEnd();
	
	glBegin(GL_LINE_LOOP);
	glVertex2i( 209 , 702 );
	glVertex2i( 201 , 713 );
	glVertex2i( 110 , 717 );
	glVertex2i( 128 , 696 );
	glVertex2i( 185 , 683 );		
	glEnd();
	
	glBegin(GL_LINE_LOOP);
	glVertex2i( 197 , 715 );
	glVertex2i( 146 , 727 );
	glVertex2i( 112 , 716 );
	glEnd();
	
	glBegin(GL_LINE_LOOP);
	glVertex2i( 269 , 518 );
	glVertex2i( 232 , 539 );
	glVertex2i( 232 , 539 );
	glVertex2i( 248 , 577 );
	glEnd();
	
	glFlush();
}
	
	int main (int argc, char **argv) {
		glutInitWindowSize(1000,1100);
		glutInit (&argc, argv);
		glutCreateWindow("");
		inicializa();
		glutDisplayFunc(pinta);
		glutMainLoop();
		
		return 0;
	}

