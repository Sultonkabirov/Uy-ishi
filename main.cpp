#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    system("cls");

    string name,surname,phonenumber;
    string password,newpassword;
    int number;
    cout << "\033[36m" << "Ismingizni kiriting: " << "\033[0m";
    cin>>name;
    cout<<"\033[34m"<<"Familiyangizni kiriting: "<<"\033[0m";
    cin>>surname;
    cout<<"\033[34m"<<"Raqamingiz kiriting:"<<"\033[0m";
    cin>>phonenumber;
    system("cls");
    cout << "\033[34m" << "Parolingizni kiriting:" << "\033[0m";cin>>password;
    cout << "\033[33m" << "Parolingizni qayta kiriting:" << "\033[0m";cin>>newpassword;
    if(newpassword==password) {
       cout<<"1.Submit\t";
        cout<<"2.Qaytish";
  cout << "\033[34m" << "\nTanlovni kiriting:" << "\033[0m";cin>>number;
        switch (number) {
            case 1:cout<<" ";  break;
            case 2: cout << "\033[31m" << "Dastur tugatildi!!" << "\033[0m" ; break;
            default:  cout << "\033[31m" << "Bunday tanlov yuq!!" << "\033[0m" ;
        }
    }
    else cout << "\033[35m" << "Kodni qayta kiritishda hatolik" << "\033[0m" << endl;

    return 0;
}





