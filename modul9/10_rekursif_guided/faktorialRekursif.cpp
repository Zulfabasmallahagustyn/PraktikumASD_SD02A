#include<stdio.h>
int faktorial(int x){
	if(x<=0)
		return x+1;
	else 
		return x * faktorial(x-1);
}
int main(){
	int N;
	printf("Masukkan N = ");
	scanf("%d", &N);
	printf("Hasil %d! = %d", N, faktorial(N));
}
