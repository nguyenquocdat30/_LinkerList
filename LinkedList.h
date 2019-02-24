#ifndef __LINKEDLIST_H__
#define __LINKEDLIST_H__
#include <iostream>
#include "Node.h"

class LinkedList{
private:
  int length;
  Node *head;         // head of list

public:
  LinkedList(void);
  ~LinkedList(void);
  void ShowList(void);  // Show list
  void Add(int);        // add to list
  void Remove(int);     // remove with data
protected:
};

#endif //-- __LINKEDLIST_H__
