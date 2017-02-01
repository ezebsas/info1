#include <stdio.h>

int main(int argc, const char *argv[])
{
  int v[4] = {50, 34, 15, 45};
  char w = 'a';
  float z[3] = {18.1, 24.2, 20.4};
  long double xxl[3] = {18.1, 24.2, 20.4};
  
  printf("Direccion de inicio de int v[0]:%p\n", v);
  printf("Direccion de inicio de int v[1]:%p\n", v+1);
  printf("Direccion de inicio de int v[2]:%p\n", v+2);
  printf("Direccion de inicio de int v[3]:%p\n", v+3);
  printf("Direccion de inicio de char w: %p\n", &w);
  printf("Direccion de inicio de float z[0]:%p\n", z);
  printf("Direccion de inicio de float z[1]:%p\n", z+1);
  printf("Direccion de inicio de float z[2]:%p\n", z+2);
  printf("Direccion de inicio de float z[3]:%p\n", z+3);
  for(int i=0; i < 4; i++){
    printf("Direccion de inicio de long double xxl[%d]: %p\n", i, xxl+i);
  }
  
  return 0;
}
