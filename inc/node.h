/**
 * File: node.h
 * Author(s): Pierre Abraham Mulamba
 * Creation (modification) date: 20210322 (20210322)
 * Description: Self-referential data structure for stack implementation
 */


#ifndef NODE_H
#define NODE_H

#include <memory>

struct Node
{
  int data;
  std::shared_ptr<Node> next;
};


#endif /* NODE_H */
