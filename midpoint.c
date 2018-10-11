#include<graphics.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main ()
{
int gd = DETECT, gm;
int d, l, x, y, cx, cy;
initgraph (&gd, &gm, NULL);

printf("\nenter two centre points");
scanf("%d%d",&cx, &cy);
 
printf("enter radius");
scanf("%d", &l);

d=1-l;
x = 0;
y=l;

while (x<=y)
{
// putpixel(cx+x, cy+y, 5);
// putpixel(cx-y, cy-x, 5);
 putpixel(cx+y, cy-x, 5);
// putpixel(cx-y, cy+x, BLUE);
putpixel(cx+y, cy+x, GREEN);
// putpixel(cx-x, cy-y, 5);
putpixel(cx+x, cy-y, BLUE);
putpixel(cx-x, cy+y, GREEN);

if(d<=0)
{
d=d+2*x+3;
}
else
{
d=d+2*x-2*y+5;
y=y-1;
}
x=x+1;
}
 delay(2000000);
 
 closegraph();
 return 0;
 }
