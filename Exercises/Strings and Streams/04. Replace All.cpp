#include <iostream>
#include <string>
using namespace std;

int main(){

    string sentence;
    getline(cin, sentence);
    string wordToChange;
    cin >> wordToChange;
    string newWord;
    cin >> newWord;

    int index;
 
   while((index = sentence.find(wordToChange)) != string::npos) {    //for each location where Hello is found
      sentence.replace(index, wordToChange.length(), newWord); //remove and replace from that position
   }

   cout << sentence << '\n';

   

   return 0;
}
