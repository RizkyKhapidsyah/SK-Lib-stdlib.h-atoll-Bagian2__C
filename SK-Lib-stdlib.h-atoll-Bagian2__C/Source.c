#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
	Source by CPlusPlus (https://www.cplusplus.com)
	Modified For Learn by RK
	I.D.E : VS2022
*/


int main() {
	char str1[] = "123";
	char str2[] = "10.55";
	char str3[] = "100 some words";
	char str4[] = "some words 555";

	long long int num1 = atoll(str1);
	long long int num2 = atoll(str2);
	long long int num3 = atoll(str3);
	long long int num4 = atoll(str4);

	//menampilkan hasil
	printf("atoll(\"%s\") = %lld\n", str1, num1);
	printf("atoll(\"%s\") = %lld\n", str2, num2);
	printf("atoll(\"%s\") = %lld\n", str3, num3);
	printf("atoll(\"%s\") = %lld\n", str4, num4);

	_getch();
	return 0;
}