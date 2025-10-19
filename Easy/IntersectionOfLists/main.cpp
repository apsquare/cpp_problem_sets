struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(nullptr) {}
  };
 
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
         
 ListNode* temp1 = headA;

//Using double loop is not good as it causes O(n^2) 
//Better solution coming soon
         while(temp1){
            ListNode* temp2 = headB;


            while(temp2){
                
                if(temp2== temp1){
                    return temp2;
                }
                temp2 = temp2->next;
            }
            temp1 = temp1->next;
         }

         return nullptr;
    }
};