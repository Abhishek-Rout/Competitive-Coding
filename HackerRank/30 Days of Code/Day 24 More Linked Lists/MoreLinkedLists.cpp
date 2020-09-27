Node* removeDuplicates(Node *head)
    {
        Node* n = head;

        while( n != NULL ) {

            while( n->next != NULL && n->data == n->next->data ) {
                Node* delete_me = n->next;
                n->next = n->next->next;
                delete delete_me;
            }

            n = n->next;
        }
        return head;
    }
