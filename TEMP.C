#include<stdio.h>
#include<conio.h>

main()
{
 float c,f;

 clrscr();

 printf("the value of celcius is = ");
 scanf("%f", &c);

 f = (1.8 * c) + 32;

 printf("the value of f is = %.2f", f);

 getch();

}