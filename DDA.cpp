#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>

int main()
{
	int gd = DETECT, gm;
 	initgraph(&gd, &gm, (char*)"");
 	int x1, y1, x2, y2, steps, i;
	float xincr, yincr, x, y, dx, dy;
	printf("Enter the initial point (x1,y1):\n");
 	scanf("%d%d", &x1, &y1);
 	printf("Enter the final point (x2, y2): \n");
 	scanf("%d%d", &x2,&y2);
 	dy = y2-y1;
 	dx = x2-x1;
 	if(abs(dx)>abs(dy))
  		steps = abs(dx);
 	else
  		steps = abs(dy);
 	xincr = dx/steps;
 	yincr = dy/steps;
 	x = x1;
 	y = y1;
 	
 	for(i=1; i<=steps; i++)
 	{
  		delay(100);
  		y+=yincr;
  		x+=xincr;
  		putpixel(x, y, WHITE);
 	}
 	getch();
 	return 0;
}
