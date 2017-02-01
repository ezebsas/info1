#include <stdio.h>

int main(int argc, const char *argv[])
{
  int i, suma=0;
  int vector[10];
  float prom;
  char texto[10];
  if(argc>3){
    puts("Hay mas argumentos explicitos de 2");
  }
  else{
    puts("Hay menor o igual argumentos  explicito sque 2");
  }

  for( i=1; i<argc; i++){
    printf("%s\n", argv[i]);
  }

  i=1;
  while(i<argc){
    printf("--%s\n", argv[i]);

    i++;

  }

  puts("Ingrese una opcion:\n0 seguir\n 1: salir ");
  scanf("%d", &i);
  while(i != 1){
    switch(i){
      case 0:
        puts("estas siguiendo");
        break;
      case 1:
        puts("Saliste");
        break;
      default:
        puts(" Que?");
        break;
    }
    puts("Ingrese una opcion:\n0 seguir\n 1: salir ");
    scanf("%d", &i);

  }


  for(i = 0; i<10; i++){
    vector[i]=i;
    printf("%d\n", vector[i]);
  }

  for(i=0; i< 10; i ++){
    suma = suma + vector[i];
  }
  prom = (float) suma/i;
  printf("%.2f", prom);



  scanf("%s", texto);
  puts(texto);

  return 0;
}
