#include <stdio.h>
#include <stdlib.h>
#include <graphics.h>

int main()
{
	int gd= DETECT, gm;                                       
	initgraph(&gd, &gm, " ");
	outtextxy(10,10,"Translation :");
	bar3d(100,100,200,200,15,1);
	bar3d(100+100,100+100,200+100,200+100,15,1);
	delay(2000);
	cleardevice();
	outtextxy(10,10,"scaling :");
	bar3d(100,100,200,200,15,1);
	bar3d(100*5,100*5,200*5,200*5,15,1);
	bar3d(midx+50,midy-100,midx+60,midy-90,5,1);
	delay(2000);
	cleardevice();
	outtexty(10,10,"rotation :");
	bar3d(midx+x1,midy-y1,midx+x2,midy-y2,5,1);
        bar3d(midx+50,midy-x1,midx+60,midy-x2,5,1);
        bar3d(midx+x1,midy-100,midx+x2,midy-90,5,1);
        delay(2000);
	cleardevice();
	closegraph();
	return 0;
}
