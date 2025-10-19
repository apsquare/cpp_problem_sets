  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        ListNode* temp  = head;
        int size =0 ;

        while(temp){
            size++;
            temp = temp->next;
        }

        temp  = head;
        ListNode* prev = nullptr;
        
        int iterationsRequired = size - n;

        if(iterationsRequired==0){
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }

       while(iterationsRequired>0){
        prev = temp;
        temp = temp ->next;
        iterationsRequired--;
       }

        prev->next = temp->next;
        delete temp ;

       return head; 
    }
};