#include <iostream>

using namespace std;

int main(){

  int a=4 ;
  int b =1;

  for(int i =1; i<a ; i++){
    for (int y = 1 ; y< a ; y++){
        cout<<b<<" ";
        b++;
    };
    cout<<endl;
  }


    return 0;
}


int main (){
  
    int n =4;
    char a ='A';

    for (int i =0; i<n;i++){
        for(int y = 0; y <n ; y++){
            cout<<a;
            a +=1;
        };
        cout<<endl;

    }



    return 0;
}

int main (){
    int a =15;


for (int i =0; i<a ; i++){
    
    for (int y=0; y< i+1 ; y++){
        cout<<'*';
    };
    cout<<endl;
}

    return 0;
}


int main()
{
    int a =6;


    for (int i = 0; i < a; i++)
    {
        for (int y = 0; y < i+1; y++)
        {
            cout<<i+1;
            
        };
     cout<<endl;
        
    }
    



    return 0;
}


int main()
{
    int a =6;
    char b ='A';
   
    for (int i = 0; i < a; i++)
    {
        for (int y = 0; y < i+1; y++)
        {
            cout<<b;
            
        };
        b +=1;
     cout<<endl;
        
    }
    



    return 0;
}

int main()
{
int a=6;

for (int i = 0; i < a; i++)
{
    int count=0;
    for (int y = 0; y < i+1; y++)
    {
      cout<<count+1;
      count++;
    };
    cout<<endl;

    
}


    return 0;
}

