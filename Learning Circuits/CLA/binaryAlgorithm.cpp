#include <iostream>
#include <string>

using namespace std;
int binaryAdder(int *);
int main(){
    int binary[] = {1,0,1,1,0};
    binaryAdder(binary);
    cout << sizeof(&binary) << endl;
    return 0;
}

int binaryAdder(int binaryString[]){
    int sum = 0;
    cout << sizeof(&binaryString) << endl;
    for(int i = 0; i < (sizeof(binaryString)/ 4); i++){
        cout << "Binary" << endl;
     }
     return sum;
}
