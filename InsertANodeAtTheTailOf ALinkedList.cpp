

// Complete the insertNodeAtTail function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {

    SinglyLinkedListNode *new_node=new SinglyLinkedListNode(data);
    if(head==NULL){
        head=new_node;
        return head;
    }
    SinglyLinkedListNode *curnt_node=head;
    while(curnt_node->next!=NULL){
       // curnt_node->data=data;
        curnt_node=curnt_node->next;
    }
    curnt_node->next=new_node;
    return head;


}

