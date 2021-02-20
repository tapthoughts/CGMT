#include<stdio.h>
#include<math.h>
#include<graphics.h>
void main()
{
	 int x1,y1,x2,y2, length;
	 printf("enter two points");
	 printf("\n\n");
	 scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
	 int a= abs(x1-x2);
	 int b = abs(y1-y2);
	 if(a>b){
		 length = a;
	 }
	 else{
		 length = b;
	 }
	 int delx =(x2-x1)/length, dely = (y2-y1)/length;
	 int x,y,sx;
	 
	 if(delx>=1)
	 	sx = 1;
	 else if(delx=0)
	 	sx =0;
	 else 
	 	sx=-1;
	 	
	 	
	 x = x1+0.5 * sx; 
	 y = y1+0.5 * sx;
 
	 int i= 1;
	 while(i<=length){
	 	//Plot(Integer(x),Integer(y));
	 	putpixel(x,y,WHITE);
	 	x = x+delx;
	 	y=y+dely;
	 	i=i+1;
	 } 
	 
	 
	 
 
 
 }
