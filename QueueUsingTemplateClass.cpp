#include<iostream>
#include "QueueTemplateClass.h"

using namespace std;

template <class T>
Queue<T>::Queue()
{
    arr = new T[MAX];
    head = new int(0);
    tail = new int(0);
}

template <class T>
void Queue<T>::add(T data)
{
    if(tail >= MAX)
    {
        cout << "Queue exceded MAX limit." << endl;
        return;
    }
    arr[tail] = data;
    tail++;
}

template <class T>
void Queue<T>::del()
{
    if(head >= tail)
    {
        cout << "Queue is empty" << endl;
        return;
    }
    head++;
}

template <class T>
T Queue<T>::getStart()
{
    return arr[head];
}

template <class T>
T Queue<T>::getEnd()
{
    return arr[tail-1];
}

template <class T>
void Queue<T>::printQueue()
{
    if(head >=tail)
    {
        cout << "Queue is empty." << endl;
    }
    cout << "key = data" << endl;
    for(int i = head ; i < tail-1 ; i++)
    {
        cout << i << " = " << arr[i] << " , ";
    }
    cout << tail-1 << arr[tail-1] << endl;
}

template <class T>
Queue<T>::~Queue()
{
    delete arr;
    delete head;
    delete tail;
}

int main()
{
	
	//your Code.
	
  return 0;
}
