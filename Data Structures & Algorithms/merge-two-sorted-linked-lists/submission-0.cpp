/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode*head=nullptr,*temp=nullptr;
        if(list1==nullptr && list2==nullptr) return nullptr;
        while(list1 && list2)
        {
            int a=list1->val;
            int b=list2->val;
            if(a<=b)
            {
                if(head==nullptr)
                {
                    head=list1;
                    temp=head;
                    list1=list1->next;
                }
                else{
                    head->next=list1;
                    head=head->next;
                    list1=list1->next;
                }
            }
            else{
                if(head==nullptr)
                {
                    head=list2;
                    temp=head;
                    list2=list2->next;
                }
                else{
                    head->next=list2;
                    head=head->next;
                    list2=list2->next;
                }
            }
        }
        if(list1)
        {  
            if(head==nullptr) return list1;
            head->next=list1;
        }
        
        if(list2)
        {
            if(head==nullptr) return list2;
            head->next=list2;
        }
        
        return temp;
    }
};
