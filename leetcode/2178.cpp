class Solution {
public:
    vector<long long> maximumEvenSplit(long long finalSum) {
        vector<long long>ans;
        if(finalSum%2!=0){
            return ans;
        }
        long long half=finalSum/2;
        long long sum=0;
        long long i2=1;
        while(sum<half){
            sum+=i2;
            i2++;
        }
        
        long long dif=sum-half;
        for(int i=1;i<i2;i++){
            if(i!=dif){
                ans.push_back(2*i);
            }
        }
        return ans;
        
    }
};
