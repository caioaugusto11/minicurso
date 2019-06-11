#include<stdio.h>
int subtracao (int a , int b){
	int sub= a-b;
	return sub;
}
int soma(int y, int x){
	int soma = y + x ;
	return soma;
}
int main () {
	printf("Soma dos numeros %d\n",soma(3,4));
	printf("Subtracao dos numeros %d\n",subtracao(5,2));
	return 0;
}
