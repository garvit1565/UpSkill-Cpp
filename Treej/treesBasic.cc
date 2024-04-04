#include <iostream>
using namespace std;

class treeNode{
    int data;
    treeNode* left;
    treeNode* right;


    treeNode* search(treeNode* root,int key){
        if(root == NULL){
            return NULL;
        }

        treeNode* current = root;
        while(current!=NULL){
            if(key == current -> data){
                return current;
            }
            else if(key<current -> data){
                current = current -> left;
            }else{
                current = current -> right;
            }
        }
        return NULL;
    }

};

int main()
{

    
    





    return 0;
}