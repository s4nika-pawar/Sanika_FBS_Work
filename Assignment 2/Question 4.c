#include<stdio.h>
int main(){
	int marks;
	printf("Enter marks:");
	scanf("%d", &marks);
	
	if(marks>75){
		printf("Distinction");
	}
	else if(marks>65&&marks<75)
	{
		printf("First class");
	}
		else if(marks>55&&marks<65)
	{
		printf("Second class");
	}
		else if(marks>40&&marks<55)
	{
		printf("Pass class");
	}
	else{
	
	printf("Fail");
}
}