# Linked-Lists-
This project implements Stack and Queue data structures using a singly linked list in C++, without relying on the C++ Standard Library (except for new and delete). The goal is to demonstrate a low-level understanding of memory management, pointers, and data structure design.
```
  Node
  --------------------------------------------------
   value: int                         The value in this node
   next: Node *                       A pointer to the "next" node
  --------------------------------------------------
  +Node(newvalue: int)                initialize Node with newvalue and next=nullptr
  +Node(newvalue: int, newnext: Node *) initialize with given value and next
  +setNext(newnext: Node *)           set the next pointer for this node
  +getNext(): Node *                  return the next pointer for this node
  +setValue(newvalue: int)            set the value for this node
  +getValue(): int                    return the value of this node
```

```
  Queue
  --------------------------------------------------
   head: Node *                       first element of Queue (null if empty)
   ... you might want more ...
  --------------------------------------------------
  +Queue()                            initialize empty queue
  +~Queue()                           destroy a queue
  +enqueue(value: int)                prepend "value" to the queue
  +dequeue():int                      remove & return first element
  +length(): size_t                   return the current length of the queue
  +clear()                            empty the queue
  +getHead(): Node *                  return the head node of the queue
```

```
  Stack
  --------------------------------------------------
   head: Node *                       first element of stack (null if empty)
   ... you might want more ...
  --------------------------------------------------
  +Stack()                            initialize empty stack
  +~Stack()                           destroy a stack
  +push(value: int)                   prepend "value" to the stack
  +pop(): int                         remove & return first "value" from stack
  +length(): size_t                   return the current length of the stack
  +clear()                            empty the queue
  +getHead(): Node *                  return the head node of the stack
```

If your Queue is empty and the dequeue operation is used, you should
throw an `runtime_error` exception, and the same goes for if an empty
stack is asked to `pop` and element.
