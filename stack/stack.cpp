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
  
    bool Pair(char open,char close){
      if(open=='(' && close==')') return true;
      else if(open=='{' && close=='}') return true;
      else if(open=='[' && close==']') return true;

      return false;
    }
    bool is_balance(string exp){
      stack open_brakets;
      for (int i=0;i<exp.length();i++){
        if(exp[i]=='(' || exp[i]=='{' || exp[i]=='[')
        {
           open_brakets.push(exp[i]);
        }
         else if (exp[i]==')' || exp[i]=='}' || exp[i]==']'){

           if(open_brakets.is_empty()) return false;
           else if(Pair(open_brakets.top_val(),exp[i])== false) return false;
        
         open_brakets.pop();
         }
        
         
      
    
    if(open_brakets.is_empty()) return true;
    else return false;
    }  
    }
int main() {
  // brackets example
string s;
cin>>s;
if(is_balance(s)){
  cout<<"balance ok"<<endl;
} 
else {
  cout<<"balance is not  ok"<<endl;
} 

  // simple stack
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
