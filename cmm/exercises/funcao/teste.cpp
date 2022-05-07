#include <iostream>
using namespace std;
using binary = int (*)(int ,int);
using multiplicacao = double (*)(double ,double);

int operacao(binary func, int n1, int n2){
    return (*func)(n1, n2);
}
double operacao2(multiplicacao func, double n1, double n2){
    return (*func)(n1, n2);
}
int somar(int a, int b){
    return a+b;
}
int subtrair(int a, int b){
    return a-b;
}
double dividir(double a, double b){
    return a/b;
}
int multiplicar(int a, int b){
    return a*b;
}

int main(){
    int n1, n2, operador;
    cout << "Primeiro numero: ";
    cin >> n1;
    cout << "Segundo numero: ";
    cin >> n2;
    cout << "Somar = 1, Subtrair= 2, Dividir = 3, Multiplicar = 4 ";
    cin >> operador;
    switch (operador)
    {
    case 1:
        cout << "Resultado: ";
        cout << operacao(somar,n1,n2);
        break;
    case 2:
        cout << "Resultado: ";
        cout << operacao(subtrair,n1,n2);
        break;
    case 3:
        cout << "Resultado: ";
        cout << operacao2(dividir,n1,n2);
        break;
    case 4:
        cout << "Resultado: ";
        cout << operacao(multiplicar,n1,n2);
        break;
    }
    

    return 0;
}