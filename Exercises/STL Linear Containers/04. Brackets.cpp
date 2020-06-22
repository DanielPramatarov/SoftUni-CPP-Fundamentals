#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool is_matching(char left, char right){
    bool match = false;
    if (left == '(' && right == ')'){
        match = true;
    }
    else if (left == '{' && right == '}'){
        match = true;
    }
    else if (left == '[' && right == ']'){
        match = true;
    }
    else{
        match = false;
    }
    return match;
}

bool is_valid(string expr){
    stack<char> s;
    int i = 0;
    bool valid = true;
    while(valid && i < expr.size()){
        
        if(expr.at(i) == '(' && expr.at(i+1) == '[' ){
                 valid = false;
        }
        if(expr.at(i) == '[' && expr.at(i+1) == '{' ){
                 valid = false;
        }
        if (expr[i] == '(' || expr[i] == '{' || expr[i] == '['){
           s.push(expr[i]);
        }
        else if(expr[i] == ')' || expr[i] == '}' || expr[i] == ']'){
            if (s.empty()){
                valid = false;
            }
            else if (!is_matching(s.top(), expr[i])){
                valid = false;
            }
            else{
                s.pop();
            }
        }
        ++i;
    }
    if (valid && !s.empty()){
        valid = false;
    }

    return valid;


}


int main()
{
    string expr;
    getline(cin, expr);
    if (is_valid(expr)){
        cout << "valid" << endl;
    }
    else {
        cout << "invalid" << endl;
    }
    return 0;
}
