#include <iostream>
using namespace std;

int main(){
string nomes[]={"junior", "joao", "pedro", "maria", "luiza"};

for(int i =0; i < 5; i++){
    cout << nomes[i] << " ";  
}

cout << "\nForeach #01...\n";
for(string s: nomes){
    s.append("!!!!");
    cout << s << " ";  
}

cout << "\nForeach #02...\n";
for(string &s: nomes){
    s.append("!!!!");
    cout << s << " ";  
}
cout << endl;
cout << nomes[0] << endl;

return 0;
}