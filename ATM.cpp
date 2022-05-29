#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
class ATM
{
private :
    string username ;
    int PIN;
    long long balance;
    string mobileNumber;
public :
    ATM()
    {
        username = "NO NAME";
        PIN = 0;
        balance = 0;
        mobileNumber = "NO Mobile number storied ";
    }
    void setData(string user , int pass , long long myCash , string mobile)
    {
        username = user;
        PIN = pass;
        balance = myCash;
        mobileNumber = mobile;
    }
    void getData()
    {
        cout<<"\nUser name is      :   "<<username;
        cout<<"\nYour PIN  is      :   "<<PIN;
        cout<<"\nUYour balance  is :   "<<balance;
        cout<<"\nMobile number  is :   "<<mobileNumber;
    }
    void setUserName()
        {
           getline(cin ,username);
        }

    void setPIN()
        {

            cin>>PIN;
        }

    void setBalance()
        {
            cin>>balance;
        }
    void setMobile()
        {
            cin>>mobileNumber;
        }

    void addBalance()
        {
            int money;
            cout<<"\nHow much money do you want to add     :  ";
            cin>>money;
            balance += money;
            cout<<"\nYou add money successfully !  ";
        }
    void getUserName()
        {
           cout<<"\nUser name is      :   "<<username;
        }

     void getPIN()
        {
            cout<<"\nYour PIN  is      :   "<<PIN;
        }
     string getMobileNumber()
        {
            return mobileNumber;
        }
     void getMyBalance()
        {
           cout<<"\nYour balance  is :   "<<balance;
        }

        void options()
        {
            cout<<"\nPress 1 to get all account balance details ";
            cout<<"\nPress 2 to get your PIN ";
            cout<<"\nPress 3 to get your mobile numer ";
            cout<<"\nPress 4 to if you want to know your balance ";
            cout<<"\nPress 5 to update your mobile number ";
             cout<<"\nPress 6 to add to money to your balance ";
        }
};
void welcome();
int main()
{
        ATM user;
        system("cls");
        cout<<"\nEnter your name : ";
        user.setUserName();
        cin.ignore();
        cout<<"\nEnter your PIN : ";
        user.setPIN();
        cout<<"\nEnter your balance  :  ";
        user.setBalance();
        cout<<"\nEnter your mobile number : ";
        user.setMobile();
        cin.ignore();
        welcome();
        int x;
        do
            {
                cin>>x;
                if(x==1)
                    user.getData();
               else if(x==2)
                    user.getPIN();
              else if(x==3)
                   cout<< user.getMobileNumber();
                else if(x==4)
                    user.getMyBalance();
                else if(x==5)
                 {
                     string temp;
                     cout<<"\nEnter Old mobile number :  ";
                     cin>>temp;
                      if(temp==user.getMobileNumber())
                      {
                          cout<<"\nYou Enter Mobile number successfully  ";
                          cout<<"\nEnter the new number :  ";
                          user.setMobile();
                          cout<<"\nYou changed the mobile number successfully ";

                      }
                      else
                          cout<<"\nYou Entered wrong number  try again  ";

                 }
                 else if(x==6)
                 {
                    user.addBalance();
                    user.getMyBalance();
                 }
            }while(1);
}
void welcome()
{
    ATM fun;
    cout<<"\n*****************************************************\n";
    cout<<"Welcome to our ATM , Hello user  ! \n";
    cout<<"You have many options in this program what do you want to make ? \n";
    fun.options();
    cout<<"\n*****************************************************\n\n";
}
