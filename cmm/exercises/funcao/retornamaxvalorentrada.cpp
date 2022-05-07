#include <iostream>
using namespace std;

auto maxNumber = [](int n1, int n2) -> int { return n1 >= n2 ? n1 : n2;};

int main(){
    int ent, maxEnt=0, soma=0, q=0;
    double media;

    do{
        cout << "Entre com um valor: ";
        cin >> ent;
        if(ent > 0){
            soma += ent;
            q++;
        }

        maxEnt = maxNumber(ent,maxEnt);
    
    } while (ent >= 0);

    media = (double) soma/q;

    cout << "Maior entrada: " << maxEnt << endl;
    cout << "Soma: " << soma << endl;
    cout << "Media: " << media << endl;
    
    return 0;
}