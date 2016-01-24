#include <iostream>
#include <string>
using namespace std;

class Queue
{
	int N;
	int f;
	int r;
	int *Q;
public:
	void newQueue(int a)
	{
		N = a;                                                
	    Q = new int[N];
		f=0;
		r=0;
	}

	int size()
	{ 
		if ((N-f+r)%N ==0)
		return (0);
		else 
			return (N-f+r);
	}

	bool isEmpty()
	{
		return (f==r);
	}

	int front()
	{
		if (isEmpty())
		{
			cout << "this queue is currently empty";
		}
		else
			return Q[f];
	}

	void dequeue()
	{
			Q[f] = NULL;
			if((f+1) % N==0)
			{
				f=0;
			}
			else
				f=f+1;
		
	}

	void enqueue(int value)
	{
		if (size() == N-1)
			cout << "Queue is full";
		else
		{
			Q[r]= value;
		    if((r+1) % N==0)
			{
				r=0;
			}
			else
				r=r+1;
		}
	}
	void printQueue()                                                   
	{
		for (int i=0;i<N;i++)
		{
			cout << Q[i];
		}
		cout << endl;
	}
};
