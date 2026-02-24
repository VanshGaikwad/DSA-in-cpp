#include<iostream>
#include<queue>
#include<stack>
using namespace std;

class node{
    public: 
    int data;
    node* left;
    node* right;

    node (int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};


node* buildTree(node* root){
    cout<<"Enter data for node:"<<endl;
    int data;
    cin>>data;
    root = new node (data);

    if(data == -1){
        return NULL;
    }
    cout<<"Enter data for ineserting in left:"<<data<<endl;
    root->left = buildTree(root->left);
    
    cout<<"Enter data for ineserting in right:"<<data<<endl;
    root->right = buildTree(root->right);
    return root;
    
}

// level order traversal
void levelOrderTraversal(node * root ){
    queue<node* > q;
    q.push(root);
    q.push(NULL);
    
    
    while(!q.empty()){
        node* temp = q.front();
        
        
        q.pop();
        if(temp ==NULL) //old level traverse conplete
        {
            cout<<endl;
            if(!q.empty()){ // queue still has some child nodes
                q.push(NULL);
            }
        }
        else{
            cout<<temp ->data << " ";
            if(temp -> left){
            q.push(temp->left);
        }
        if(temp-> right){
            q.push(temp ->right);
        }
        }
    }
}

// reverse level order traversal

void  reverseOrderTraversal (node* root){
    
    if(root == NULL){return ;}
    queue<node*>q;
    stack<node*>s;

    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();

         if(temp == NULL){
            s.push(NULL);   // level end store karo
            if(!q.empty())
                q.push(NULL);
        }
        else{
        s.push(temp);
        if(temp->right){
            q.push(temp->right);
        }
        if(temp->left){
            q.push(temp->left);
        }
        }
    }

    while(!s.empty()){
        node* temp =s.top();
        s.pop();
        if(temp == NULL){
            cout<<endl;
        }
        else{
            cout<<temp->data<<" ";
        }
    }


}

int main(){
    node* root = NULL;
    root = buildTree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    // level order traversal
    cout<<"Printing the level order traversal output:" <<endl;
    levelOrderTraversal(root);
    cout<<"Printing the Reverse level order traversal output:" <<endl;
    reverseOrderTraversal(root);
    return 0;
}