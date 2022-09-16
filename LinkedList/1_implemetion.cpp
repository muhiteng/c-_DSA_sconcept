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
    void Inset_at_position(int val,int pos){
        Node* newNode=new Node;
        newNode->data=val;
        newNode->next=NULL; // will changed if insert in middle 
        if(pos == 0){
            newNode->next=head;
            head=newNode;
            return;
        }
        Node* temp=head;
        for(int i=0;i<pos-1;i++){
            if(temp->next==NULL) break;
            temp=temp->next;
        }
        newNode->next=temp->next;
        temp->next=newNode;
    }
    void Display(){
        Node* temp=head;
        while (temp!=NULL){
            cout<<temp->data<<"  ";
            temp=temp->next;
        }
        {
            /* code */
        }
        
    }
    void Delete(int val){
        if(head == NULL) return;
     Node* prev,*temp;
     prev = temp = head;
     if(temp->data == val){
         head=temp->next;
         delete temp;
         return;
     }
     // go ahead while no reach the end
     while(temp !=NULL && temp->data != val)
     {
         prev=temp;
         temp= temp->next;
     }
     // if temp == null there is no elements
     if(temp == NULL)
     return;
     else
     {
         prev->next=temp->next;
         delete temp;
     }
    
    }
    
        
    
};

int main(){

// delete example
LinkedList list;

list.Append(7);
list.Append(10);
list.Append(12);
list.Display();

list.Delete(10);
list.Display();

list.Inset_at_position(20,3);
list.Display();


//=====================================
system("pause");
    return 0;
}
