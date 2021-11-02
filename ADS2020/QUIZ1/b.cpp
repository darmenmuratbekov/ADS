#include<iostream>
#include<algorithm>

using namespace std;


struct qu{
    int a[10000];
    int ind = 0;
    void push(int x){
        a[ind] = x;
        ind ++;
    }
    void rev(){
        reverse(a,a + ind);
    }
    void printArray(){
        for(int i=0;i<ind;i++){
            cout<<a[i]<<" ";
        }
        cout<<"\n";
    }
};

int main(){
    int n,x,numb;
    cin>>n;
    qu  q;
    while(n != 0){
        n--;
        cin>>x;
        if(x == 1){
            cin>>numb;
            q.push(numb);
        }

        if(x == 2){
            q.rev();
        }
    }
    
    q.printArray();

    return 0;
}
