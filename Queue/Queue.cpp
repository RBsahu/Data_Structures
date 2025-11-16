//Implement Queue using Linked List in C++
#include <iostream>
using namespace std;

class Queue
{
private:
	struct node
	{	
		int data;
		node* link;
	};
	node *front;
	node *rear;
public:
	// constructor to initialize front and rear
	Queue() 
	{
		front = nullptr;
		rear  = nullptr;
	}
	// function to add an item to the queue
	void addQueue(int item)
	{
		node* temp = new node;
		if (temp == nullptr)		
			cout << "Queue is full :" << endl;
		
		temp->data = item;
		temp->link = nullptr;

		if(front == nullptr)
		{
			front = temp;
			rear = temp;
		}
		else
		{
			rear->link = temp;
			rear = temp;
		}		
	}
	// function to delete an item from the queue
	void deleteQueue()
	{
		if(front == nullptr)
		{
			cout << "Queue is empty :" << endl;
			return;
		}
		
		int item = front->data;
		node *temp = front;
		front = front->link;
		delete temp;
		cout << "Deleted item is : " << item << endl;
		
	}
	// function to display the queue elements
	void display()
	{
		// check if queue is empty
		if(front == nullptr)
		{
			cout << "Queue is empty :" << endl;
			return;
		}
		node* temp = front;
		cout << "Queue elements are : ";
		while(temp != nullptr)
		{
			cout << temp->data << " ";
			temp = temp->link;
		}
	}
};
int main()
{
	// create a queue object
	Queue q;
	// perform queue operations
	q.addQueue(10);
	q.addQueue(20);
	q.addQueue(30);
	q.addQueue(40);
	q.addQueue(50);
	q.addQueue(60);

	// delete an item from the queue
	q.deleteQueue();
	q.addQueue(70);
	// display queue
	q.display();
	return 0;
}