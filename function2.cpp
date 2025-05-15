#include <iostream>

using namespace std;


// int digitSum(int n){

//   int i =0;
//   int sumOfAllVAlue=0;
//   while (n>0) {
//    int lastDig =n%10;
//    n /=10;
//    sumOfAllVAlue+=lastDig;
//   }
//   return sumOfAllVAlue


// }



// int main(){
  
//     return 0;
// }



int dectoBinary(int decNUM){
   int ans =0 , power=1;
  
   while (decNUM>0) {
  int rmainder =decNUM%2;
    decNUM /=2;
    ans +=(rmainder * power);
    power *=10;
   }
return ans;

}

int main()
{
    cout<<"enter your num that you convart to banary "<<endl;
    int x;
    cin>>x;

  cout<<dectoBinary(x)<<endl;
    return 0;
}

