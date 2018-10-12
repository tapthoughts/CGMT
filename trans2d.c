#include<stdio.h>
#include<graphics.h>
#include<math.h>
void translation();
void rotation();
void scaling();
void main()
{ 
int gd=DETECT,gm,ch;
initgraph(&gd,&gm,NULL);
outtextxy(100,88,"rectangle");
rectangle(200,150,150,200);
printf("\n 1.translation\n 2.rotation\n3.scaling");
printf("enter ur choice:");
scanf("%d",&ch);
switch(ch)
{ 
case 1:translation();
 break;
case 2:scaling();
break;
case 3://rotation();
break;
default:printf("wrong choice");
break;
}
getch();
delay(300000);
closegraph();
}
void translation()
{
int tx,ty;
outtextxy(240,10,"translation");
outtextxy(238,20,"-----------");
printf("\nenter tx and ty");
scanf("%d %d",&tx,&ty);
rectangle(200,150,150,200);
printf("after translation");
rectangle(200+tx,150+ty,150+tx,200+ty);
}
void scaling()
{
int sx,sy;
printf("enter sx:");
scanf("%d",&sx);
printf("enter sy:");
scanf("%d",&sy);
rectangle(200,150,150,200);
printf("after scaling");
rectangle(200*sx,150*sy,150*sx,200*sy);
}

