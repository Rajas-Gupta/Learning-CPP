void levelOrder(node * root){
    queue<node *>q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        node * f=q.front();
        q.pop();
        if (f!=NULL)
        {
            cout<<f->data<<" ";
            if (f->left)
            {
                q.push(f->left);
            }
            if (f->right)
            {
                q.push(f->right);
            }
        }
        else
        {
            cout<<endl;
            if (!q.empty())
            {
                q.push(NULL);
            }   
        }   
    }
}