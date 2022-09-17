
class Stack{
private:
	struct Node{
		int data;
		Node* next;
	};
	Node* top = nullptr;
public:

	void push(int value){
		Node* newNode = new Node;
		newNode->data = value;

		if (isEmpty())
			newNode->next = nullptr;
		else
			newNode->next = top;

		top = newNode;
	}

	void pop(){
		if (isEmpty())
			return;

		Node* temp = top;
		top = top->next;
		delete temp;
	}

	bool isEmpty(){
		if (top == nullptr)
			return true;
		else
			return false;
	}

	int topValue(){
		if (isEmpty())
			return -1;
		else
			return top->data;
	}

	~Stack(){
		Node* temp = top;
		while (top != nullptr){
			top = top->next;
			delete temp;
			temp = top;
		}
	}
};