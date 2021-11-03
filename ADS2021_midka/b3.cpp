#include <iostream> 
 
using namespace std; 
 
 
struct heap{ 
    long long val[10000000]; 
    int hs; 
 
    heap(){ 
        hs = 0; 
    } 
 
    long long get_min(){ 
         
        return val[0]; 
    } 
 
    void add(long long x){ 
        int i = hs++; 
        val[i] = x; 
        int p = (i - 1)/2;  
        while(i && val[i] < val[p]){ 
            swap(val[i], val[p]); 
            i = p; 
            p = (i - 1)/2;  
        } 
    } 
 
    void del(){ 
        val[0] = val[--hs]; 
        int i = 0; 
        while(2 * i + 1 < hs){ 
            int c1 = 2 * i + 1; 
            int c2 = 2 * i + 2; 
            int mp = c1; 
            if(c2 < hs){ 
                if(val[c2] < val[c1]){ 
                    mp = c2; 
                } 
            } 
            
            if(val[i] > val[mp]){ 
                swap(val[i], val[mp]);  
                i = mp; 
            }else{ 
                break; 
            } 
        } 
    } 
 
    void print(){ 
        for(int i = 0; i < hs; ++i){ 
            cout << val[i] << " "; 
        } 
        cout << endl; 
    } 
}; 
 
 
int main(){ 
    heap h; 
    int n; 
    long long sum = 0; 
    cin>>n; 
    for (int i=0; i<n; i++){ 
        int x; 
        cin>> x; 
        h.add (x); 
    } 
    while (h.hs !=1){ 
        long long sumoftwo = 0; 
        sumoftwo += h.get_min(); 
        h.del(); 
        sumoftwo += h.get_min(); 
        h.del(); 
        h.add(sumoftwo);         
        sum += sumoftwo; 
    } 
    cout<<sum; 
     
    return 0; 
}
