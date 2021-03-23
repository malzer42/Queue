#ifndef QUEUE_H
#define QUEUE_H

#include "node.h"
#include <memory>
#include <iostream>

class Queue
{
 public:
  Queue();
  ~Queue();
  void print();
  void enqueue(int data);
  int dequeue();
 private:
  std::shared_ptr<Node> head;
  std::shared_ptr<Node> tail;
};


#endif /* QUEUE_H */
