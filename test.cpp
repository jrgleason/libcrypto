#include <iostream>
#include <list>
#include "SimpleMonoCipher.h"

bool compare_freq(const CharFrequency& first, const CharFrequency& second){
  if(first.relativeFreq > second.relativeFreq){
    return true;
  }
  return false;
}

void printList(std::list<CharFrequency> freqList){
  for(std::list<CharFrequency>::iterator i = freqList.begin(); i != freqList.end(); i++){
    CharFrequency f = *i;
    std::cout << f.letter;
  }
}

int main() {
  char test = 'a';
  std::list<CharFrequency> freqList;
  CharFrequency fr = CharFrequency('E', .12702);
  freqList.push_back(fr);
  fr = CharFrequency('A', .08167);
  freqList.push_back(fr);
  fr = CharFrequency('B', .01492);
  freqList.push_back(fr);
  fr = CharFrequency('C', .02782);
  freqList.push_back(fr);
  fr = CharFrequency('D', .04253);
  freqList.push_back(fr);
  fr = CharFrequency('F', .02228);
  freqList.push_back(fr);
  fr = CharFrequency('G', .02015);
  freqList.push_back(fr);
  fr = CharFrequency('H', .06094);
  freqList.push_back(fr);
  fr = CharFrequency('I', .06966);
  freqList.push_back(fr);
  fr = CharFrequency('J', .00153);
  freqList.push_back(fr);
  fr = CharFrequency('K', .00772);
  freqList.push_back(fr);
  fr = CharFrequency('L', .04025);
  freqList.push_back(fr);
  fr = CharFrequency('M', .02406);
  freqList.push_back(fr);
  fr = CharFrequency('N', .06749);
  freqList.push_back(fr);
  fr = CharFrequency('O', .07507);
  freqList.push_back(fr);
  fr = CharFrequency('P', .01929);
  freqList.push_back(fr);
  fr = CharFrequency('Q', .00095);
  freqList.push_back(fr);
  fr = CharFrequency('R', .05987);
  freqList.push_back(fr);
  fr = CharFrequency('S', .06327);
  freqList.push_back(fr);
  fr = CharFrequency('T', .09056);
  freqList.push_back(fr);
  fr = CharFrequency('U', .02758);
  freqList.push_back(fr);
  fr = CharFrequency('V', .00978);
  freqList.push_back(fr);
  fr = CharFrequency('W', .02360);
  freqList.push_back(fr);
  fr = CharFrequency('X', .00150);
  freqList.push_back(fr);
  fr = CharFrequency('Y', .01974);
  freqList.push_back(fr);
  fr = CharFrequency('Z', .0074);
  freqList.push_back(fr);
  std::cout << "Before...";
  std::cout << std::endl;
  printList(freqList);
  std::cout << std::endl;
  freqList.sort(compare_freq);
  std::cout << "After...";
  std::cout << std::endl;
  printList(freqList);
  std::cout << std::endl;
  if(freqList.empty()){
    std::cout << "Frequency list is empty please fill before trying to crack";
    std::cout << std::endl;
  }
  int a = test;
  std::string input = "";
  std::string output = "";
  std::getline(std::cin, input);
  encipherText(input, &output);  
  std::cout << "Output is ";
  std::cout << output;
  std::cout << std::endl;
  std::string output2=""; 
  decipherText(output, &output2);
  std::cout << "Output is ";
  std::cout << output2;
  std::cout << std::endl;
}

