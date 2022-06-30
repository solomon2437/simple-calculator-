#include<iostream>
using namespace std;



int main()
{
 char a;
 double num1, num2;
 double result;



cout << "*************calculator************"<<'\n';
cout << '\n';


//enter num
cout << "enter operator (*, -, +, /) : ";
cin >> a;
cout << '\n';


cout << "enter number #1 : ";
cin >> num1;
cout << '\n';


cout << "enter number #2 : ";
cin >> num2;
cout << '\n';



switch (a) 
{
   
   case '+' :
       result = num1 + num2;
       cout << "result : " << result << '\n';
       cout << '\n';
       break;

    case '-' :
       result = num1 - num2;
       cout << "result : " << result << '\n';
       cout << '\n';
       break;


     case '*' :
       result = num1 * num2;
       cout << "result : " << result << '\n';
       cout << '\n';
       break;


     case '/' :
       result = num1 / num2;
       cout << "result : " << result << '\n';
       cout << '\n';
       break;

     default :
        {      
          cout << "enter valid operator ( +, -, *, /) "<<'\n';
          cout << '\n';
         }

}


  cout << "************************************"<<'\n';
    
 return 0;


}