#include <iostream>

using namespace std;

int main() {
  string character = "Name2";
  bool answer = false;
  int index = 0;
  
  while (answer==false && index < character.length()){
    char char_ = character[index];
    
    index++;
  };
  return 0;
}

void sayHi(){
  cout << "HelloUser\n";
}
