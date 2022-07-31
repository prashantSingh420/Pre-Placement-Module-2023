class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* start=head;
        ListNode* End=head;
        while(End!=NULL && End->next!=NULL){
            start=start->next;
            End=End->next->next;
        }
        return start;
    }
};
