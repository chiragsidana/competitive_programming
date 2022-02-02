/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
vector<Interval> Solution::merge(vector<Interval> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

sort(A.begin(),A.end(),[](Interval &a,Interval &b)
{
   if(a.start==b.start)
   return a.end<b.end;
   return a.start<b.start;
});
vector<Interval>ans;
int s=0,e=INT_MIN;
for(int i=0;i<A.size();i++)
{
    if(A[i].start>e)
    s=A[i].start;
    e=max(e,A[i].end);
    if(i==A.size()-1||A[i+1].start>e)
    {
        Interval f;
        f.start=s;
        f.end=e;
        ans.push_back(f);
    }
}
return ans;
}

