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
        ListNode* first = list1;
        ListNode* second = list2;
        ListNode merged;
        ListNode* temp = &merged;
        while(first && second){
            if(first->val <= second->val){
                temp->next = first;
                first = first->next;
                temp = temp->next;
            }
            else{
                temp->next = second;
                second = second->next;
                temp = temp->next;

            }
        }
        while(first){
            temp->next = first;
            first = first->next;
            temp = temp->next;
        }
        while(second){
            temp->next = second;
            second = second->next;
            temp = temp->next;
        }
        return merged.next;
    }
};