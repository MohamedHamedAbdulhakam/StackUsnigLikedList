
#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;
    Node() {
        data = 0;
        next = NULL;
    }
};
class Stack {
    Node* top;
public:
    Stack() {
        top = NULL;
    }
    bool isEmpty() {
        if (top == NULL)
            return true;
        else return false;
    }
    void push(int item)
    {
        Node* newNode = new Node();
        newNode->data = item;
        if (isEmpty()) {
            
            newNode->next = NULL;
            top = newNode;
        }
        else {
            newNode->next = top;
            top = newNode;
        }
    }
    void pop()
    {
        Node* delPtr = top;
        top = top->next;
        delete delPtr;
    }
    int peek()
    {
        return top->data;
        cout << endl;
    }

    void display() {
        Node* temp = top;
        while (temp != NULL)
        {
            cout << temp->data<<" ";
            temp = temp->next;
        }
        cout << endl;
    }

    int count() {
        int counter = 0;
        Node* temp = top;
        while (temp != NULL)
        {
            counter++;
            temp = temp->next;
        }
        return counter;
        cout << endl;
    }
};


int main()
{
    Stack myStack;
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);
    myStack.push(40);
    myStack.push(50);
    myStack.display();
    myStack.pop();
    myStack.display();
    cout << "The output of disply function is :" <<myStack.peek() << endl;
    cout <<"The number of elements in your stack are :"<<myStack.count();

}

