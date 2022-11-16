//Middle element just using once iteration

Node* ListNode(Node* head)
{
    Node *slow = head;
    Node *fast = head;

    if(head)
    {
        while(fast!=NULL && fast->next!=NULL)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
    }
    return slow;
}
