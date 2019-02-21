#include "LinkedList.h"

int main(int argc,char *argv[]){
  LinkedList *linked = new LinkedList();
  linked->Add(5);
  linked->Add(6);
  linked->Add(7);
  linked->Add(8);
  linked->Add(9);
  linked->ShowList();
  system("pause");
  return 0;
}
