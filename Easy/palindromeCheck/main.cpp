    struct ListNode {
    int val;
    ListNode *next;
     ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if (!head || !head->next)
            return true;

        auto cur = head;
        int count = 1;
        ListNode* store = nullptr;
        ListNode* storeHead = nullptr;
        int left = 1;
        ListNode *slow = head, *fast = head;

        while (fast && fast->next) {
            left++;
            slow = slow->next;
            fast = fast->next->next;
        }

        while (cur && count < left) {
            if (!store) {
                store = new ListNode(cur->val);
                storeHead = store; 
            } else {
                store->next = new ListNode(cur->val);
                store = store->next;
            }
            cur = cur->next;
            count++;
        }

        ListNode* prev = nullptr;
        while (cur) {
            auto temp = cur->next;
            cur->next = prev;
            prev = cur;
            cur = temp;
        }

        auto leftPtr = storeHead;
        auto rightPtr = prev;
        while (leftPtr && rightPtr) {
            if (leftPtr->val != rightPtr->val)
                return false;
            leftPtr = leftPtr->next;
            rightPtr = rightPtr->next;
        }

        return true;
    }
};