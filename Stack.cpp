//Stack class
class Stack{

//top node of stack
private:
	Node* top;

public:

	Stack() {
		top = NULL;
	}


	bool isempty() {
		if (top == NULL)
			return true;
		else
			return false;
	}
	
    
    void push(ORDER o) {
		Node* newnode = new Node;
		newnode->data = o;
		newnode->next = top;
		top = newnode;
	}


	ORDER pop() {
		if (isempty()) {
			cout << "The Stack is empty\n";
		}
		else{
			Node* temp = new Node;
			temp = top;
			top = temp->next;
			return temp->data;
			free(temp);
		}
	}


	void TOP(ORDER& o) {
		if (isempty()) {
			cout << "The Stack is empty\n";
		}
		else{
			o = top->data;
		}
	}
};