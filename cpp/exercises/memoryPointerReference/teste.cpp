#include <iostream>
using namespace std;

int main(){
    int jogo[3][3];

    for (int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            jogo[i][j] = 1;
        }
    }

     for (int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << jogo[i][j];
            if(j<2){
                cout << "|";
            }
        }
        cout << endl;
        if(i<2)
        cout << "-----"<< endl;
    }


    

    return 0;
}