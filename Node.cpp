#include "Node.h"

Node::Node(void){
  this->data = 0;
  this->next = NULL;
}

Node::~Node(void){
  if(this->next != NULL){
    delete this->next;
    this->next = NULL;
  }
}

void Node::SetData(int value){
  this->data = value;
}

int Node::GetData(void){
  return this->data;
}

void Node::SetNodeNext(Node *node){
  this->next = node;
}

Node *Node::GetNodeNext(void){
  return this->next;
}
