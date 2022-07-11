#include <iostream>
using namespace std;

int main()
{
     float number_1,number_2,result;
     char choice_operator,choice_continue;
     
     do
     {
          system("cls");
          
          cout << "Enter Number : ";
          cin >> number_1;
          cout << "Enter Number : ";
          cin >> number_2;
          
          cout << endl;
          cout << "Select Operator" << endl;
          cout << "A)ddition  (+)" << endl;
          cout << "S)ubtraction  (-)" << endl;
          cout << "M)ultiplication  (*)" << endl;
          cout << "D)ivision (/)" << endl;
          cout << "You Select : ";
          cin >> choice_operator;
          
          cout << endl;
          cout << number_1;
          switch(choice_operator)
          {
            case '+' :                     
            case 'A' :
            case 'a' : cout << " + ";
                             result = number_1 + number_2;
                             break;
            case '-' :           
            case 'S' :
            case 's' : cout << " - ";
                             result = number_1 - number_2;
                             break;
            case '*' :           
            case 'M' :
            case 'm' : cout << " * ";
                              result = number_1 * number_2;
                              break;
            case '/' :
            case 'D' :
            case 'd' : cout << " / ";
                             result = number_1 / number_2;
                             break;
                       
          }
          cout << number_2 << " = " << result << endl << endl;

          cout << "Continue (Y/N) : ";
          cin >> choice_continue;
          
     }
     while(choice_continue == 'Y' || choice_continue == 'y');
     
     cout << endl << "Exit Program...";

     cout << endl << endl;
     system("pause");
 
}