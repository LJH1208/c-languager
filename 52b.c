#include<stdio.h>
int main() {
	char name[10];
	int age = 0;
	char gender[10];
	char favorit[90];
	
	printf("이름을 입력 : ");
	scanf("%s", name);
	printf("나이를 입력 : ");
	scanf("%d", &age);
	printf("성별을 입력 : ");
	scanf("%s", gender);
	printf("%s", favorit);
	
	printf("%s\n", name);
	printf("%d\n", age);
	printf("%s\n", gender);
	printf("%s\n", favorit);
	
	return 0;
}