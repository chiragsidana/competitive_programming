class Solution {
public:
    int romanToInt(string s) {
   
        int total = 0;
        int i = 0;
        
        while (i < s.length()) {
            if (s[i] == 'M') {
                total += 1000;
            }
            if (s[i] == 'D') {
                total += 500;
            }
            if (s[i] == 'C') {
                if (i + 1 != s.length() && s[i + 1] == 'M') {
                    total += 900;
                    i = i+2;
                    continue;
                }
                if (i + 1 != s.length() && s[i + 1] == 'D') {
                    total += 400;
                    i = i+2;
                    continue;
                }
                total += 100;
            }
            if (s[i] == 'L') {
                total += 50;
            }
            if (s[i] == 'X') {
                if (i + 1 != s.length() && s[i + 1] == 'C') {
                    total += 90;
                    i = i+2;
                    continue;
                }
                if (i + 1 != s.length() && s[i + 1] == 'L') {
                    total += 40;
                    i = i+2;
                    continue;
                }
                total += 10;
            }
            if (s[i] == 'V')  {
                total += 5;
            }
            if (s[i] == 'I') {
                if (i + 1 != s.length() && s[i + 1] == 'X') {
                    total += 9;
                    i = i+2;
                    continue;
                }
                if (i + 1 != s.length() && s[i + 1] == 'V') {
                    total += 4;
                    i = i+2;
                    continue;
                }
                total += 1;
            }
            i++;
        }
        return total;

    }
};
