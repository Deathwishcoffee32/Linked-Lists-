// Leilani PerezCS2281 s2026

#include <string>

// class definitions go here
class Node {
private:
   int value;
   Node* next;
public:
   Node(int newvalue);
   Node(int newvalue, Node* newnext);

   void setNext(Node* newnext);
   Node* getNext();

   void setValue(int newvalue);
   int getValue();
};

class Queue {
private:
   Node* head;
   Node* tail;
   size_t count;

public:
   Queue();
   ~Queue();

   void enqueue(int newvalue);
   int dequeue();

   size_t length();
   void clear();

   Node* getHead();
};
class Stack {
private:
   Node* head;
   size_t count;

public:
   Stack();
   ~Stack();

   void push(int value);
   int pop();

   size_t length();
   void clear();

   Node* getHead();
};
