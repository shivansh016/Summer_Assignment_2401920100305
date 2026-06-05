#include<bits/stdc++.h>
using namespace std;

class Node{
    public: 
        unordered_map<char, Node*> child;
        bool endOfWord;
        int freq;

        Node(){
            endOfWord = false;
        }
};

class Trie{
    Node* root;
    public:
        Trie(){
            root = new Node();
            root->freq = -1;
        }

        void insert(const string & key){
            Node* temp = root;
            for(int i=0; i<key.size(); i++){
                if(temp->child.count(key[i]) == 0){
                    temp->child[key[i]] = new Node();
                    temp->child[key[i]]->freq = 1;
                }else{
                    temp->child[key[i]]->freq ++;
                }
                temp = temp->child[key[i]];
            }
            temp->endOfWord = true;
        }

        void longestCommonPref(int n, Node* root, string & ans){
            for(pair<char, Node*> p : root->child){
                if(p.second->freq == n){
                    ans += p.first;
                }else{
                    break;
                }

                longestCommonPref(n, p.second, ans);
            }
        }

        string longestCommon(int n){
            string ans = "";
            longestCommonPref(n, root, ans);
            return ans;
        }
};

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        Trie trie;
        for(int i=0; i<strs.size(); i++){
            trie.insert(strs[i]);
        }

        int n = strs.size();
        return trie.longestCommon(n);
    }
};

//approach -> jab no. of strings aur freq. of any char same ho agar trie me then that would contribute to the common prefix.