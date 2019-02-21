#ifndef __NODE_H__
#define __NODE_H__
#include <iostream>
using namespace std;

class Node{
private:
  int data;
  Node *next;
public:
  Node(void);
  ~Node(void);
  void SetData(int);
  int GetData(void);
  void SetNodeNext(Node *);
  Node *GetNodeNext(void);
};

#endif //-- __NODE_H__
