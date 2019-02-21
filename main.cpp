#include "LinkedList.h"

int main(int argc,char *argv[]){
  LinkedList *linked = new LinkedList();
  linked->ShowList();
  linked->Add(5);
  linked->Add(6);
  linked->ShowList();
  system("pause");
  return 0;
}
