#include<stdio.h>

int main(){
	char a='a';
	char c='A';
	printf("alphabets from a to z.\n");
	while(a<='z'){
		printf("%c\n",a);
		a++;
	}
		printf("alphabets from A to Z.\n");
	while(c<='Z'){
		printf("%c\n",c);
		c++;
	}
	return 0;
}
