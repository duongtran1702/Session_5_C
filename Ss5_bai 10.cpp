#include<stdio.h>
#include<math.h>
int main(){
	int number;
	printf("Nhap vao mot so nguyen bat ki :");
	scanf("%d",&number);
	number=abs(number);
	int digits;
	int reserved=0;
	printf("Cac chu so cua %d la :",number);
	while(number>0){
		digits=number%10;
		reserved=reserved*10+digits;
		number/=10;
	}
		while(reserved>0){
		digits=reserved%10;
		reserved/=10;
		printf("%d ",digits);
	}
}