#include<stdio.h>
int fact(int num){
	num;
	if(num==1)
	return num;
	else 
	return num*fact(num-1);
}
int main(){
	int num;
	printf("enter psitive numbr for factorial\n");
	scanf("%d",&num);
	int s=fact(num);
	printf("%d is factorial\n",s);
	return 0;
}
