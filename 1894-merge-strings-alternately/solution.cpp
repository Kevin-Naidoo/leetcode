class Solution {
public:
    string mergeAlternately(string word1, string word2) {

        string merge_string = "";
        string big_word, small_word;
        int ptr_ = 0;

        if(word1.length() > word2.length()){
            big_word = word1;
            small_word = word2;
        }
        else{
            big_word = word2;
            small_word = word1;
        }

        for(int i = 0; i < small_word.length(); i++){
            merge_string += word1[i];
            merge_string +=word2[i];
            ptr_ = i+1;
        }

        string last_bit = big_word.substr(ptr_,big_word.length());
        merge_string += last_bit;

        std::cout<<merge_string<<std::endl;
        return merge_string;
    }

};
