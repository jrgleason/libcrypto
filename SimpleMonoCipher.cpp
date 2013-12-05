#include <iostream>
int charOffset=2;

static int ALocation = 65;
static int ZLocation = 90;
static int aLocation = 97;
static int zLocation = 122; 

char incrementLetter(char *clean){
  if(*clean < ALocation || (ZLocation < *clean && *clean < aLocation) || *clean>zLocation ){
    return 0;
  }
  char after = *clean + charOffset;
  int overlap = *clean - (ZLocation - charOffset);
  if(overlap > 0 && *clean < aLocation){
    after = ALocation + overlap - 1;
  }
  int overlap2 = *clean - (zLocation - charOffset);
  if(*clean > (zLocation - charOffset)){
    after = aLocation + overlap2 -1;  
  }
  return after;
}

char decrementLetter(char *clean){
  if(*clean < ALocation || (ZLocation < *clean && *clean < aLocation) || *clean>zLocation ){
    return 0;
  }
  char after = *clean - charOffset;
  if(*clean < ALocation + charOffset){
    int overlap = *clean - (ALocation + charOffset);
    after = ZLocation + overlap+1;
  }
  else if(*clean > ZLocation && *clean < (aLocation + charOffset)){
    int overlap = *clean - (aLocation + charOffset);
    after = zLocation + overlap + 1;
  }
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
