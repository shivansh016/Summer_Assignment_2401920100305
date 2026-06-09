#include<bits/stdc++.h>
using namespace std;

//time complexity : O(n*m)
//space complexity : O(1)

class Solution {
public:
    bool isFreqSame(int freq1[], int freq2[]){
        for(int i=0; i<26; i++){
            if(freq1[i] != freq2[i]){
                return false;
            }
        }

        return true;
    }
    bool checkInclusion(string s1, string s2) {
        int freq[26] = {0};
        for(int i=0; i<s1.size(); i++){
            freq[s1[i]-'a']++;
        }

        int windowSize = s1.size();

        for(int i=0; i<s2.size(); i++){
            int windIdx = 0;
            int idx = i;
            int windowFreq[26] = {0};

            while(windIdx < windowSize && idx <s2.size()){ //storing the window freq.
                windowFreq[s2[idx]-'a']++;
                windIdx ++;
                idx ++;
            }

            if(isFreqSame(windowFreq, freq)){
                return true;
            }
        }

        return false;
    }
};

//optimization using the vector instead of array.. to make comparison easy and reduce t.c

//t.c _O(N)
//s.c _O(1)
    bool checkInclusion(string s1, string s2) {
        int n = s1.size();
        int m= s2.size();

        if(n>m ){
            return false;
        }

        vector<int> freq1(26,0);
        vector<int> freq2(26,0);

        for(int i=0; i<s1.size(); i++){
            freq1[s1[i]-'a']++;
        }

        for(int i=0; i<s1.size(); i++){//window of size s1 initialized by elements of s2.
            freq2[s2[i]-'a']++;
        }

        if(freq1 == freq2){
            return true;
        }

        for(int j=s1.size(); j<s2.size(); j++){
            freq2[s2[j]-'a']++;//adding the new character entering the window 
            freq2[s2[j-n] - 'a']--;//removing the oldest character of window
            if(freq1 == freq2){
                return true;
            }
        }
        return false;
    }
