#include <iostream>
using namespace std;
 int main()
 {
         char name[100] ;
         int i, j, e;
         cout<<"Enter the name : ";
         cin>>name;
         for(i=0; i<8; i++)
            { j=8; // 'j' is for row number
         do
            { cout<<" "; j--; }
         while(j>i);
         for(e=0; e<(i*2+1); e++) //'e' refer to name
            {
                cout<<name[e];
            }
            cout<<endl;
            }
            return 0;
 }
