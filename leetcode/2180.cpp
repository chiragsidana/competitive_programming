class Solution {
public:
    bool is_even(int i){
        string s=to_string(i);
       int n=s.size();
            int sum=0;
        for(int i=0;i<n;i++){
            sum+=s[i];
        }
        return !(sum%2);
        
        
    }
    int countEven(int num) {
        int count=0;
        for(int i=2;i<=num;i++){
            
            if(is_even(i)){
                count++;
            }
        }
        return count;
    }
};
