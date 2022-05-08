#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums;
    nums.assign(10, 1);

    for(auto n: nums){
        cout << n << " ";
    }
    

    return 0;
}