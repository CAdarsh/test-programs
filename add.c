#include<stdio.h>

void input(int *a,int *b){
	printf("Enter two numbers :\n");
	scanf("%d%d",a,b);
}

int add(int a,int b){
	return a+b;
}

void output(int sum){
	printf("The sum is : %d\n",sum);
}

int main(){
	int a,b,sum;
	input(&a,&b);
	sum = add(a,b);
	output(sum);
	return 0;
}
