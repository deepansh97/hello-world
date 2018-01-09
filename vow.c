#include<stdio.h>
int main(){
	char c;
	int lowvowels,uppervowels;
	scanf("%c",&c);
	lowvowels= (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
	uppervowels=(c=='A' || c=='E' || c=='I' || c=='O' || c=='U');
	if(lowvowels || uppervowels){
		printf("Vowels");
	}
	else{
		printf("Consonents");
	}
}
