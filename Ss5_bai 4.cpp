#include<stdio.h>
int main(){
	int n;
	int multi;
	printf("Nhap vao mot so nguyen duong n :");
	scanf("%d",&n);
	if (n>10||n<0) return 0;
	for(int i=1;i<=10;i++){
		multi=n*i;
		printf("%d * %d = %d\n",n,i,multi);
	}
}