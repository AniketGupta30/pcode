#include<stdio.h>
#include <graphics.h>
#include <stdlib.h>

int main(void)
{
 /* request auto detection */
 int gdriver = DETECT, gmode;
 int i,x,y,x1,y1,x2,y2,dx,dy,length,xincr,yincr;
 printf("Enter the starting coordinates of line");
 scanf("%d%d",&x1,&y1);
 printf("Enter the ending coordinates of line");
 scanf("%d%d",&x2,&y2);

 initgraph(&gdriver, &gmode, "");
 dx=abs(x2-x1);
 dy=abs(y2-y1);
 if(dx>dy){
length=dx;
 }
 else{
length=dy;}
 xincr=dx/length;
 yincr=dy/length;
 putpixel(x1,y1,15);
 x=x1;
 y=y1;
 for(i=1;i<=length;i++)
 {
x=x+xincr;
y=y+yincr;
putpixel(x,y,15);
 }
 /* clean up */
 getch();
 /*Deallocates all memory allocated by the graphics system*/
 closegraph();
 return 0;
}
