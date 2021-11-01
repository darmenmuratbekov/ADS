#include <iostream>
#include <string>
using namespace std;


class Node {
   public:


    string data;
    Node *prev;
    Node *next;

     Node(string data)  {
       this ->data =  data;
       this -> next  = NULL;
       this -> prev =  NULL;
     }

    
};
class  Linkedlist  {
    public:
    Node *tail, *front;
    Linkedlist() {
        tail =  NULL;
        front =  NULL;
    }
 void push_back(string data) {
        Node *node = new Node(data);
        if (tail == NULL) {
            tail = node;
            front = node; // darmen
        } 
        else {
            node->prev =  tail ; // darmen,  dauren,  
            tail->next = node; //  dauren, arman
            tail = node; //  dauren  to  tail ga  arman
            //  tail //  darmen, dauren arman 
        }
    }
 
 void change(int changesum) {
     Node *node =front;
     int counter =0;
     while (counter < changesum) {
         node = node-> next; //  show must
       // cout << node->data; //  show must 
         counter++; // 1 2
     }
     while (node != NULL) {
         cout << node->data <<" ";
         node = node->next;
     }
     counter= 0;
     Node *start = front;
     while (counter  < changesum) {
         cout << start->data <<" ";
         start =  start ->next;
         counter++;
     }
     cout <<endl;
     
 } 
  
 /*   void print() {
      //  cout << front -> data <<  endl;
       Node *node = front;
       while(node != NULL) {
           cout << node->data <<" ";
           node = node ->next  ;
       }
       cout << endl;
    } */
    
    
};
int main() {
    Linkedlist *newnode = new Linkedlist();
    int  size;
    int changesum;
    cin >> size>> changesum;
    string word; 
    for(int i =1;  i <=size;  i++ ){
        cin >>  word;
       newnode->push_back(word);
    }
    newnode->change(changesum);
  //  newnode->print();



  return  0;
}
