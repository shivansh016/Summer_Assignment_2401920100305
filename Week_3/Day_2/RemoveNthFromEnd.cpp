#include<bits/stdc++.h>
using namespace std;

class Solution {
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

//O(N)
//O(1)