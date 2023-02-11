#include<iostream>
#include<stdlib.h>

using namespace std;
#define size 5
int front = -1;
int rear = -1;
int arr[size];

void Enque(int data) {

	if (rear == size - 1)
	{
		cout << "Queue is Full";
		return;
	}
	else {
		rear++;
		arr[rear] = data;
	}

}
void dequeue()
{
	int temp_var = -1;
	if (front == rear)
	{
		cout << "Queue is Already Empty and No elements present in the queue";
	}
	else {
		front++;
		temp_var = arr[front];

	}

}
int main()
{
	int data;

	for (int i = 0; i < size; i++)
	{
		if (i == size - 1)
		{
			cout << "Queue size is full now no more elements can be added to it" << endl; ;
			break;
		}
		cout << "Enter the data" << endl;
		cin >> data;
		Enque(data);


	}

	for (int i = 0; i < size-1; i++)
	{
		cout << arr[i] << " , ";
	}
	cout << endl;
	dequeue();
	cout << endl;
	for (int i = 0; i < size-1; i++)
	{
		cout << arr[i] << endl;
	}
}