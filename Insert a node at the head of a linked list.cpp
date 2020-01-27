

// Complete the insertNodeAtHead function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
    SinglyLinkedListNode *new_node=new SinglyLinkedListNode(data);
    if(llist==NULL){
        llist=new_node;
        return llist;
    }
    SinglyLinkedListNode *temp=new_node;
    temp->next=llist;
    return temp;


}

