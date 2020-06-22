#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>
#include <cctype>

using namespace std;

bool cmp(string a, string b)
{
	if (a.length() == b.length())
		return a < b;
	return a.length() > b.length();
}

int main()
{
	string text;
	getline(cin, text);
	text.erase(remove_if(text.begin(), text.end(), [](char ch) { return isdigit(ch); }),text.end());
	istringstream iss(text);
	vector<string> words;
	string word;
	while (getline(iss, word, ' '))
		if(word.length())
			words.push_back(word);

	sort(words.begin(), words.end(), cmp);

	if (words.size())
		cout << words.front() << endl;
	else
		cout << "no noise\n";
}
