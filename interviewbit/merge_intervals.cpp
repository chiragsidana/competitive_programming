/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
vector<Interval> Solution::insert(vector<Interval> &intervals, Interval newInterval) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int n=intervals.size();
    vector<Interval> ans;
    ans.push_back(newInterval);
    for(int i=0;i<n;i++){
        // if(ans.empty()){
        //     ans.push_back(intervals[i]);
        // }
        // else{
        //     vector<int> &v=ans.back();
        //     int y=v[1];
        //     if(intervals[i][0]<=y){
        //         v[1]=max(y,intervals[i][1]);
        //     }
        //     else{
        //         ans.push_back(intervals[i]);
        //     }
        // }
         int j = ans.size()-1;
        Interval a = ans[j];
        Interval b = intervals[i];
        
        if(a.end < b.start){
            ans.push_back(b);
        }
        else if(b.end < a.start){
            ans[j] = b;
            ans.push_back(a);
        }
        else{
            int mn = min(a.start, b.start);
            int mx = max(a.end, b.end);
            Interval temp(mn, mx);
            ans[j] = temp;
        }
    }
    return ans;
}

