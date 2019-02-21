#include "LinkedList.h"

LinkedList::LinkedList(void){
  this->length = 0;
  this->head = NULL;
}

LinkedList::~LinkedList(void){
  Node *cur = NULL;
  cur = this->head;
  while(cur != NULL){
    this->head = cur->GetNodeNext();
    delete cur;
    cur = this->head;
  }
}

void LinkedList::ShowList(void){
  std::cout<<"\n List data \n";
  Node *cur = NULL;
  cur = this->head;
  while(cur != NULL){
    std::cout<<cur->GetData()<<std::endl;
    cur = cur->GetNodeNext();
  }
}

void LinkedList::Add(int value){
  Node *tempNode = new Node();
  tempNode->SetData(value);
  tempNode->SetNodeNext(this->head);
  this->head = tempNode;
  this->length++;
}
