#include <iostream>

using namespace std;

int main() {
  string character = "Name2";
  bool answer = false;
  int index = 0;
  
  while (answer==false && index < character.length()){
    answer = controllingIfExistADouble(index,character);
    index++;
  };

  return 0;
}

bool controllingIfExistADouble(int index,string word){
  string char_ = ""+word[index];
  bool answer = false;
  int len = word.length();
  string substring = word.substr(index,word.length());
  int indexWord = 0;
  while (answer==false && indexWord < substring.length()){
    int index_ = substring.find(char_);
    bool answerForUndenstandHowManyElementAreInTheWord = controllingHowMuchTimeExistAString(substring,char_);
    if (answerForUndenstandHowManyElementAreInTheWord == true){
      answer = true;
    }
    char_ = char_+substring[indexWord];
    indexWord++;
  }
  return answer;
}

bool controllingHowMuchTimeExistAString(string word,string char_){
  string sub = word;
  int len = char_.length();
  string sub1 =   sub.substr(0,len);
  sub = sub.substr(len,len);
  string sub2 = sub.substr(0,len);
  bool answer = false;
  if (sub1 == char_ && sub2 != sub1){
    answer = true;
  }
  
  return answer;
}


