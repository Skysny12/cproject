#include<stdio.h>

int main(void) {
	int num;
	printf("please enter a number:");
	scanf_s("%d", &num);
	for (int i = 2; i <= num; i++) {
		if (num % i == 0) {
			printf("lt is not a prime number.");
			break;
		}
		else {
			printf("lt is a prime number.");
			break;
		}   
	}
}