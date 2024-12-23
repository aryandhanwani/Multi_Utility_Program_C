#include<stdio.h>
#include<conio.h>

main()

{
  float fa, sa, ta;

  clrscr();

  printf("the value of first angle is = ");
  scanf("%f",&fa);

  printf("the value of second angle is = ");
  scanf("%f",&sa);

  ta = 180 - fa - sa;

  printf("the value of third angle is = %.2f\n", ta);

  getch();

}