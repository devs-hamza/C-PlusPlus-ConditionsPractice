// Student Information Menu
#include <iostream>
using namespace std;
int main(){int choice;string name="Ali";int rollNo=25,marks=85;cout<<"===== Student Information =====\n1. Display Name\n2. Display Roll Number\n3. Display Marks";cout<<"\nEnter your choice: ";cin>>choice;switch(choice){case 1:cout<<"Name = "<<name;break;case 2:cout<<"Roll Number = "<<rollNo;break;case 3:cout<<"Marks = "<<marks;break;default:cout<<"Invalid choice";}return 0;}