/* Prog6.c -- Escribe 1020 en decimal, octal, and hex */

#include <stdio.h>

int main( void )
{
  int x = 1020;

  printf( "dec = %d; octal = %o; hex = %x; HEX = %X\n", x, x, x, x );
  printf( "dec = %d; octal = %#o; hex = %#x; HEX = %#X\n", x, x, x, x );

  return 0;
}
