#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int main()
{
	int gd = DETECT, gm;
	initgraph(&gd, &gm, (char*)"");
	int x, y, x1, y1, x2, y2, dx, dy, p;
	printf("Enter the initial point (x1,y1):\n");
 	scanf("%d%d", &x1, &y1);
 	printf("Enter the final point (x2, y2): \n");
 	scanf("%d%d", &x2,&y2);
 	x = x1;
 	y = y1;
 	dy = y2-y1;
 	dx = x2-x1;
 	putpixel(x, y, WHITE);
 	p = 2*dy - dx;
 	while(x<=x2)
 	{
 		if(p<0)
 		{
 			x = x+1;
			 p = p+2*dy;	
		}
		else
		{
			x = x+1;
			y = y+1;
			p = p+(2*dy)-(2*dx);
		}
		putpixel(x, y, WHITE);
	}
	getch();
	closegraph();
}
