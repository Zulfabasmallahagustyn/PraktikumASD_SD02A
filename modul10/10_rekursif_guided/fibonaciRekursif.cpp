#include<stdio.h>
int fibo(int x){
	if (x<=0 || x<=1)
		return x ;
	else
		return fibo(x-2) + fibo(x-1);
}
int main(){
	int n;
	printf("Masukkan jumlah deret = ");
	scanf("%d", &n);
	printf("Deret fibonanci dari %d = ", n);
	for(int i=0;i<n;i++)
		printf("%d ", fibo(i));
}
