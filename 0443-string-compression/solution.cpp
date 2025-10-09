class Solution {
public:
    int compress(vector<char>& chars) {
        int write = 0;  // Position to write compressed characters
        int read = 0;   // Position to read characters

        while (read < chars.size()) {
            char currentChar = chars[read];
            int count = 0;

            // Count occurrences of the current character
            while (read < chars.size() && chars[read] == currentChar) {
                read++;
                count++;
            }

            // Write the character
            chars[write++] = currentChar;

            // Write the count if greater than 1
            if (count > 1) {
                string countStr = to_string(count);
                for (char c : countStr) {
                    chars[write++] = c;
                }
            }
        }

        return write;
    }
};
