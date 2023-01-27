#include <stdio.h>
int main(){
	int a = 50;
	int b = 80;
	int temp = 0;

	temp = a;
	a = b;
	b = temp;

	printf("Values are a=%d and b=%d", a, b);
}