class Solution {
public:
    string repeatLimitedString(string s, int repeatLimit) {
         map<char,int,greater<char>>ufo;
        for(int i=0;i<s.size();++i)
        {
            ufo[s[i]]++;
        }
        string answer="";
        int kanu;
        char chiru,com0,yoyo=0;
        while(answer.size()<s.size() && ufo.size())
        {
            auto it=ufo.begin();
            int xoxo=it->second;
            kanu=0;
            chiru=it->first;
            while(xoxo>0 && kanu<repeatLimit )
            {
                ++kanu;
                --xoxo;
                answer.push_back(chiru);
            }
            if(yoyo)
            {
                ufo[com0]=yoyo;
            }
            if(xoxo)
            {
                
                ufo.erase(it);
                if(ufo.size()==0)
                {
                    break;
                }
                auto it2=ufo.begin();
                int yoyo=it2->second;
                answer.push_back(it2->first);
                com0=it2->first;
                --yoyo;
                ufo.erase(it2);
                if(yoyo)
                {
                    ufo[com0]=yoyo;
                }
                ufo[chiru]=xoxo;
            }
            else
            {
                ufo.erase(it);
            }
        }
        return answer;
    }
};
