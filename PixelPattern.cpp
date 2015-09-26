#include<iostream.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>

int mains(){
	
	void drawSegment(double, double, double, double, double, double, double, double, int );
	
	initwindow(1320, 660, "Chaos Game");
	start:
	double x1 = 10, x2 = 1310, y1 = 10, y2 = 10;
	for(int k = 0;y1 < 651; k++)
	{
	
			drawSegment(x1, y1, x1, y1, x2, y1, x2, y1, 1);
			
			y1+=10;
		
	}
	x1 = 10;
	
	y1 = 650;
	for(int k = 0;x1 < 1311 ; k++)
	{
	
			drawSegment(x1, y1, x1, y1, x1, y2, x1, y2, 1);
			
			x1+=10;
		
	}
	goto start;
	getch();
	
}




/* To construct the segment */
void drawSegment(double ax, double ay, double bx, double by, double cx, double cy, double dx, double dy, int radius){
	
	double px = ax;
	double py = ay; 
	int RADIUS = radius;
	//int colour = BLACK;
	
	for(int i = 0; i < 50; ++i){
		
		 setcolor(abs(rand()%16));
		
		switch(abs(rand()%4)){
			
				case 0:
			            px = (px + ax) / 2.0;
			            py = (py + ay) / 2.0;
			            circle( int(px), int (py), RADIUS);
                		break;
            		
				case 1:
                		px = (px + bx) / 2.0;
                		py = (py + by) / 2.0;
                		circle( int(px), int (py), RADIUS);
                		break;
            
				case 2:
		                px = (px + cx) / 2.0;
		                py = (py + cy) / 2.0;
		                circle( int(px), int (py), RADIUS);
		                break;
		                
		        case 3:
		                px = (px + dx) / 2.0;
		                py = (py + dy) / 2.0;
		               
		                circle( int(px), int (py), RADIUS);
		                break;
			
		}
		
		/* Delay */
		//for(int t = 0; t < 2000000; t++);
		
	}
	
}


