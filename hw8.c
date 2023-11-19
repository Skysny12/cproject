#include<stdio.h>
#include<math.h>

int total=0;
int average;
int u;//편차
int uto;//편차 제곱의 합
double standard;
void stand(int *arr,int to) {
	average = (double)to / 5;
	for (int i = 0; i < 5; i++) {
		u = (arr[i] - average);
		uto += pow(u, 2);
	}
	standard = sqrt(uto / 5);
	printf("standard deviation=%f",standard);

}
int main(void) {
	int arr[5];
	printf("Enter 5 real numbers:");
	for (int i = 0; i < 5; i++) {
		scanf_s("%d", &arr[i]);
		total+=arr[i];
	}
	stand(arr,total);
	return 0;
}