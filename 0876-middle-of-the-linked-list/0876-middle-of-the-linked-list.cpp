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
    ListNode* middleNode(ListNode* head) {
        ListNode* result = head;
        int cnt = 0;
        while (head != NULL) {
            head = head->next;
            cnt++;
        }
       int mid = cnt/2;
       int i = 0;
       while(result !=NULL){
          if(i == mid){
            return result;
          }
          result = result->next;
          i++;
       }

       return result;
    }
};