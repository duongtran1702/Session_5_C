#include<stdio.h>
int main(){
	printf("1.Nhap 3 so\n2.Tong 3 so\n3.Trung binh cong 3 so\n4.So nho nhat \n5.So lon nhat\n6.Thoat\n");
	int a[3];
	int sum=0;
	float avarage;
	int min=0;
	int max=0;
	do{
	int choice;
	printf("Moi ban nhap lua chon (1-6):");
	scanf("%d",&choice);
	if(choice==1){
		for(int i=0;i<3;i++){
			printf("Nhap so thu %d :",i+1);
			scanf("%d",&a[i]);
		}
	}
	else if(choice==2){	
    	sum=0;
	    for(int i=0;i<3;i++)
			sum+=a[i];
		printf("Tong 3 so la :%d\n",sum);	
	}
	else if(choice==3){
		avarage=(float)sum/3;
		printf("Trung binh cong cua 3 so la :%.2f\n",avarage);
		sum=(int)sum;
	}
	else if(choice==4){
		min=a[0];
		for(int i=0;i<3;i++){
			if(min>a[i]) min=a[i];
		}
		printf("So nho nhat la:%d\n",min);
	}
	else if(choice==5){
		max=a[0];
		for(int i=0;i<3;i++){
			if(max<a[i]) max=a[i];
		}
		printf("So lon nhat la:%d\n",max);
	}
	else if(choice==6) 
	    break;
	else 
     	printf ("So khong hop le !\n");	
    }while(true);

}