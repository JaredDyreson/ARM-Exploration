#include <string>
#include <iostream>
#include <bitset>

using namespace std;

bool AND(char x, char y);
char NOT(char X);
void shiftingBits();
int main(){
  char A = 100, B = 0, C = 0;
  // bitset<8> x(A);
  // cout << x << endl;
  // if(AND(A, B)){
  //   cout << "Correct" << endl;
  // }
  // else{
  //   cout << "Not correct" << endl;
  // }
  // NOT(A);
  // cout << A << endl;
  shiftingBits();
  return 0;
}

bool AND(char x, char y){
  if(x == 1 && y == 1){
    return true;
  }
  else{
    return false;
  }
}

char NOT(char X){
  return (X=~X);
}

void shiftingBits(){
  for(int i = 0; i < 8; i++){
    bitset<8> x(i);
    cout << x << endl;
  }
  cout << endl;
  // for(int i = 8; i > 0; i--){
  //   bitset<8> x(i);
  //   cout << (x>>1) << endl;
  // }
  int x = 8;
  while(x>0){
    int k = 8;
    bitset<8> j(k);
    cout << (j>>1) << endl;
    x--;
  }
}
