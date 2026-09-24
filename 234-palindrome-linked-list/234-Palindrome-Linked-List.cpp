class Solution {
public:
    bool isPalindrome(ListNode* head) {
        stack<int> s;
        ListNode* current = head;

        // Push all values into stack
        while (current != nullptr) {
            s.push(current->val);
            current = current->next;
        }

        // Compare again while traversing
        current = head;
        while (current != nullptr) {
            if (current->val != s.top()) {
                return false; // mismatch found
            }
            s.pop();
            current = current->next;
        }

        return true; // all matched
    }
};
