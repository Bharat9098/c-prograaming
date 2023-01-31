// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4

#include <iostream>
using namespace std;

int main() {
   int i = 1;
   int n;
   
   cout << "enter a number"<<endl;
   cin>>n;
   
   while(i <= n){
      int j = 1;
      while(j <= n){
        cout << j;
        j = j+1;
      }
      cout << endl;
      i = i+1;
   }
}


// 123456
// 23456
// 3456
// 456
// 56
// 6

#include <iostream>
using namespace std;

int main() {
   int i = 1;
   int n;
   
   cout << "enter a number"<<endl;
   cin>>n;
   
    while(i <= n){
      int j = i;
      while(j <= n){
        cout << j; 
        j = j+1;      
      }
      cout << endl;
      i = i+1;
    }
}


// 654321
// 654321
// 654321
// 654321
// 654321
// 654321


#include <iostream>
using namespace std;

int main() {
   int i = 1;
   int n;
   
   cout << "enter a number"<<endl;
   cin>>n;
   
    while(i <= n){
      int j = 1;
      while(j <= n){
        cout << n-j+1; 
        j = j+1;      
      }
      cout << endl;
      i = i+1;
    }
}


// 1 2 3 
// 4 5 6 
// 7 8 9 

#include <iostream>
using namespace std;

int main() {
   int i = 1;
   int n;
   int count = 1;
   cout << "enter a number"<<endl;
   cin>>n;
   
    while(i <= n){
      int j = 1;
      while(j <= n){
        cout << count<<" "; 
        count += 1;
        j = j+1;      
      }
      cout << endl;
      i = i+1;
   }
}


// 1
// 23
// 456
// 78910

#include <iostream>
using namespace std;

int main() {
   int row = 1;
   int n;
   int count = 1;
   cout << "enter a number"<<endl;
   cin>>n;
   
    while(row <= n){
      int col = 1;
      while(col <= row){
        cout << count;
        col = col+1;      
        count += 1;
          
      }
      cout << endl;
      row = row+1;
    }
}


// 1
// 12
// 123
// 1234
// 12345
// 123456



#include <iostream>
using namespace std;

int main() {
   int row = 1;
   int n;
   cout << "enter a number"<<endl;
   cin>>n;
   
    while(row <= n){
      int col = 1;
      while(col <= row){
        cout <<col;
        col = col+1;      
      }
      cout << endl;
      row = row+1;
    }
}

// 1
// 22
// 333
// 4444
// 55555
// 666666


#include <iostream>
using namespace std;

int main() {
   int row = 1;
   int n;
   cout << "enter a number"<<endl;
   cin>>n;
   
   while(row <= n){
      int col = 1;
      while(col <= row){
        cout << row;
        col = col+1;      
      }
      cout << endl;
      row = row+1;
   }
}




// 1
// 23
// 345
// 4567
// 56789
// 67891011

#include <iostream>
using namespace std;

int main() {
   int row = 1;
   int n;
   cout << "enter a number"<<endl;
   cin>>n;
   
    while(row <= n){
      int col = 1;
      int count = row;    
      while(col <= row){
        cout << count;
        col = col+1;      
        count = count+1;
      }
      cout << endl;
      row = row+1;
   }
}


// 1
// 21
// 321
// 4321


#include <iostream>
using namespace std;

int main() {
   int row = 1;
   int n;
   cout << "enter a number"<<endl;
   cin>>n;
   
   while(row <= n){
      int col = 1;
      while(col <= row){
        cout << (row-col+1);
        col = col+1;      
      }
      cout << endl;
      row = row+1;
   }
}

