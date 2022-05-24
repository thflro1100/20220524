#include <iostream>
#include <string>
#include <stack>

using namespace std;
//#####
//#P ##
//#  ##      
//#  G#
//#####

template<typename T>
class Queue
{
public:
	Queue() {}
	virtual~Queue() {}

	T Database[10];

	int Cusor = -1;

	T queue(T A )
	{
		Database[Cusor++] = A;

		return A;

	}
	void dequeue(T& A, T& B)
	{
		Database[Cusor+A] = A;
		Database[Cusor + T(A+1)] = B;
		T Temp;
		Temp = A;
		A = B;
		B = Temp;

		
	} 
		
};



int main()
{
	Queue<int> IntQueue;
	for (int i = 1; i <= 10; ++i)
	{
		IntQueue.dequeue(i,i);
		cout << IntQueue.queue(i)<< endl;

	}
	
	

	

	return 0;
}