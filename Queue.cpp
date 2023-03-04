class Que//class for Queue
{
private:
	Node* Front;//Queue front element
	Node* Rear;//Queue rear element
public:
	Que()
	{
		Front = NULL;
		Rear = NULL;
	}
	bool Is_empty()//Method to check that queue is empty or not
	{
		if (Front == NULL)
		{
			return true;
		}
		else
			return false;
	}
	void Enqueue(ORDER data)//Method to Enqueue the data on the Queue
	{
		Node* newnode = new Node;
		newnode->data.Time = data.Time;
		newnode->data.foodorderid = data.foodorderid;
		newnode->data.expirytime = data.expirytime;
		newnode->data.preptime = data.preptime;
		newnode->data.ingredients = data.ingredients;
		newnode->data.price = data.price;
		newnode->data.Meal = data.Meal;
		if (Rear == NULL || Front == NULL)
		{
			newnode->next = NULL;
			Rear = newnode;
			Front = newnode;
		}
		else
		{
			newnode->next = NULL;
			Rear->next = newnode;
			Rear = newnode;
		}
	}
	void TOP(ORDER& data)//Function to check the data from the Queue
	{
		if (Front != NULL)
		{
			Node* temp = Front;
			data.Time = temp->data.Time;
			data.foodorderid = temp->data.foodorderid;
			data.expirytime = temp->data.expirytime;
			data.preptime = temp->data.preptime;
			data.ingredients = temp->data.ingredients;
			data.price = temp->data.price;
			data.Meal = temp->data.Meal;
		}
		else
		{
			data.expirytime = -1;
		}
	}
	ORDER Dequeue()//Function to Dequeue the data from the Queue
	{
		ORDER data;
		if (Front != NULL)
		{
			Node* temp = Front;
			data.Time = temp->data.Time;
			data.foodorderid = temp->data.foodorderid;
			data.expirytime = temp->data.expirytime;
			data.preptime = temp->data.preptime;
			data.ingredients = temp->data.ingredients;
			data.price = temp->data.price;
			data.Meal = temp->data.Meal;
			Front = Front->next;
			delete temp;
			return data;
		}
		else
			cout << "Que is empty\n";

	}
};