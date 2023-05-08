#include<iostream>
#include<queue>
using namespace std;

 
 
class Node 
{

 
public:
int data;
  
 
Node * left;
  
 
Node * right;
  
 
 
Node (int data) 
  {
    
 
this->data = data;
    
 
this->left = NULL;
    
 
this->right = NULL;

 
} 
};


 
            
            Node * createBinaryTree (Node * node) 
            {
            
            
            
            cout << "enter data value: " << endl;
            
            
            int data;
            
            
            
            cin >> data;
            
            
            if (data == -1)
            
            {
              
            
            return NULL;
            
            
            }
            
            
            node = new Node (data);
            
            
            
            
            cout << "enter left data value: " << endl;
            
            
            
            node->left = createBinaryTree (node->left);
            
            
            cout << "enter right data value: " << endl;
            
            
            
            node->right = createBinaryTree (node->right);
            
            
            return node;
            
            
            
            }

void levelOrderTraversal(Node*node){
    
    queue<Node*>q;
    q.push(node);
    q.push(NULL);
    
    while(!q.empty()){
        Node*temp=q.front();
        q.pop();
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data;
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
        
    }
}
 
 
int 
main () 
{
  
 
 
Node * root = NULL;
  
 
 
root = createBinaryTree (root);

levelOrderTraversal(root);

 
} 
