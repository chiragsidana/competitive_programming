class Solution {
public:
    string intToRoman(int num) {
        int val[13]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        string str[13]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        string ans;
        while(num){
            for(int i=0;i<13;i++){
                if(num>=val[i]){
                    ans+=str[i];
                    num-=val[i];
                    break;
                }
            }
        }
        return ans;
    }
};
