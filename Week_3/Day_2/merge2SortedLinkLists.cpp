#include<bits/stdc++.h>
using namespace std;

//O(N+M)
//O(N+M)


class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL){
            return list2;
        }else if(list2 == NULL){
            return list1;
        }

       
        ListNode* ans = NULL;
        if(list1->val < list2->val){
            ans = list1;
            list1= list1->next;
        }else{
            ans = list2;
            list2= list2->next;
        }
        

        ListNode* temp = ans;
        

        while(list1 != NULL && list2 != NULL){
            if(list1->val <= list2->val){
                temp->next = list1;
                list1 = list1->next;

                
            }else{
                temp->next = list2;
                list2 = list2->next;
            }
            temp = temp->next;
        }
        if(list1 == NULL){
            temp->next = list2;
        }else{
            temp->next = list1;
        }


        return ans;
    }
};