#include <iostream>
#include <cstdio>

int main(){

    int x;

    // scope resolution operator
    std::cout << "Hello C++ #01" << std::endl;
    printf("Hello C++ #02\n");
    puts("Hello C++ #03");
    scanf("%d", &x);

    printf("O valor, inserido e: %d", x);
    return 0;
}