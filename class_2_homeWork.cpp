#include<iostream>

using namespace std;

// int main(){

//       int n;
//       int y;
//       int z=0;
//       cout<<"enter yor noumber that you want to do divisible"<<endl;
//       cin>>n;
//      cout<<"enter other no "<<endl;
//       cin>>y;

//       for(int i =1; i<=n ; i++){
//         if (i%y==0)
//         {
//            z +=i;
//         };
        
//       }
   
//     cout<<"yor number is : "<<z<<endl;




//     return 0;
// }

int main(){
  int n;
  cout<<"enter your nomber "<<endl;
  cin>>n;
    int factorialNO=1;
      if (n < 0){
        cout<<"this is a  nagetive value tha factorial value only positive no "<<endl;
      }else {
         for(int i =1 ; i<= n ; i++){
          
          factorialNO *=i;
         };
      }
    cout<<"tis is factorial no : "<<factorialNO<<endl;
  return 0;
}