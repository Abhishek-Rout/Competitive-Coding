void levelOrder(Node * root)
    {
        queue<Node *> q;
        Node* n = root;
    
        while(n != NULL){
            cout << n->data << ' ';
            
            if( n->left  != NULL ) q.push(n->left);
            if( n->right != NULL ) q.push(n->right);

            if( !q.empty() ) {
                n = q.front();
                q.pop();
            } else {
                n = NULL;
            }
        } 
     }