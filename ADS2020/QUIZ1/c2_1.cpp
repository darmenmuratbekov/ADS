#include <iostream>
#include <vector> 
using namespace std; 

int counter[1000];
class   Node {
    public: 
    long long data;
    Node *next,  *prev;
    Node (int data)  { 
        this->  data =  data;
        this->  next = NULL;
        this-> prev =  NULL;
    }
}; 
class   LinkedList  { 

    public: 

    long long  a[10000];
    Node *tail, *front;
    Node *tail1, *front1;
    int size;
    int sizecameback;
    LinkedList() {
        tail = NULL;
        tail1 =  NULL;
        front1 =  NULL;
        front = NULL;
        size=-1;
        sizecameback = -1;

    }

    void push_back(int data) {
        Node *node = new Node(data);
        if (tail == NULL) {
            tail = node;
            front = node;
        } else {
            node->prev = tail;
            tail->next = node;
            tail = node;
        }
    }
    void pushmassiv(int data ) {
       size++;
       sizecameback++;
       a[size] = data;

    }
    int counterlenght = 0 ;
    vector<int> clearhelp;
    bool ok;
    void  count( int b,  int c,  int d,  int z)  {
        int countersize = 0;
     //   Node *node =  front1;
    // cout << clearhelp.size() << " ";
        while(size != -1 )  {
          //  cout <<  a[size] << " ";
            if (b <= a[size] && a[size] <= c) {
            //  cout <<  a[size] << " ";
              // countersize++;
            if(clearhelp.size() == 0) {
                clearhelp.push_back(a[size]);
                countersize++;
            }
            else {
                  for(int i = 0; i  < clearhelp.size(); i++ ) {
                    if(clearhelp[i] != a[size]) {
                         ok  = true;
                      //    clearhelp.push_back(a[size]);

                    }
                    else {
                        ok =false;
                       //  clearhelp.push_back(a[size]);
                    }
                }
                if (ok  == true) {
                    countersize++;
                }
                else {
                    countersize;
               
                   }
                clearhelp.push_back(a[size]);
            }
              
              // clearhelp.[a[size]] = true;
             //  cout <<  countersize << " ";
            }
            if (d <=  a[size]  && a[size] <=  z) {
            //    clearhelp.push_back(a[size]);
               if (clearhelp.size() == 0) {
                   clearhelp.push_back(a[size]);
                   countersize++;
               }
               else {
               // countersize++;
                for(int i = 0; i  < clearhelp.size(); i++ ) {
                    if(clearhelp[i] != a[size]) {
                         ok  = true;
                        
                    }
                    else {
                        ok =false;
                        
                    }
                }
                if (ok  == true) {
                    countersize++;
                }
                else {
                    countersize;
                }
               clearhelp.push_back(a[size]);
               }
             
               // cout <<  countersize << endl;
        }
            size--;
     }
    clearhelp.clear();
    size = sizecameback;
    Node *node =  new Node(countersize);
     if (tail == NULL) {
            tail = node;
            front = node;
    } 
    else {
            node->prev = tail;
            tail->next = node;
            tail = node;
         }


    }
 void print() {
     
        Node *node = front;
        while (node != NULL) {
            cout << node->data << endl;
            node = node->next;
        }
    }


};

int main() {

    LinkedList *newx =  new LinkedList();



    long  opp;
    cin >>  opp;
    int opps[opp];
    
    long  size4;
    long long  oppss;
    cin >> size4;
    for (int i =0;  i < opp;  i++) {
        cin >>  oppss;
        newx->pushmassiv(oppss);
    }
    long long  b,c,d,z;
    
    for(int i =1;  i <= size4; i++ ) {

        cin >>  b >> c >>  d >>  z;
        newx->count(b,c,d,z);


    }
    
    newx->print();

    return 0;
}
