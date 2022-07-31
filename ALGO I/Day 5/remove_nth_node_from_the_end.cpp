class Solution {
public:
    int length(ListNode* &head){
        ListNode* temp=head;
        int c=0;
        while(temp!=NULL){
            temp=temp->next;
            c++;
        }
        return c;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL || head->next==NULL){
            head=NULL;
            return head;
        }
        int l=length(head);
        int c=1;
        int t=l-n;
        if(t==0){
            head=head->next;
            return head;
        }
        ListNode* temp=head;
        while(c!=t){
            temp=temp->next;
            c++;
        }
        ListNode* toremove=temp->next;
        temp->next=temp->next->next;
        delete(toremove);
        return head;
    }
};
