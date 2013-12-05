#include <iostream>
int charOffset=2;

static int ALocation = 65;
static int ZLocation = 90;
static int aLocation = 95;
static int zLocation = 120; 

char incrementLetter(char *clean){
  if(*clean < ALocation || (ZLocation < *clean && *clean < aLocation) || *clean>zLocation ){
    return 0;
  }
  char after = *clean + charOffset;
  return after;
}

char decrementLetter(char *clean){
  if(*clean < ALocation || (ZLocation < *clean && *clean < aLocation) || *clean>zLocation ){
    return 0;
  }
  char after = *clean - charOffset;
  return after;
}

void encipherText(std::string input, std::string *output){
  std::string outStr = "";
  for(std::string::iterator it = input.begin(); it != input.end(); it++){
    char c = *it;
    char after = incrementLetter(&c);
    if(after == 0){
      std::cout << "Invallid char droping";
      std::cout << std::endl;
    }
    else{
      outStr += after;
    }
  }
  *output = outStr;
}
void decipherText(std::string input, std::string *output){
  std::string outStr = "";
  for(std::string::iterator it = input.begin(); it != input.end(); it++){
    char c = *it;
    char after = decrementLetter(&c);
    if(after == 0){
      std::cout << "Invallid char droping";
      std::cout << std::endl;
    }
    else{
      outStr += after;
    }
  }
  *output = outStr;
}
