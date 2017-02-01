#include <stdio.h>
float promedio (int[],int);
int main(int argc, const char *argv[])
{
int aux;
int i;
int Vector[10];
	for(i=0;i<10;i++){
	Vector[i]=i+1;
	printf("%d",Vector[i]);

}
printf("%f",promedio(Vector,i));

   return 0;
};
float promedio (int Vector[],int contador){
int i;
int suma=0;
float promedio;
	for(i=0;i<10;i++){
	suma = Vector[i] + suma;
	printf("%d\n",Vector[i]);
}
promedio = (float)suma/i;
printf("suma :%d, i=%d\n",suma,i);
return promedio;
}
