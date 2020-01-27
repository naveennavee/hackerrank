

// Complete the insertNodeAtPosition function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) {
    SinglyLinkedListNode *new_node=new SinglyLinkedListNode(data);
    SinglyLinkedListNode *curent_node =head;
    int index=0;
    while(index<position-1){
        curent_node=curent_node->next;
        index++;
    }
    new_node->next=curent_node->next;
    curent_node->next=new_node;
    return head;


    


}

