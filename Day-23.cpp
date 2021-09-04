#include <iostream>
#include <cstddef>
#include <queue>
#include <string>
#include <cstdlib>

using namespace std;	
class Node{
    public:
        int data;
        Node *left,*right;
        Node(int d){
            data=d;
            left=right=NULL;
        }
};
class Solution{
    public:
  		Node* insert(Node* root, int data){
            if(root==NULL){
                return new Node(data);
            }
            else{
                Node* cur;
                if(data<=root->data){
                    cur=insert(root->left,data);
                    root->left=cur;
                }
                else{
                   cur=insert(root->right,data);
                   root->right=cur;
                 }           
           return root;
           }
        }

    
    int height(Node *root){
          if(root ==nullptr) return 0;
          return 1+max(height(root->left),height(root->right));
      }
    void printLevel(Node* root, int l){
        if(root==NULL) return;
        if(l==1) cout<<root->data<<" ";
        else if(l>1){
            printLevel(root->left, l-1);
            printLevel(root->right, l-1);
        }
    }
	void levelOrder(Node * root){
      //Write your code here
  	
      int h = height(root);
      for(int l=1;l<=h;l++){
          printLevel(root,l);
      }
      
  
	}

};//End of Solution
int main(){
    Solution myTree;
    Node* root=NULL;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        root= myTree.insert(root,data);
    }
    myTree.levelOrder(root);
    return 0;
}
