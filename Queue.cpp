//class for Queue
class Queue{


private:
	Node* Front;//Queue front element
	Node* Rear;//Queue rear element


public:
	Queue() {
		Front = NULL;
		Rear = NULL;
	}

    //Method to check that queue is empty or not
	bool Is_empty() {
		if (Front == NULL)
		{
			return true;
		}
		else
			return false;
	}

    //Method to Enqueue the data on the Queue
	void Enqueue(ORDER data) {
		Node* newnode = new Node;
		newnode->data.Time = data.Time;
        newnode->data.orderValue = data.orderValue;
		newnode->data.customerType = data.customerType;
        newnode->data.penaltyTime = data.penaltyTime;
        newnode->data.orderId = data.orderId;
        newnode->data.preptime = data.preptime;


		if (Rear == NULL || Front == NULL){
			newnode->next = NULL;
			Rear = newnode;
			Front = newnode;
		}
		else{
			newnode->next = NULL;
			Rear->next = newnode;
			Rear = newnode;
		}
	}


    //Function to check the data from the Queue
	void TOP(ORDER& data) {
		if (Front != NULL) {
			Node* temp = Front;
		    newnode->data.Time = data.Time;
            newnode->data.orderValue = data.orderValue;
		    newnode->data.customerType = data.customerType;
            newnode->data.penaltyTime = data.penaltyTime;
            newnode->data.orderId = data.orderId;
            newnode->data.preptime = data.preptime;
		}
		else{
			data.penaltyTime = -1;
		}
	}


    //Function to Dequeue the data from the Queue
	ORDER Dequeue() {
		ORDER data;
		if (Front != NULL) {
			Node* temp = Front;
		    newnode->data.Time = data.Time;
            newnode->data.orderValue = data.orderValue;
		    newnode->data.customerType = data.customerType;
            newnode->data.penaltyTime = data.penaltyTime;
            newnode->data.orderId = data.orderId;
            newnode->data.preptime = data.preptime;
			Front = Front->next;
			delete temp;
			return data;
		}
		else{
			cout << "Queue is empty\n";
        }

	}
};