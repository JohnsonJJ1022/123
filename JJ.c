#include "stdio.h"
#include "conio.h"
#include<math.h>
main()
{ int a,b;
 int *pointer_1, *pointer_2;//point to a and b
 a=100;b=10;
 pointer_1=&a;
pointer_2=&b;
 printf("%d,%d\n",a,b);
 printf("%d,%d\n",*pointer_1, *pointer_2);//for show the details of a and b
}
