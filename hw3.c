#include<stdio.h>
//00000* 0:5 *:1
//0000*** 0:4 *3
//000*****

int main(void) {
	for (int i = 0; i < 3; i++) {

		for (int j = 0; j < 5-i; j++) {
			printf(" ");
		}
		for (int j = 0; j < 2*i+1; j++) {
			printf("*");
		}
		printf("\n");
	}
return 0;
}