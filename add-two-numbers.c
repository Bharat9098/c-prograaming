// #include <stdio.h>
// int main(){
// 	int a = 10;
// 	int b = 20;
// 	int c = a + b;

// 	printf("Addition of a and b is %d", c);
// }

// taking input from user

#include <stdio.h>
int main() {    

    int number1, number2, sum;
    
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    // calculating sum
    sum = number1 + number2;      
    
    printf("%d + %d = %d", number1, number2, sum);
    return 0;
}