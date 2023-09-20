#include <stdio.h>
int chuvihcn (int a, int b);
int dientichhcn (int a, int b);
void main(){
	int num1, num2;
	printf("Chieu dai: ");
	scanf("%d", &num1);
	printf("\nChieu rong: ");
	scanf("%d", &num2);
	
	int result1 = chuvihcn(num1, num2);
	printf("%d", result1);
	int result2 = dientichhcn(num1, num2);
	printf("%d", result2);
}

int chuvihcn (int a, int b){
    printf("\nChu vi hcn: ");
    return (a + b) * 2;
}
int dientichhcn (int a, int b){
	printf("\nDien tich hcn: ");
	return (a * b);
}
