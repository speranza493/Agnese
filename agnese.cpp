#include <iostream>

using namespace std;

bool controllingHowMuchTimeExistAString(string word,string char_){
  
  int len = char_.length();
  string sub = word.substr(len,word.length());
  string sub1 =   sub.substr(0,len);
  sub = sub.substr(len,len);
  string sub2 = sub.substr(0,len);
  bool answer = false;
  if (sub1 == char_ && sub2 != sub1){
    answer = true;
  }
  
  return answer;
}

bool controllingIfExistADouble(int index,string word){
  string char_ = ""+word[index];
  bool answer = false;
  int len = word.length();
  string substring = word.substr(index,word.length());
  int indexWord = 0;
  int index_;
  bool answerForUndenstandHowManyElementAreInTheWord;
  while (answer==false && indexWord < substring.length()){
    index_ = substring.find(char_);
    answerForUndenstandHowManyElementAreInTheWord = controllingHowMuchTimeExistAString(substring,char_);
    if (answerForUndenstandHowManyElementAreInTheWord == true){
      answer = true;
    }
    char_ = char_+substring[indexWord];
    indexWord++;
  }
  return answer;
}




int main() {
  string character = "Name2";
  bool answer = false;
  int index = 0;
  
  while (answer==false && index < character.length()){
    answer = controllingIfExistADouble(index,character);
    index++;
  };
  if (answer){
    cout << answer << "\n";
  }
  return 0;
}