#include <iostream>
#include <vector>
#include <algorithm>
#include  <queue>
using namespace std; 
int a[10][10];
// int  dx[8] =  {2,-2,2,-2 ,1 , -1,1,-1};
 //int  dy[8] = {1,1,-1,-1,2,2,-2,-2};
queue <pair<int,  int> >q;

pair <int  ,  int >  c[10][10];
int finish1 =0;
int finish2 =0;

bool  check(int x, int y)  {
   return(x  >=1 &&  x  <=8  &&  y  >=1 &&  y  <= 8 &&  a[x][y] == 0);
}
int main() {
    int x1,  y1,  x2,  y2; 
    cin >> x1  >>  y1 >>  x2 >>  y2;
       a[x1][ y1] =1;
       vector<pair<int , int  >  >  result; 
        int  dx[8] =  {2,-2,2,-2 ,1 , -1,1,-1};
          int  dy[8] = {1,1,-1,-1,2,2,-2,-2};
       c[x1][y1] =  make_pair(x1, y1);
       q.push(make_pair(x1,  y1));
    vector<pair<int, int >>  newcan;
    vector<int> find_max_x;
    vector<int>  find_max_y;
       while ( q.empty()  != 1 ) {

          int   x  = q.front().first;
          int  y =  q.front().second;
          

            for (int i = 0;  i  < 8;  i++) {
                int  new_x  =  x  + dx[i];
                
                int   new_y =  y +  dy[i];
                 
                if(check(new_x,  new_y))  {
                    finish1 =  new_x;
                    finish2 =  new_y;
                    q.push(make_pair(new_x,  new_y));
                    a[new_x][new_y] =  a[x][y] +1;
              //     cout <<  new_x << "  "  << new_y << endl;
                   find_max_x.push_back(new_x);
                   find_max_y.push_back(new_y);
                     c[new_x][new_y] =  make_pair(x,y);
                  //   newcan[new_x][new_y].push_back(make_pair(x,y));
                    
                }
            }
            q.pop();
       }
      for(int i=1;  i <=  8 ;  i++) {
           for (int j =1; j  <=8;  j++)
{
         cout << a[i][j]<< " ";
}   
cout <<  endl;   
      }


 
 cout <<  endl  << endl;
 cout <<  "fershind"  << finish1  << " "  <<  finish2 <<  endl;
 cout <<  endl;
 cout << a[x2][y2] - 1 << endl; 
 cout << c[x2][y2].first <<  " "  <<  c[x2][y2].second <<  endl;
 cout << endl;
 sort(find_max_x.begin(),  find_max_x.end());
 sort(find_max_y.begin(),  find_max_y.end());
 for(int i =1; /* x1 */ i  <=  find_max_x[find_max_x.size() - 1];  i++ ) {
     for(int j =1; /* y1 */  j  <=find_max_y[find_max_y.size() -1];  j++) {
         cout << c[i][j].first << " "  <<  c[i][j].second << " ";
     }
     cout << endl;
 }
 cout <<  endl;
 result.push_back(make_pair(x2,  y2));
  int x  =x2; 
  int  y =y2;  
  cout <<  c[x][y].first  <<  " "  <<  c[x][y].second <<endl;
  cout <<  endl;
  while(c[x][y] !=  make_pair(x,y)) {
      
       int   new_x =  c[x][y].first;
       int new_y =  c[x][y].second;
       cout <<  c[x][y].first  <<  "  "  <<  c[x][y].second <<  endl;
       result.push_back(make_pair(new_x,  new_y));
       x  =  new_x; 
       y =  new_y;
  }
  cout << endl <<  endl;
 for(int i =  result.size() -1; i > 0; i--) {
     cout <<  result[i].first  <<  "  " << result[i].second <<  endl;
 }
  
    return 0;;


}
