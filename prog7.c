/* Prog7.c -- El int maximo del sistema 32-bits */

#include <stdio.h>

int main( void )
{
  /* Maximos de 32 bits */

  int i = 2147483647;
  unsigned int j = 4294967295;
  char car= 255;

  /* Otro tipos
   * long int LInt;
   * long LInt2;
   * short int SInt;
   * short SInt2;
   * unsigned UInt2;
   * unsigned long ULongInt;
   * unsigned short UShortInt;
   * long long LongLongInt;
   * char Letra;
   * unsigned char ULetra;
   */

  printf( "%d %d %d\n", i, i+1, i+2 );
  printf( "%u %u %u\n", j, j+1, j+2 );
  printf( "%d %d %d\n", car, car+1, car+2 );

  return 0;
}
