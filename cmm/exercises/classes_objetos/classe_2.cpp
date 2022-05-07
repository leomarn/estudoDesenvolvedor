#include <iostream>
using namespace std;

class Produto{
    public:
        string nome;
        float preco;
        float desconto;
    
        float precoFinal(){
            return  preco * (1 - desconto);
        }
};

int main() {
    Produto p1;
    p1.nome = "Notebook";
    p1.preco = 1600.45;
    p1.desconto = 0.15;

    cout << p1.nome << endl;
    cout << p1.preco << endl;
    cout << p1.desconto << endl;
    cout << p1.precoFinal() << endl;

    Produto p2 = {"iPhone", 12300, 0.05};
    cout << p2.nome << endl;
    cout << p2.preco << endl;
    cout << p2.desconto << endl;
    cout << p2.precoFinal() << endl;
    
    return 0;
}