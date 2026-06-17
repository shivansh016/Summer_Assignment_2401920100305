#include<bits/stdc++.h>
using namespace std;

class Solution {

//O(n)
//O(1)
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dNode=new ListNode(0,head);
        ListNode* slow=dNode;
        ListNode* fast=dNode;
        for(int i=0;i<n;i++){
            fast=fast->next;
        }
        while(fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next;
        }
        slow->next=slow->next->next;
        return dNode->next;
    }
};



//Brute Force

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head == NULL ){
            return true;
        }
        
        int count = 0;
        ListNode* temp = head;
        while(temp != NULL){
            count++;
            temp = temp->next; 
        }

        int beg = 0;
        stack<int> s;
        temp = head;
        while(beg < count/2){
            s.push(temp->val);
            temp = temp->next;
            beg++;
            
        }
        
        if(count % 2 != 0){
            temp = temp->next; //skip the mid (for odd number of nodes.)
        }

        while(temp != NULL){
           
                if(s.top() == temp->val){
                    s.pop();
                }else{
                    return false;
                }
           
            temp = temp->next;
        }
        
        return true;
        
    }
};