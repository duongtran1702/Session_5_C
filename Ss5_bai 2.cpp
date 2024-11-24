#include<stdio.h>

int main (){
	int n;
	int m;
	printf("Nhap vao mot so nguyen:");
	scanf("%d",&m);
	do{
		printf("Nhap vao mot so nguyen khac:");
		scanf("%d",&n);
	}while(n<m||n>m);
}