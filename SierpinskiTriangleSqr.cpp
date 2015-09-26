#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#define colour1 WHITE
#define colour2 BLUE
#define colour3 GREEN
#define steps 100000
int count=0;
void drawSierpinski(double ax,double ay,double bx,double by,double cx, double cy,int colour)
{   
    float px=ax,py=ay;
    for(int i = 0;i < steps; i++){
			colour = BLACK;
				switch(abs(rand() % 3)){
					
					  	case 0:
			            px = (px + ax) / 2.0;
			            py = (py + ay) / 2.0;
			            putpixel(int(px),int(py),colour);
                		break;
            		
						case 1:
                		px = (px + bx) / 2.0;
                		py = (py + by) / 2.0;
                		putpixel(int(px),int(py),colour);
                		break;
            
						case 2:
		                px = (px + cx) / 2.0;
		                py = (py + cy) / 2.0;
		                putpixel(int(px),int(py),colour);
		                break;
				}
			
				//for(float t=0;t<100000;t+=3.6);
				
		}
	
		
}
int mains(){
		int i,p;
		int points[] = {0,0,660,0,660,660,0,660};
		initwindow(660, 660, "Chaos Game");
		setfillstyle(SOLID_FILL, WHITE);
        fillpoly(4, points);
		
		double ax[10],ay[10],cx[10],cy[10],bx[10],by[10];
		 ax[0] = 0.0;
		 ay[0] = 0.0;
		 bx[0] = 165.0;
		 by[0] = 165.0;
		 cx[0] = 0.0;
		 cy[0] = 330.0;
        
		{
            for( p=0; p<7;++p)
            {
                drawSierpinski(ax[p],ay[p],bx[p],by[p],cx[p],cy[p],abs(rand()%6));
                ax[p+1] = (ax[p] + bx[p]) / 2;
                ay[p+1] = (ay[p] + by[p]) / 2;
                bx[p+1] = (cx[p] + bx[p]) / 2;
                by[p+1] = (cy[p] + by[p]) / 2;
                cx[p+1] = (ax[p] + cx[p]) / 2;
                cy[p+1] = (ay[p] + cy[p]) / 2;
        	}
            
        }
         ax[0] = 0.0;
		 ay[0] = 330.0;
		 bx[0] = 165.0;
		 by[0] = 495.0;
		 cx[0] = 0.0;
		 cy[0] = 660.0;
        
		{
            for( p=0; p<7;++p)
            {
                drawSierpinski(ax[p],ay[p],bx[p],by[p],cx[p],cy[p],abs(rand()%6));
                ax[p+1] = (ax[p] + bx[p]) / 2;
                ay[p+1] = (ay[p] + by[p]) / 2;
                bx[p+1] = (cx[p] + bx[p]) / 2;
                by[p+1] = (cy[p] + by[p]) / 2;
                cx[p+1] = (ax[p] + cx[p]) / 2;
                cy[p+1] = (ay[p] + cy[p]) / 2;
        	}
            
        }
         ax[0] = 0.0;
		 ay[0] = 660.0;
		 bx[0] = 165.0;
		 by[0] = 495.0;
		 cx[0] = 330.0;
		 cy[0] = 660.0;
        
		{
            for( p=0; p<7;++p)
            {
                drawSierpinski(ax[p],ay[p],bx[p],by[p],cx[p],cy[p],abs(rand()%6));
                ax[p+1] = (ax[p] + bx[p]) / 2;
                ay[p+1] = (ay[p] + by[p]) / 2;
                bx[p+1] = (cx[p] + bx[p]) / 2;
                by[p+1] = (cy[p] + by[p]) / 2;
                cx[p+1] = (ax[p] + cx[p]) / 2;
                cy[p+1] = (ay[p] + cy[p]) / 2;
        	}
            
        }
         ax[0] = 330.0;
		 ay[0] = 660.0;
		 bx[0] = 495.0;
		 by[0] = 495.0;
		 cx[0] = 660.0;
		 cy[0] = 660.0;
		 
		{
            for( p=0; p<7;++p)
            {
                drawSierpinski(ax[p],ay[p],bx[p],by[p],cx[p],cy[p],abs(rand()%6));
                ax[p+1] = (ax[p] + bx[p]) / 2;
                ay[p+1] = (ay[p] + by[p]) / 2;
                bx[p+1] = (cx[p] + bx[p]) / 2;
                by[p+1] = (cy[p] + by[p]) / 2;
                cx[p+1] = (ax[p] + cx[p]) / 2;
                cy[p+1] = (ay[p] + cy[p]) / 2;
        	}
            
        }
        
           ax[0] = 660.0;
		 ay[0] = 660.0;
		 bx[0] = 495.0;
		 by[0] = 495.0;
		 cx[0] = 660.0;
		 cy[0] = 330.0;
        
		{
            for( p=0; p<7;++p)
            {
                drawSierpinski(ax[p],ay[p],bx[p],by[p],cx[p],cy[p],abs(rand()%6));
                ax[p+1] = (ax[p] + bx[p]) / 2;
                ay[p+1] = (ay[p] + by[p]) / 2;
                bx[p+1] = (cx[p] + bx[p]) / 2;
                by[p+1] = (cy[p] + by[p]) / 2;
                cx[p+1] = (ax[p] + cx[p]) / 2;
                cy[p+1] = (ay[p] + cy[p]) / 2;
        	}
            
        }
           ax[0] = 660.0;
		 ay[0] = 330.0;
		 bx[0] = 495.0;
		 by[0] = 165.0;
		 cx[0] = 660.0;
		 cy[0] = 0.0;
        
		{
            for( p=0; p<7;++p)
            {
                drawSierpinski(ax[p],ay[p],bx[p],by[p],cx[p],cy[p],abs(rand()%6));
                ax[p+1] = (ax[p] + bx[p]) / 2;
                ay[p+1] = (ay[p] + by[p]) / 2;
                bx[p+1] = (cx[p] + bx[p]) / 2;
                by[p+1] = (cy[p] + by[p]) / 2;
                cx[p+1] = (ax[p] + cx[p]) / 2;
                cy[p+1] = (ay[p] + cy[p]) / 2;
        	}
            
        }
           ax[0] = 660.0;
		 ay[0] = 0.0;
		 bx[0] = 495.0;
		 by[0] = 165.0;
		 cx[0] = 330.0;
		 cy[0] = 0.0;
        
		{
            for( p=0; p<7;++p)
            {
                drawSierpinski(ax[p],ay[p],bx[p],by[p],cx[p],cy[p],abs(rand()%6));
                ax[p+1] = (ax[p] + bx[p]) / 2;
                ay[p+1] = (ay[p] + by[p]) / 2;
                bx[p+1] = (cx[p] + bx[p]) / 2;
                by[p+1] = (cy[p] + by[p]) / 2;
                cx[p+1] = (ax[p] + cx[p]) / 2;
                cy[p+1] = (ay[p] + cy[p]) / 2;
        	}
            
        }
           ax[0] = 330.0;
		 ay[0] = 0.0;
		 bx[0] = 165.0;
		 by[0] = 165.0;
		 cx[0] = 0.0;
		 cy[0] = 0.0;
        
		{
            for( p=0; p<7;++p)
            {
                drawSierpinski(ax[p],ay[p],bx[p],by[p],cx[p],cy[p],abs(rand()%6));
                ax[p+1] = (ax[p] + bx[p]) / 2;
                ay[p+1] = (ay[p] + by[p]) / 2;
                bx[p+1] = (cx[p] + bx[p]) / 2;
                by[p+1] = (cy[p] + by[p]) / 2;
                cx[p+1] = (ax[p] + cx[p]) / 2;
                cy[p+1] = (ay[p] + cy[p]) / 2;
        	}
            
        }
           ax[0] = 165.0;
		 ay[0] = 165.0;
		 bx[0] = 330.0;
		 by[0] = 0.0;
		 cx[0] = 495.0;
		 cy[0] = 165.0;

		{
            for( p=0; p<7;++p)
            {
                drawSierpinski(ax[p],ay[p],bx[p],by[p],cx[p],cy[p],abs(rand()%6));
                ax[p+1] = (ax[p] + bx[p]) / 2;
                ay[p+1] = (ay[p] + by[p]) / 2;
                bx[p+1] = (cx[p] + bx[p]) / 2;
                by[p+1] = (cy[p] + by[p]) / 2;
                cx[p+1] = (ax[p] + cx[p]) / 2;
                cy[p+1] = (ay[p] + cy[p]) / 2;
        	}
            
        }
           ax[0] = 495.0;
		 ay[0] = 165.0;
		 bx[0] = 660.0;
		 by[0] = 330.0;
		 cx[0] = 495.0;
		 cy[0] = 495.0;
        
        //for( i = 0; i <4; ++i)
		{
            for( p=0; p<7;++p)
            {
                drawSierpinski(ax[p],ay[p],bx[p],by[p],cx[p],cy[p],abs(rand()%6));
                ax[p+1] = (ax[p] + bx[p]) / 2;
                ay[p+1] = (ay[p] + by[p]) / 2;
                bx[p+1] = (cx[p] + bx[p]) / 2;
                by[p+1] = (cy[p] + by[p]) / 2;
                cx[p+1] = (ax[p] + cx[p]) / 2;
                cy[p+1] = (ay[p] + cy[p]) / 2;
        	}
            
        }
           ax[0] = 495.0;
		 ay[0] = 495.0;
		 bx[0] = 330.0;
		 by[0] = 660.0;
		 cx[0] = 165.0;
		 cy[0] = 495.0;
        
        //for( i = 0; i <4; ++i)
		{
            for( p=0; p<7;++p)
            {
                drawSierpinski(ax[p],ay[p],bx[p],by[p],cx[p],cy[p],abs(rand()%6));
                ax[p+1] = (ax[p] + bx[p]) / 2;
                ay[p+1] = (ay[p] + by[p]) / 2;
                bx[p+1] = (cx[p] + bx[p]) / 2;
                by[p+1] = (cy[p] + by[p]) / 2;
                cx[p+1] = (ax[p] + cx[p]) / 2;
                cy[p+1] = (ay[p] + cy[p]) / 2;
        	}
            
        }
           ax[0] = 165.0;
		 ay[0] = 495.0;
		 bx[0] = 0.0;
		 by[0] = 330.0;
		 cx[0] = 165.0;
		 cy[0] = 165.0;
        
        //for( i = 0; i <4; ++i)
		{
            for( p=0; p<7;++p)
            {
                drawSierpinski(ax[p],ay[p],bx[p],by[p],cx[p],cy[p],abs(rand()%6));
                ax[p+1] = (ax[p] + bx[p]) / 2;
                ay[p+1] = (ay[p] + by[p]) / 2;
                bx[p+1] = (cx[p] + bx[p]) / 2;
                by[p+1] = (cy[p] + by[p]) / 2;
                cx[p+1] = (ax[p] + cx[p]) / 2;
                cy[p+1] = (ay[p] + cy[p]) / 2;
        	}
            
        }
           ax[0] = 165.0;
		 ay[0] = 165.0;
		 bx[0] = 330.0;
		 by[0] = 330.0;
		 cx[0] = 495.0;
		 cy[0] = 165.0;
        
        //for( i = 0; i <4; ++i)
		{
            for( p=0; p<7;++p)
            {
                drawSierpinski(ax[p],ay[p],bx[p],by[p],cx[p],cy[p],abs(rand()%6));
                ax[p+1] = (ax[p] + bx[p]) / 2;
                ay[p+1] = (ay[p] + by[p]) / 2;
                bx[p+1] = (cx[p] + bx[p]) / 2;
                by[p+1] = (cy[p] + by[p]) / 2;
                cx[p+1] = (ax[p] + cx[p]) / 2;
                cy[p+1] = (ay[p] + cy[p]) / 2;
        	}
            
        }
           ax[0] = 495.0;
		 ay[0] = 165.0;
		 bx[0] = 330.0;
		 by[0] = 330.0;
		 cx[0] = 495.0;
		 cy[0] = 495.0;
        
        //for( i = 0; i <4; ++i)
		{
            for( p=0; p<7;++p)
            {
                drawSierpinski(ax[p],ay[p],bx[p],by[p],cx[p],cy[p],abs(rand()%6));
                ax[p+1] = (ax[p] + bx[p]) / 2;
                ay[p+1] = (ay[p] + by[p]) / 2;
                bx[p+1] = (cx[p] + bx[p]) / 2;
                by[p+1] = (cy[p] + by[p]) / 2;
                cx[p+1] = (ax[p] + cx[p]) / 2;
                cy[p+1] = (ay[p] + cy[p]) / 2;
        	}
            
        }
           ax[0] = 495.0;
		 ay[0] = 495.0;
		 bx[0] = 330.0;
		 by[0] = 330.0;
		 cx[0] = 165.0;
		 cy[0] = 495.0;
        
        //for( i = 0; i <4; ++i)
		{
            for( p=0; p<7;++p)
            {
                drawSierpinski(ax[p],ay[p],bx[p],by[p],cx[p],cy[p],abs(rand()%6));
                ax[p+1] = (ax[p] + bx[p]) / 2;
                ay[p+1] = (ay[p] + by[p]) / 2;
                bx[p+1] = (cx[p] + bx[p]) / 2;
                by[p+1] = (cy[p] + by[p]) / 2;
                cx[p+1] = (ax[p] + cx[p]) / 2;
                cy[p+1] = (ay[p] + cy[p]) / 2;
        	}
            
        }
           ax[0] = 165.0;
		 ay[0] = 495.0;
		 bx[0] = 330.0;
		 by[0] = 330.0;
		 cx[0] = 165.0;
		 cy[0] = 165.0;
        
        //for( i = 0; i <4; ++i)
		{
            for( p=0; p<7;++p)
            {
                drawSierpinski(ax[p],ay[p],bx[p],by[p],cx[p],cy[p],abs(rand()%6));
                ax[p+1] = (ax[p] + bx[p]) / 2;
                ay[p+1] = (ay[p] + by[p]) / 2;
                bx[p+1] = (cx[p] + bx[p]) / 2;
                by[p+1] = (cy[p] + by[p]) / 2;
                cx[p+1] = (ax[p] + cx[p]) / 2;
                cy[p+1] = (ay[p] + cy[p]) / 2;
        	}
            
        }
        setfillstyle(SOLID_FILL,LIGHTBLUE);
		for(int x=0;x<660;x++)
		for(int y=0;y<660;y++)
		{
        if( (x % 165 == 0) && (y % 165 == 0) )
		floodfill(x,y,BLACK);
        }
		
		getch();
		
}


