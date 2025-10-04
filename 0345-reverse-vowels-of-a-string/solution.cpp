class Solution {
public:
    string reverseVowels(string s) {
        
        map<int,char>vowels;
        vector<int>places;
        vector<int>r_places;

        for(int i = 0; i <= s.size(); i++){
            if(tolower(s[i]) == 'a' || tolower(s[i]) == 'e'|| tolower(s[i]) == 'i' || tolower(s[i]) == 'o' || tolower(s[i]) == 'u')
            {
                vowels[i] = s[i];
                places.push_back(i);
            }
        }
        for(int i = places.size()-1; i>=0; i--)
        {
            r_places.push_back(places[i]);
        }
        int j = 0;
        for(auto pos : vowels){
            s[r_places[j]] = pos.second;
            j++;
        }

        return s;
    }
};
