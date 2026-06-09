#include<bits/stdc++.h>
using namespace std;


//t.c O(n)
//s.c O(1)
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

        if(p.size() > s.size()){
            return {};
        }


        vector<int> freqP(26, 0);
        vector<int> freqs(26, 0);
        vector<int>ans;


        for(int i=0; i<p.size(); i++){
            freqP[p[i]-'a']++;
        }

        

        for(int i=0; i<s.size(); i++){
            freqs[s[i] - 'a']++;

            if(i>=p.size()){
                freqs[s[i-p.size()]-'a']--; //-p.size() as we want to remove the earliest character
            }

            if(freqs == freqP){
                ans.push_back(i-p.size()+1);//here not direclty added teh i as i would be updated till p.size so instead of i we use i-p.size()+1, {1 because of the zero indexing}
            }
        }

        return ans;
    }
};