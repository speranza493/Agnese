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
    if (answerForUndenstandHowManyElementAreInTheWord==2){
      answer = true;
    }
    char_ = char_+substring[indexWord];
    indexWord++;
  }
  return answer;
}

bool controllingHowMuchTimeExistAString(string word,string char_){
  int lenChar = char_.length();
  int lenWord = word.length();
  double lenOfTheWord = lenWord/lenChar;
  bool answer = false;
  int i = 0;
  while (answer==false && i <= lenOfTheWord){

    i++;
  }
  
  return answer;
}