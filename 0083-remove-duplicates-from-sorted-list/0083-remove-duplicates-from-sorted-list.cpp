class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == nullptr) return nullptr;
        
        ListNode* fast = head -> next;
        ListNode* slow = head;
        while (fast != nullptr) {
            if (fast -> val == slow -> val) {
                slow -> next = slow -> next -> next;
                fast = fast -> next;
            }
            else{
                fast = fast -> next;
                slow = slow -> next;
            }
        }
        return head;
    }
};