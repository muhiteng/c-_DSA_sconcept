#include<iostream>
using namespace std;

class LinkedList{
        struct Node
        {
            int data;
            Node* next;
        };
        Node* head=NULL;
        
   public:
   // Insert node at the end of linked list
    void Append(int val){
        Node* newNode=new Node();
        newNode->data=val;  //(*newNode).data=val;
        newNode->next=NULL;  //(*newNode).next=NULL;
        //================
        if(head ==NULL){
            // if linkedlist is empty
            head=newNode;
        } else{
            Node* temp=head;
            while (temp->next != NULL)
            {
                temp=temp->next;
            }
            temp->next=newNode;
            
        }
    }
    void Inset_at_position(int val,int pos){}
    void Display(){}
    void Delete(int val){}
    
        
    
};

int main(){









//=====================================
system("pause");
    return 0;
}
