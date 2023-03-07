//class for Priority Queue
class Priority_Que{

private:
    //Queue front element
	P_Node* Front;

public:

	Priority_Que() {
		Front = NULL;
	}


	bool isempty() {
		if (Front == NULL) {
			return true;
		}
		else{
			return false;
        }
	}


	void Enqueue(ORDER data, double priority) {
		P_Node* temp;
		P_Node* q;
		temp = new P_Node;
		temp->data = data;
		temp->priority = priority;
		if (Front == NULL || priority > Front->priority){
			temp->next = Front;
			Front = temp;
		}
		else{
			q = Front;
			while (q->next != NULL && q->next->priority >= priority)
				q = q->next;
			temp->next = q->next;
			q->next = temp;
		}
	}

    
    //Function to check the data from the Queue
	void TOP(ORDER& data) {
		if (Front != NULL) {
			P_Node* temp = Front;
			data.Time = temp->data.Time;
            data.orderValue = temp->data.orderValue;
            data.customerType = temp->data.customerType;
            data.penaltyTime = temp->data.penaltyTime;
            data.orderId = temp->data.orderId;
            data.preptime = temp->data.preptime;
		}
		else{
			data.penaltyTime = -1;
		}
	}



    //Function to Dequeue the data from the Queue
	ORDER Dequeue() {
		ORDER data;
        //Deleting or accessing data from starting node
		if (Front != NULL) {
			P_Node* temp = Front;
			data.Time = temp->data.Time;
            data.orderValue = temp->data.orderValue;
            data.customerType = temp->data.customerType;
            data.penaltyTime = temp->data.penaltyTime;
            data.orderId = temp->data.orderId;
            data.preptime = temp->data.preptime;

			Front = Front->next;
			delete temp;
			return data;
		}
		else{
			cout << "Queue is empty\n";
        }
	}


};