// Leilani Perez CS2281 s2026

#include "List.h"

#include <algorithm>
#include <stdexcept>

// class implementations go here

Node::Node(int newvalue) {
    value = newvalue;
    next = nullptr;
}

Node::Node(int newvalue, Node* newnext) {
    value = newvalue;
    next = newnext;
}

void Node::setNext(Node* newnext) {
 next = newnext;
}
Node* Node::getNext() {
    return next;
}

void Node::setValue(int newvalue) {
    value = newvalue;
}

int Node::getValue() {
    return value;
}

Queue::Queue() {
    head = nullptr;
    tail = nullptr;
    count = 0;
}

Queue::~Queue() {
    clear(); //right?
}
void Queue::enqueue(int value) {
    Node* newnode = new Node(value);

    if (tail == nullptr) {
        head = tail = newnode;
    }else {
        tail->setNext(newnode);
        tail = newnode;
    }
    count++;
}

int Queue::dequeue() {
    if (head == nullptr) {
        throw std::runtime_error("Queue is empty");
    }
    Node* temp = head;
    int value = temp->getValue();

    head = head->getNext();
    delete temp;

    if (head == nullptr) {
        tail = nullptr;
    }
    count--;
    return value;
}

size_t Queue::length() {
    return count;
}
void Queue::clear() {
    while (head != nullptr) {
        Node* temp = head;
        head = head->getNext();
        delete temp;
    }
    tail = nullptr;
    count = 0;
}

Node* Queue::getHead() {
    return head;
}
Stack::Stack() {
    head = nullptr;
    count = 0;
}
Stack::~Stack() {
    clear();
}
void Stack::push(int value) {
    Node* newNode = new Node(value, head);
    head = newNode;
    count++;
}

int Stack::pop() {
    if (head == nullptr) {
        throw std::runtime_error("Stack is empty");
    }
    Node* temp = head;
    int value = temp->getValue();

    head = head->getNext();
    delete temp;

    count--;
    return value;
}

size_t Stack::length(){
    return count;
}
void Stack::clear() {
    while (head != nullptr) {
        Node* temp = head;
        head = head->getNext();
        delete temp;
    }
    count = 0;
}
Node* Stack::getHead() {
    return head;
}