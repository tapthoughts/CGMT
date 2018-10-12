#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
#include<math.h> 
void main()
{
int gd=DETECT,gm;
int x1,x2,x3,y1,y2,y3,nx1,nx2,nx3,ny1,ny2,ny3,c;
int sx,sy,xt,yt,r;
float t;

printf("Enter the points of triangle");
scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);

printf("\n1.Translation\n2.Rotation\n3.Scaling\n4.Exit");
scanf("%d",&c);
initgraph(&gd,&gm,NULL);
switch(c)
{
case 1:
printf("\nEnter the translation factor");
scanf("%d%d",&xt,&yt);
line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x3,y3,x1,y1);
nx1=x1+xt;
ny1=y1+yt;
nx2=x2+xt;
ny2=x2+yt;
nx3=x3+xt;
ny3=y3+yt;
line(nx1,ny1,nx2,ny2);
line(nx2,ny2,nx3,ny3);
line(nx3,ny3,nx1,ny1);
delay(5000);
break;
case 2:
printf("Enter the angle of rotation");
scanf("%d",&r);
t=3.14*r/180;
line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x3,y3,x1,y1);
nx1=abs(x1*cos(t)-y1*sin(t));
nx2=abs(x2*cos(t)-y2*sin(t));
nx3=abs(x3*cos(t)-y3*sin(t));
ny1=abs(x1*sin(t)+y1*cos(t));
ny2=abs(x2*sin(t)+y2*cos(t));
ny3=abs(x3*sin(t)+y3*cos(t));
line(nx1,ny1,nx2,ny2);
line(nx2,ny2,nx3,ny3);
line(nx3,ny3,nx1,ny1);
delay(5000);
break;
case 3:
printf("\nEnter the Scaling factor");
scanf("%d%d",&sx,&sy);
line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x3,y3,x1,y1);
nx1=x1+sx;
ny1=y1+sy;
nx2=x2+sx;
ny2=x2+sy;
nx3=x3+sx;
ny3=y3+sy;
line(nx1,ny1,nx2,ny2);
line(nx2,ny2,nx3,ny3);
line(nx3,ny3,nx1,ny1);
delay(5000);
break;
case 4:
break;
default:
printf("Enter the correct Choice");
}
closegraph();
}

