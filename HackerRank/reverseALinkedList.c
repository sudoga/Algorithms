// Reverse a Linked List
SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) {
    SinglyLinkedListNode *aux=head, *prev=NULL, *next=NULL;
    while(aux!=NULL) {
        next = aux->next;
        aux->next=prev;
        prev=aux;
        aux=next;
    }
    head = prev;
    return head;
}