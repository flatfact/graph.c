// (c) 2015 Subthai_Production , Flatfact.com all right reserved.
// All of the contents are material of Subthai_Production and its related.
//Feel free to use for ya'll homework :)
//v.1.3 beta Latest update in 15/7/2558
#include <stdio.h>
main() {
       int x1,x2,y1,y2,a,d;
       float slope=0.0f;
       float b=0.0f;
       printf("x1 = ");
       scanf("%d",&x1);
       printf("y1 = ");
       scanf("%d",&y1);
       printf("x2 = ");
       scanf("%d",&x2);
       printf("y2 = ");
       scanf("%d",&y2);
       printf("Calculating Equation of (%d,%d) (%d,%d) ...",x1,y1,x2,y2);
       printf("\n-----------Answer-----------");
       a=(y1-y2);
       d=(x1-x2);
       slope=(float)a/(float)d;
       b = y1-(slope*x1);
       printf("\ny = (%.3f)x + (%.3f)",slope,b);
       printf("\ny = %d/%d x + %.3f",a,d,b);
       printf("\nSlope = %d/%d or %.3f",a,d,slope);
       printf("\nb = %d-(%.2f*%d) = %.3f",y1,slope,x1,b);
       getch();
}
