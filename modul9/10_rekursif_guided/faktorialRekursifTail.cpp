#include<stdio.h>
int faktorial(int x, int a){
	if(x<=0)
		return a;
	else
		return faktorial(x-1,x*a);
}
int main(){
	int N;
	printf("Masukkan N = ");
	scanf("%d", &N);
	printf("Hasil %d! = %d", N, faktorial(N,1));
}
