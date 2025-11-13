//Implement Queue using array
#include <iostream>
using namespace std;

// size of the stack
const int MAX = 5;

class Queue
{
private:
	// array to store queue elements
    int arr[MAX];
	int front;
	int rear;
public:
	// constructor to initialize front and rear
	Queue() 
	{
		front = -1;
		rear = -1;
	}
	// function to add an item to the queue
	void addQueue(int item)
	{
		if (rear == MAX - 1)
		{
			cout << "Queue is full :" << endl;
			return;
		}
		rear++;
		arr[rear] = item;
		cout << "Inserted :" << item << endl;

		if(front == -1)
			front = 0;
	}
	// function to delete an item from the queue
	void deleteQueue()
	{
		if(front == -1)
		{
			cout << "Queue is empty :" << endl;
			return;
		}
		int data = arr[front];
		arr[front] = 0;

		if (front == rear)
			front = rear = -1;
		else
			front++;

		cout<< "Deleted from queue :" <<data << endl;
	}
	// function to display the queue elements
	void display()
	{
		if (front == -1)
		{
			cout << "Queue is empty :" << endl;
			return;
		}
		cout << "Queue elements are :" << endl;
		for (int i = front; i <= rear; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
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

	// delete an item from the queue
	q.deleteQueue();
	q.addQueue(40);
	// display queue
	q.display();
	return 0;
}