#include<stdio.h>


void transfer(n) {
	if (n > 0) {
		int f1;
		int z;
		f1 = n % 2;//������
		z = n / 2;//2�� ���� ��
		transfer(z);
		printf("%d", f1);

	}
}
int main(void) {
	int n;
	printf("Please enter a number:");
	scanf_s("%d", &n);
	transfer(n);
	
}