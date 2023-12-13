/*
Q.3 Write a Program to convert the given string in toggle case without using any string function.
For example,
Input:
Enter any string: HelLo worLD

Output:
Toggle case string: hELlO WORld
*/
#include<stdio.h>

void main(){
	
	int i;
	char a[]={'H','e','L','l','O','w','O','r','l','D'};
	
	for(i=0;i<11;i++){
		if(a[i]<97){
		a[i]+=32;
		printf("%c",a[i]);
	}else{
		a[i]-=32;
		printf("%c",a[i]);
	}

}
}

