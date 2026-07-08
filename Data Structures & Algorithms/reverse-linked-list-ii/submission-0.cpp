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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (head==nullptr)
            return head;
            ListNode dummy(0);
        dummy.next = head;
        
        ListNode* l = &dummy;
        ListNode* r = &dummy;

        for (int i = 0; i < right; i++) {
            if (i < left-1) 
                l = l->next;
            r = r->next;
        }
        ListNode* remainder = r->next; 
        ListNode* next=nullptr;
        ListNode* prev=remainder;
        ListNode* curr=l->next;
        while(curr!=remainder){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        l->next=prev;
        
        return dummy.next;

    }
};