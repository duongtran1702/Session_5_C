#include<stdio.h>
int main(){
	int num1,num2;
	printf("1.Tong 2 so\n2.Hieu 2 so\n3.Tich 2 so\n4.Thuong 2 so\n5.Thoat\n");
	printf("Nhap vao so thu nhat :");
	scanf("%d",&num1);
	printf("Nhap vao so thu hai :");
	scanf("%d",&num2);
	do{
	int choice;
	printf("Moi ban nhap lua chon (1-5):");
	scanf("%d",&choice);
	if(choice==1){
		int sum=num1+num2;
		printf("%d+%d=%d\n",num1,num2,sum);
	}
	else if(choice==2){
		int sub=num1-num2;
		printf("%d-%d=%d\n",num1,num2,sub);
	}
	else if(choice==3){
		int mul=num1*num2;
		printf("%d*%d=%d\n",num1,num2,mul);
	}
	else if(choice==4){
		float divice=(float)num1/num2;
		printf("%d/%d=%.2f\n",num1,num2,divice);
	}
	else if(choice==5) break;
	else printf ("So khong hop le !\n");	
    }while(true);
	
}