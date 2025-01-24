#include <iostream>
#include <string>

using namespace std;
int main() {
  string text;
  int wordsAmount = 0;

  getline(cin, text); 
  
  for (int i = 0; i < text.size(); ++i) {
    if (text[i] == ' ') {
      ++wordsAmount;
    }
  }
  cout << wordsAmount + 1;
}

