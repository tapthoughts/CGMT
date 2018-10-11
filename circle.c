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

d=3-2*l;
x = 0;
y=l;

while (x<=y)
{
putpixel(cx+x, cy+y, 5);
putpixel(cx-y, cy-x, 5);
putpixel(cx+y, cy-x, 5);
putpixel(cx-y, cy+x, 5);
putpixel(cx+y, cy+x, 5);
putpixel(cx-x, cy-y, 5);
putpixel(cx+x, cy-y, 5);
putpixel(cx-x, cy+y, 5);

if(d<=0)
{
d=d+4*x+6;
}
else
{
d=d+4*x-4*y+10;
y=y-1;
}
x=x+1;
}

delay(5000000);
closegraph();
}
