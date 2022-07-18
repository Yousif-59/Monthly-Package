//Yousif Al Saadi
//y_a78@txstate.edu
//Lab 4
//09-27-2021


#include <iostream>
#include <iomanip>
using namespace std;
int main(){   
   char user_choice,sports_choice;  //user's choice    
   double price; //price of monthly package   
    // Ask the user for their plan choice:    
    cout << "Enter the package name you wish to purchase: ";    
    cin >> user_choice;    
     switch(user_choice){
       case 'A':
       case 'a':
          cout << "Would you like to purchase the sports plan? (Y/N)";
          cin >> sports_choice;
          switch(sports_choice)
          {
            case 'y':
            case 'Y':
              price =  19.99 + 9.99;
              break;
            case 'n':
            case 'N':
              price = 19.99;
              break; 
            default:
              cout<<"Invalid choice";
              exit(0);
          }
          
          break;
     
        case 'B':
        case 'b':
          cout << "Would you like to purchase the sports plan? (Y/N)" << endl;
          cin >> sports_choice;
          switch(sports_choice)
          {
            case 'y':
            case 'Y':
              price =  39.99 + 9.99;
              break;
            case 'n':
            case 'N':
              price = 39.99;
              break; 
            default:
              cout<<"Invalid choice";
              exit(0);
          }
        
          break;

        case 'C':
        case 'c':
          price = 45.99;
          break;
        


        default: 
          cout << "Invalid input, terminating the program" << endl;
          exit(0);
          break;
        }
          
     cout << "The total price of your monthly package is $" << price << endl;    // Exit the program:   
      return 0;
      }