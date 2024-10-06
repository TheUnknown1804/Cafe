#include <iostream>

using namespace std;

int main()
{
    double Balance=60000;
    double Deposit;
    double Withdrawl;
    double Balancee;
    int Choice;
    int Pin;
    string Choices;
    cout << "Welcome to ________ Bank. Enter your pin:"<< endl;
    cin >> Pin;

        if(Pin==12345)
    {
    cout << "Enter the following choices to proceed with you transaction" << endl;
    cout << "1 : Check Bank Balance." << endl;
    cout << "2 : Deposit." << endl;
    cout << "3 : Withdrawl." << endl;
    cout << "4 : Report Lost or Stolen Card." << endl;
    cout << "5 : Bank Statement." << endl;
    cin>>Choice;

    switch(Choice)
    {
    case 1:
        cout<<Balance<< endl;
        cout<<"Thank you for your service"<< endl;
        break;
    case 2:
        cout<<"Enter the Deposit Amount."<< endl;
        cin>>Deposit;
        Balancee=Balance+Deposit;
        cout<<"Thank you for your transaction.You have deposited R"<<Deposit<<" to your account."<< endl;
        cout<<"Your balance is R"<<Balancee<< endl;
        break;
    case 3:
        cout<<"Enter the Amount for Withdrawl"<< endl;
        cin>>Withdrawl;
        Balancee=Balance-Withdrawl;
        cout<<"Thank you for transaction. You have successfully withdrawn R"<<Withdrawl<< "from you account."<< endl;
        cout<<"your Balance is :R"<<Balancee<< endl;
        break;
    case 4:
        cout<<"Do you want to report a Lost or stolen Card"<< endl;
        cout<<"Please type Yes or No."<<endl;
        cin>>Choices;
        if(Choices=="Yes")
        {
            cout<<"Do you want to block card :"<< endl;
            cout<<"1.XXXXXXXXXXXXX7878"<< endl;
            cout<<"2.XXXXXXXXXXXXX7459"<< endl;
            cin>>Choice;
            cout<<"Thank you. Your Card has been blocked."<< endl;
        }
        else if (Choices=="No")
        {
            cout<<"Thank you for transaction.Enjoy your day."<< endl;
        }
        break;
    case 5:
        cout<<"Your request has been approved and will be your Bank Statement will be sent to your email."<<endl;
        break;
    }
    }
    else
    {cout<<"Sorry the pin you have entered is wrong Goodbye!!"<< endl;
    }
    return 0;
}
