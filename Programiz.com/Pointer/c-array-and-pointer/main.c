/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main ()
{
int i, x[6], sum = 0;
int y[] = {1,2,3,4,5,6};
int* ptr;

printf("Enter 6 numbers: ");
for(i=0;i<6;i++){
 
 //equivalent to &x[i]
 scanf("%d",x+i);
 sum += *(x+i);
}

printf("Sum = %d\n\n",sum);



ptr = &y[2];
printf("Address of y[2] is %p\n", ptr);
printf("*ptr = %d \n", *ptr);   // 3
printf("*ptr+1 = %d \n", *ptr+1); // 4
printf("*ptr-1 = %d", *ptr-1);  
  return 0;
}
