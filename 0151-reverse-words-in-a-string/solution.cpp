class Solution {
public:
    string reverseWords(string s) {
    istringstream iss(s);
    string word;
    vector<string> words;

    while(iss >> word){
        words.push_back(word);
    }
    
    reverse(words.begin(), words.end());
    word = "";
    for(auto thing : words){
        word += (thing + " ");
    }
    word.pop_back();
    return word;
    }
};
