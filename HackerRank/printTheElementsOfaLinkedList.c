// Complete the printLinkedList function below.
/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
void printLinkedList(SinglyLinkedListNode* head) {
    for(head; head!=NULL; head=head->next) {
        printf("%d\n", head->data);
    }

}

