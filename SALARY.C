#include<stdio.h>
#include<conio.h>

main()

{

 float salary, hra, da, ta, gross;

 clrscr();


 printf("the number of salary is = ");
 scanf("%f", &salary);

 hra = salary*10/100;
 da = salary*5/100;
 ta = salary*8/100;

 gross = salary + hra + da + ta;


 printf("the value of salary include tax is = %.2f", gross);

 getch();

}