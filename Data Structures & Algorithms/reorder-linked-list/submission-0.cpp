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
    void reorderList(ListNode* head) {
        if(!head) return;
        vector<ListNode*>v;
        ListNode * curr=head;
        while(curr)
        {
          v.push_back(curr);
          curr=curr->next;
        }
        int second=v.size()-1;
        int first=0;
       while(first<second)
       {
          v[first]->next=v[second];
          first++;

          if(first==second) break;

          v[second]->next=v[first];
          second--;

       } 
       v[first]->next=nullptr;

    }
};
