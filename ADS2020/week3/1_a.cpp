#include <iostream>
#include <vector>
using namespace std;

vector<int>l;
class  Node {
   
  public: 

  int data;
  Node *next,  *prev;
  Node(int data ) {
      this-> data =  data;
      this-> next =  NULL;
      this ->prev =  NULL;
  }





};
class  Linkedlist  {
     public: 
     Node *tail,*front;
     Linkedlist()  {
         tail = NULL;
         front =  NULL;
     }
     void  push_back(int   data) {
         Node *node =  new Node(data);
         if (tail ==  NULL ) {
             tail = node;
             cout <<"if " << tail  <<  " " << node->data <<endl;
             front =  node;
         }
         else {
             int y =0;
             cout << node->prev <<  endl;
             node -> prev = tail; // odinokkivau  narse 
           //  cout << node ->prev <<  endl; 
             if(y ==0) {
               cout << "IF D " <<  node->prev<<"  " <<  node->prev->data <<  endl;
               y++;
             }
              cout << node->data  << endl;
             tail-> next = node;
            
             tail =  node;
         }
     } 
     void print() {
         Node *node =  front;
         while (node  != NULL) {
             cout << node->data <<    " ";
             node = node->next;
         }
        cout <<endl;
     }
     void insertvector() {
         Node * node =  front;
         while (node  !=  NULL)  {
             l.push_back(node->data);
             node =  node ->next;
            
         }
     }
};
int main()  {
  Linkedlist *ll =  new Linkedlist();
  ll->push_back(10);
  ll->push_back(100);
  
  ll->print();
  
  cout << endl;
  for(int i =0; i < l.size(); i++ ){
      cout << l[i] << " ";
  }
  return 0;
}
