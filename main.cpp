#include <iostream>
#include <string>
using namespace std;


void countVowels(std::string &str) {
    int vowels = 0;
  for (auto c = 0; c < str.size(); c++){
    switch (str[c])
    {
      case 'a':
      case 'e':
      case 'i':
      case 'o':
      case 'u':
      vowels++;
    }
  }
    cout << vowels;
}
int main() {
    string hi = "hallo";
    countVowels(hi);
}
