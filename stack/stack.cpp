#include <iostream>
using namespace std;
 struct stack{
    int arr[100];
    int top=-1;

    void push(int val){
        if(top==99)
        return;
        top++;
        arr[top]=val;
    }

    void pop(){
        if(is_empty()) return;
        top--;
    }

    int top_val(){
        if(top==-1) return -1;
        return arr[top];
    }

    bool is_empty(){
        if (top==-1)
        {return true;}
        else{ return false;}
        }
    };
    
int main() {
  stack stk;
    stk.push(3);
    stk.push(9);
    stk.push(2);

  while (!stk.is_empty())
  {
    cout<<stk.top_val()<<endl;
    stk.pop();
  }
  return 0;
}
