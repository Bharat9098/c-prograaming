#include<stdio.h>
int main(){
	int a = 100;
	int b = 200;

	a = a + b; // 100 + 200 a = 300;
	b = a - b; // 300 - 200 b = 100;
	a = a - b; // 300 - 100 a = 200

	printf("Values are a=%d and b=%d", a, b);
}