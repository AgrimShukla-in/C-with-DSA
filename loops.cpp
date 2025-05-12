#include <iostream>
using namespace std;

int main () {
    int n;
    cout<<"enter your number: "<<endl;
    cin>>n;
    if (n>=18){
        cout<<"you are adult :" <<n<<endl;

    }else{
        cout<<"you are not adult :" <<n<<endl;
    }
    return 0;

    
}

int main(){
    int oddOREven;
    cout<<"enter your number: "<<endl;
    cin>>oddOREven;
    if(oddOREven%2==0){
        cout<<"this is even number"<<endl;
    }else{
        cout<<"this is odd number"<<endl;
    }
    return 0;
}



int main() {
    int a, c;
    char b;

    cout << "Enter your first number: " << endl;
    cin >> a;

    cout << "Enter an operator (+, -, *, /): " << endl;
    cin >> b;

    cout << "Enter your second number: " << endl;
    cin >> c;

    if (b == '+') {
        cout << "Sum is " << a + c << endl;
    } else if (b == '-') {
        cout << "Subtraction is " << a - c << endl;
    } else if (b == '*') {
        cout << "Multiplication is " << a * c << endl;
    } else if (b == '/') {
        if (c != 0) {
            cout << "Division is " << a / c << endl;
        } else {
            cout << "Error: Division by zero is not allowed." << endl;
        }
    } else {
        cout << "Invalid operator" << endl;
    }

    return 0;
}


int main(){
    char ch;
    cout<<"enter your character: "<<endl;
    cin>>ch;

    if(ch>='a'&&ch<='z'){
        cout<<"this is lower case"<<endl;

    }else{
        cout<<"this is upper case"<<endl;
    }



    return 0;
}


int main(){
    char cr;
    cout<<"enter your character: "<<endl;
    cin>>cr;

    if(cr>=65&&cr<=90){
        cout<<"this is upper case"<<endl;
    }else if(cr>=97&&cr<=122){
        cout<<"this is lower case"<<endl;
    }
    return 0;
}


// loops class start 


int main (){
    int i;
    cout<<"enter your number: "<<endl;
    cin>>i;
    int y=0;

    while (y<=i)
    {
    cout<< "hello"<<y<<endl;
    y++;
    };
    return 0;
}

int main(){
    int i;
    cout<<"enter your number: "<<endl;
    cin>>i;




    for(int y=0;y<=i;y++){
        cout<<"hello   :  "<<y<<endl;
    }
    return 0;
}


int main(){
    int i;
    cout<<"enter your number: "<<endl;
    cin>>i;
    int count =0;
    for (int y=1 ; y<=i ; y++){
        count +=y;
        cout<<count<<endl;
    }
    cout <<count << "count valu all"<<endl;
    return 0;
}

int main(){
    int i;
    cout<<"enter your number: "<<endl;
    cin>>i;
    int count =0;
    int y=1;
    while (y<=i)
    {
        count +=y;
        y++;
    }
    cout<<count<<endl;
    

}
int main(){
    int i;
    int sun =0;
    cout<<"inter yor number that  you caculate odd number "<<endl;
    cin>>i;
    for (int y= 0 ; y<=i ; y++){
        if(y %2 != 0){
            sun +=y;
        };

    }
    cout<< "the sum value is : "<<sun<<endl;
    return 0;

}


int main (){
    int n =10;
    int i = 1;
    do {
        cout<<i<<"do somthig "<<endl;
        i++;
    }while (i<=n);
    return 0;


}

int main (){
    int checkPrimeNoVariable;
    cout<<"check Your Prime no : " <<endl;
    cin>>checkPrimeNoVariable;
    bool checkPrimeNo =true;


    for(int y=2; y*y<=checkPrimeNoVariable ; y++ ){
        cout<<y<<endl;
     if (checkPrimeNoVariable%y==0){
        checkPrimeNo=false;
        break;
     }
    }
     if (checkPrimeNo){
      cout<<"tis is a prime no :"<<checkPrimeNoVariable<<endl;
    }else{
      cout<<"tis is not a prime no :"<<checkPrimeNoVariable<<endl;
    }
    
    
    
}

int main(){
    int firtLineSter;
    int secendLineSte;

    cout<<"enter horizontel line amunt "<<endl;
    cin>>firtLineSter;
     cout<<"enter verticale line amunt "<<endl;
    cin>>secendLineSte;

    for(int i =1; i<=firtLineSter ; i++){
         for(int y =1; y<=secendLineSte ; y++){
            cout<<"*";
         }
         cout<<endl;
    }
}
