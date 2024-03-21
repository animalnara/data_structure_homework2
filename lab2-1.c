#include <stdio.h>
int main(){
    char charType;
    int integerType;
    float floatType;
    double doubleType;

    printf("-----[강태광] [2021041098] -----\n");


    printf("Size of char: %ld byte\n", sizeof(charType)); //sizeof(charType)는 charType의 크기를 바이트단위로 계산해서 출력합니다.
    printf("Size of int: %ld bytes\n", sizeof(integerType)); //sizeof(integerType)는 integerType의 크기를 바이트단위로 계산해서 출력합니다.
    printf("Size of float: %ld bytes\n", sizeof(floatType)); //sizeof(floatType)는 floatType의 크기를 바이트단위로 계산해서 출력합니다.
    printf("Size of double: %ld byres\n", sizeof(doubleType)); //sizeof(doubleType)는 doubleType의 크기를 바이트단위로 계산해서 출력합니다.

    printf("-----------------------------\n");

    printf("Size of char: %ld byte\n", sizeof(char)); //sizeof(char)는 char의 자료형의 크기를 출력합니다.
    printf("Size of int: %ld byres\n", sizeof(int)); //sizeof(int)는 int의 자료형의 크기를 출력합니다.
    printf("Size of float: %ld bytes\n", sizeof(float)); //sizeof(float)는 float의 자료형의 크기를 출력합니다.
    printf("Size of double: %ld byres \n", sizeof(double)); //sizeof(double)는 double의 자료형의 크기를 출력합니다.

    printf("-----------------------------\n");

    printf("Size of char*: %ld byte\n", sizeof(char*)); //포인터를 붙이면 char가 가리키는 포인터를 의미하며 자료형(char)이 가리키는 크기를 출력합니다.
    printf("Size of int* %ld byres\n", sizeof(int*)); //포인터를 붙이면 int가 가리키는 포인터를 의미하며 자료형(int)이 가리키는 크기를 출력합니다.
    printf("Size of float*: %ld bytes\n", sizeof(float*)); //포인터를 붙이면 float가 가리키는 포인터를 의미하며 자료형(float)이 가리키는 크기를 출력합니다.
    printf("Size of double*: %ld byres\n", sizeof(double*)); //포인터를 붙이면 double가 가리키는 포인터를 의미하며 자료형(double)이 가리키는 크기를 출력합니다.

    return 0;
}   

