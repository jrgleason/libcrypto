#ifndef SIMPLEMONOCIPHER_H
#define SIMPLEMONOCIPHER_H
// char incrementLetter(char *clean);
void encipherText(std::string input, std::string *output);
void decipherText(std::string input, std::string *output);
struct CharFrequency{
  char letter;
  double relativeFreq;
  
  CharFrequency(char letter, double freq) 
  : letter(letter), relativeFreq(freq)
  {}
};
#endif
