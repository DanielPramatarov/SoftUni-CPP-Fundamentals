

    #include <iostream>
    #include <string>
    using namespace std;
     
    int main() {        
        bool in_skip_state {true};  
        string sentence;
        string result;
            
        getline(cin, sentence);
        //test
        for (int c = 0; c < sentence.size(); ++c)
        {
            if (in_skip_state) {
                if (isalpha(sentence.at(c))) {
                    in_skip_state = false;
                    sentence.at(c) = toupper(sentence.at(c));
                }
            } else {
                 if (!isalpha(sentence.at(c)))
                 {
                    in_skip_state = true;
                 }     
            } 
            result += sentence.at(c);
        }

       // cout << "Sentence: " << sentence << endl;
        cout  << result << endl;
        return 0; 
    }
