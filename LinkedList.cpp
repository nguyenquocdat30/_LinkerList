#include "LinkedList.h"

LinkedList::LinkedList(void){
  this->length = 0;
  this->head = NULL;
}

LinkedList::~LinkedList(void){
  if(this->head != NULL){
    delete this->head;
    this->head = NULL;
  }
}

void LinkedList::ShowList(void){
  std::cout<<"Length"<< this->length<<endl;
}

void LinkedList::Add(int value){
  Node *tempNode = new Node();
  tempNode->SetData(value);
  tempNode->SetNodeNext(this->head);
  this->head = tempNode;
  this->length++;
}
