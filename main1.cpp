#include <iostream>
#include <string>
using namespace std;


void countVowels(std::string str) {
    int vowels = 0;
  for (auto c = 0; c < str.size(); c++){
      if(str[c] == 'a')
      vowels++;
      if(str[c] == 'e')
      vowels++;
      if(str[c] == 'i')
      vowels++;
      if(str[c] == 'o')
      vowels++;
      if(str[c] == 'u')
      vowels++;
  }
    cout << vowels;
}
int main() {
    string hi = "hallo";
    countVowels(hi);
}
