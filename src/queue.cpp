/**
 * File: queue.cpp
 * Author(s): Pierre Abraham Mulamba
 * Creation (modification) date: 20210323 (20210323)
 * Description: Implementation of the class Queue
 */


#include "queue.h"
#include <iostream>


Queue::Queue()
{
  head = nullptr;
  tail = nullptr;
}

Queue::~Queue()
{
}


void Queue::print()
{
  std::shared_ptr<Node> begin = std::make_shared<Node>();
  begin = head;
  std::cout << "[ ";
  while(begin != nullptr){
    std::cout << begin->data << "->";
    begin = begin->next;
  }
  std::cout << " ]\n";
}

void Queue::enqueue(int value)
{
  /*
    Insetion only a the tail
    1. create a tmp node
    2. tail->next = tmp
    3. tail = tail->next
   */
  std::shared_ptr<Node> tmp = std::make_shared<Node>();
  tmp->data = value;
  if(head == nullptr){
    head = tmp;
    tail = tmp;
  }
  else{
    tail->next = tmp;
    tail = tail->next;
  }
}

int Queue::dequeue()
{
  /*
    1. create a dequeue_value
    2. dequeue_value = head->data
    3. head = head->next
    4. return dequeue_value
  */
  int dequeue_value = 0;
  dequeue_value = head->data;
  head = head->next;
  return dequeue_value;
}
