#include<stdio.h>
int gcd(int n,int m){
	int r;
	while(m!=0){
		r=n%m;
		n=m;
		m=r;
	}
	return n;
}
int main(){
	int a,b;
	printf("Nhap vao so thu 1:");
	scanf("%d",&a);
	printf("Nhap vao so thu 2:");
	scanf("%d",&b);
	printf("Uoc chung lon nhat cua 2 so %d va %d la:%d",a,b,gcd(a,b));
}