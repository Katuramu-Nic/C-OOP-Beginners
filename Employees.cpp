#include<iostream>
#include<string>
using namespace std;
class AbstractEmployee{
virtual void AskForPromotion()=0;
};
class Employees:AbstractEmployee{
    public:
string Ename;
int Hourly_rate;
int Hours_worked;
int Monthly_salary;
int Annual_salary;
//using getters and setter/encaspsulation
void setEname(string ename)
{
    Ename = ename;
}
string getEname()
{
    return Ename;
}
void setHourly_rate(int hourly_rate)
{
    Hourly_rate = hourly_rate;
}
int getHourly_rate()
{

    return Hourly_rate;
}
// Hours_worked
void setHours_worked(int hours_worked)
{
    Hours_worked = hours_worked;
}
int getHours_worked()
{
    return Hours_worked;
}
void EmployeesPayRoll()
{
cout<<"You Name Is: "<<Ename<<endl;
cout<<"You Hourly Rate Is: "<<Hours_worked<<endl;
Monthly_salary = Hourly_rate * Hours_worked;
cout<<"Your Monthly Salary Is: "<<Monthly_salary<<endl;
Annual_salary = Monthly_salary *12;
cout<<"Your Gross Salary Is: "<<Annual_salary<<endl;
}
Employees(string ename, int hourly_rate, int hours_worked)
{
    Ename = ename;
    Hourly_rate = hourly_rate;
    Hours_worked = hours_worked;
}
void AskForPromotion()
{
    if(Annual_salary>1500)
    {
        cout<<"You are a D Class Employee"<<endl;
    }
    else
    {
        cout<<"Perfom Well Next Time For Promotion"<<endl;
    }
}
};
int main()
{
    //Employee Objects
Employees firstemployee = Employees("Katuramu Nicholus", 12, 10);
firstemployee.EmployeesPayRoll();
Employees secondemployee = Employees("Peter Waweru",10,50);
secondemployee.EmployeesPayRoll();
Employees thirdemployee = Employees("Denis Murathe", 8,12);
thirdemployee.EmployeesPayRoll();
Employees fourthemployee = Employees("Winnie Kinyaga", 6,12);
//Abstracted Objects
fourthemployee.EmployeesPayRoll();
firstemployee.AskForPromotion();
secondemployee.AskForPromotion();
thirdemployee.AskForPromotion();
fourthemployee.AskForPromotion();
firstemployee.setEname("Katuramu Martin");
}
