
using namespace std;
#include <iostream>



bool controllingHowMuchTimeExistAString(string word,string char_){
  
  int len = char_.length();
  string sub1;
  string sub2;
  string sub;
  bool answer = false;
    try
{
  sub = word.substr(len,word.length());
}
catch( std::out_of_range& exception )
{
  sub = "";
}
  try
{
  sub1 =   sub.substr(0,len);
}
catch( std::out_of_range& exception )
{
  sub1 =   sub.substr(0,word.length());
}
    try
{
    sub = sub.substr(len,len);
  sub2 = sub.substr(0,len);
}
catch( std::out_of_range& exception )
{
  sub2 = sub.substr(0,word.length());
}

  
  if (sub1 == char_ && sub2 != sub1){
    answer = true;
  }
  
  return answer;
}


bool controllingHowMuchTimeExistAString(string word,string char_){
  
  int len = char_.length();
  string sub1;
  string sub2;
  string sub;
  bool answer = false;
    try
{
  sub = word.substr(len,word.length());
}
catch( std::out_of_range& exception )
{
  sub = "";
}
  try
{
  sub1 =   sub.substr(0,len);
}
catch( std::out_of_range& exception )
{
  sub1 =   sub.substr(0,word.length());
}
    try
{
    sub = sub.substr(len,len);
  sub2 = sub.substr(0,len);
}
catch( std::out_of_range& exception )
{
  sub2 = sub.substr(0,word.length());
}

  
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
  string character = "tcoco";
  bool answer = false;
  int index = 0;
  
  while (answer==false && index < character.length()){
    answer = controllingIfExistADouble(index,character);
    index++;
  };
  cout << answer << "\n";
  if (answer){
    
  }
  return 0;
}