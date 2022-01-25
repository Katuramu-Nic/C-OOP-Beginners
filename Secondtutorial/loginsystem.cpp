#include<iostream>
#include<string>
using namespace std;
class LoginSystem{
    public:
string Username;
string Password;
string FirstName;
string LastName;
string Emailaddress;

void Signup()
{
Username = "Katuramu";
Password = "Jean@123";
    cout<<"Username:"<<endl;
    cin>>Username;
    cout<<"Password:"<<endl;
    cin>>Password;
    cout<<"First Name: "<<endl;
    cin>>FirstName;
    cout<<"Last Name: "<<endl;
    cin>>LastName;
    cout<<"Email Address: "<<endl;
    if (Username=="Katuramu" && Password=="Jean@123")
        cout<<"You are LoggedIn";
    else
    cout<<"Your Username or Password is Wrong"<<endl;
}
LoginSystem(string username, string password, string firstname, string lastname, string emailaddress)
{
    Username = username;
    Password = password;
    FirstName = firstname;
    LastName = lastname;
    Emailaddress = emailaddress;
}
};
int main()
{
LoginSystem loginer = LoginSystem("Katuramu","Jean@123","Katuramu","Nicholus","katuramu.ict@gmail.com");
loginer.Signup();
}
