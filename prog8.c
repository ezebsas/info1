/* prog8.c -- Más especificadores de conversión de printf() */

#include <stdio.h>

int main( void )
{
  unsigned int NoSigno = 3000000000; /* 32-bit int    */
  short fin = 200;              /* 16-bit short  */
  long grande = 65537;
  long long MuyGrande = 12345678908642ll;

  printf( "NoSigno = %u pero no %d\n", NoSigno, NoSigno );
  printf( "fin = %hd y también %d\n", fin, fin );
  printf( "grande = %ld pero no %hd\n", grande, grande );
  printf( "MuyGrande = %lld pero no %ld\n", MuyGrande, MuyGrande );

  return 0;
}
