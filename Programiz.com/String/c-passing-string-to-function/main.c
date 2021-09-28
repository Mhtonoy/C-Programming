/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int
main ()
{
  char name[20];
  printf ("Enter your name: ");
  fgets (name, sizeof (name), stdin);
  displayName (name);
  return 0;
}

void
displayName (char *name)
{
  printf ("Name is ");
  puts (name);
}
