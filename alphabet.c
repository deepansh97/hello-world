#include<stdio.h>
int main()
{
	char c;
	int lowercase, uppercase;
	scanf("%c",&c);
	lowercase=(c=='a' || c=='b' || c=='c' || c=='d'|| c=='e' || c=='f' || c=='g' || c=='h' || c=='i' || c=='j' || c=='k' || c=='l' || c=='m' || c=='n' || c=='o' || c=='p' || c=='q' || c=='r' || c=='s' || c=='t' || c=='u' || c=='v' || c=='w' || c=='x' || c=='y' || c=='z');
	uppercase=(c=='A' || c=='B' || c=='C' || c=='D'|| c=='E' ||c=='F' || c=='G' || c=='H' || c=='I' || c=='J' || c=='K' || c=='L' || c=='M' || c=='N' || c=='O' || c=='P' || c=='Q' || c=='R' || c=='S' || c=='T' || c=='U' || c=='V' || c=='W' || c=='X' || c=='Y' || c=='Z');
	if(lowercase || uppercase){
		printf("alphabet");
	}
	else
	printf("NOT A ALPHABET");
}

