
//Iterating more than once

class Solution {
/*public:
    struct Node
        {
            int data;
            Node* next;
        };

    Node* head1 = NULL;
    void Insert(int data,int ind)
    {
        Node* temp = new Node();
        temp->data = data;
        temp->next = NULL;
        if(ind==mid)
        {
            head1=temp;
            return;
        }
        Node* temp1 = head1;
        while(temp1->next!=NULL)
        {
            temp1=temp1->next;
        }
        temp1->next=temp;
    }
    */
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* temp=head;
        int cnt=0;
        while(temp!=NULL)
        {
            cnt++;
            temp=temp->next;
        }
        int mid = cnt/2;
        ListNode* temp1 = head;
        ListNode* head1;
        int ind=-1;
        while(temp1!=NULL)
        {
            ind++;
            if(ind==mid)
            {
                head1=temp1;
            }
            temp1=temp1->next;
        }
        return head1;
