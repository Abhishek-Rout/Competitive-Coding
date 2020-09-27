      Node* insert(Node *head,int data)
      {
            if(head == NULL)
                return new Node( data);
            else if(head->next == NULL)
            {
               head->next = new Node(data);
            }
            else
            {
             insert(head->next,data);
            }


            return head;       
      }