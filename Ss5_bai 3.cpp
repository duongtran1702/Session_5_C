#include<stdio.h>
 int main (){
 	int n;
 	printf("Nhap vao mot so nguyen :");
 	int sum=0;
 	scanf("%d",&n);
 	if(n<0) return 0;
 	for(int i=0;i<=n;i++){
 		sum+=i;
	 }
	 printf("Tong cac so la :%d",sum);
 }