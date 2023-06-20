#include "node.h"

class LL{
   nodePtr hol; //head of linked list
   int size;
  public:
     LL();
      void insert_node(string,int);
	    void print_all();
     ~LL();
};

LL::LL(){
    hol = NULL;
    size =0;    
}

LL::~LL(){
    nodePtr temp = hol;
    while (hol != NULL){
        hol = hol->get_next();
        delete temp;
        temp = hol;
    }
}

void LL::insert_node(string n,int i){
  nodePtr new_node = new node(i,n);
  if(hol==NULL) hol = new_node;
  else {
    nodePtr t = hol;
    while( t->get_next()!= NULL)
      t = t-> get_next();
    t->set_next(new_node);
    
  }
}

void LL::print_all(){
  nodePtr t;
   for (t =hol;t!=NULL;t=t->get_next())
   t->print();
}