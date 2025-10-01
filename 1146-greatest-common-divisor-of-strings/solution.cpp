class Solution {
public:
    string gcdOfStrings(string str1, string str2) {

        if(str1 + str2 != str2 + str1){
            return "";
        }

        // Get gcd of strings. Because the strings have lengths, and lengths are quantitive, we can use math...the resulting gcd number will correspond to the length of the gcd string. 
        int gcd_length = std::gcd(str1.length(), str2.length()); 

    return str1.substr(0,gcd_length);    
    }
};
