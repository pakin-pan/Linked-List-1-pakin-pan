class node
{private:
    int id;
	   string name; 
    node* next;
 public:
    node(int,string);
    void print();
    node* get_next();
    void set_next(node*);
   ~node();
     };

typedef node* nodePtr;
nodePtr y;

node::node(int i, string n){
  id = i;
  name = n;
  next = NULL;
}

node::~node(){
  cout<<"Deleting "<<name<<endl;
}

void node::print(){
  std::cout<<"Name: "<< name<<endl;
  std::cout<<"ID: "<<id<<endl;
}

nodePtr node::get_next(){
  return next;
}

void node::set_next(nodePtr p){
  next = p;
}