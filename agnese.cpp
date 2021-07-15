
using namespace std;
#include <iostream>

bool controllIfAEllementExistBehindTheWord(string word, string char_, int index){
  bool answer = true;
  int len = char_.length();
  string sub0 = "";
  if ((index - len) >= 0){
    sub0 = word.substr((index - len),len);
  }
  if (char_ == sub0 && "" != sub0){ //FIXME: L'ERRORE è QUI
    answer = false;
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
  bool ControllIfAEllementExistBehindTheWord ;
  while (answer==false && indexWord < substring.length()){
    index_ = substring.find(char_);
    answerForUndenstandHowManyElementAreInTheWord = controllingHowMuchTimeExistAString(substring,char_);
    ControllIfAEllementExistBehindTheWord= controllIfAEllementExistBehindTheWord( word, char_, indexWord);
    if (answerForUndenstandHowManyElementAreInTheWord == true && ControllIfAEllementExistBehindTheWord == true){
      answer = true;
    }
    
    char_ = char_+substring[indexWord];
    if (word.find(char_)>100){
       break;
    }
    indexWord++;
  }
  return answer;
}




int main() {
  string character = "tt";
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