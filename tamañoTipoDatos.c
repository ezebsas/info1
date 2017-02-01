#include <stdio.h>

int main(void){
  int perro = 89;
  printf("tamaño perro: %d\n", sizeof( perro) );
  printf("Tamaño de int en bytes:%d\nTamaño de char en bytes:%d\n",sizeof (int), sizeof(char));
  printf("Tamaño de float en bytes:%d\nTamaño de double en bytes:%d\n",sizeof(float) , sizeof(double) );
  printf("Tamaño de long en bytes:%d\nTamaño de long_long en bytes:%d\n",sizeof(long), sizeof(long long) );
  return 0;

}
