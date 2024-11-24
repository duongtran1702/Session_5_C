#include<stdio.h>
void multication_table(int n){
	int multi;
	for(int i=1;i<=10;i++){
		multi=n*i;
		printf("%d * %d = %d\n",n,i,multi);
	}
	printf("\n");
}

int main(){
for (int i=1;i<=10;i++){		
	multication_table(i);
	}
}