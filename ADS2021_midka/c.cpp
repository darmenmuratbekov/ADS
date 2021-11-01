#include <iostream>
#include <stack>
#include <deque>
using namespace std;

struct Node {
  int value;
  int ans;
  Node *prev;
  Node(int value) {
    this-> value = value;
   this->  prev = nullptr;
    ans = -1;
  }
};

struct Stack {
  private:
    Node *head = NULL;
    int sz = 1;
  public:

    int top() {
      return head->value;
      cout << "top() "  <<  head->value  << endl;
    }

    void pop() {
      head = head->prev;
      sz--;
    }

    int size() {
      return sz;
    }

    bool empty() {
      return sz == 0;
    }

    int push(int x) {
      Node * node = new Node(x);
      // write your code here
      while (!empty() && top() > x) {
          pop();
      }
      if (size() > 0) {
          node->ans=top();
          node->prev=head;
          head = node;
      } else {
          head = node;
      }
      sz++;

      return node->ans;
    }

}st;

int main() {
  int n;
  cin >> n;
  while (n--) {
    int x;

    cin >> x; 

    cout << st.push(x) << ' ';
  }
}
