#include<iostream>
#include<string>
using namespace std;
class AbstractPassenger{
virtual void TaxiTransport()=0;

};
class Transporter:AbstractPassenger{
    public:
string Passenger_Name;
string Distination;
int Seat_No;
int Distance;
int Unit_Price;
int Total_Amount;


void Pasengereciept()
{
    cout<<"Passenger Name: "<<Passenger_Name<<endl;
    cout<<"Dastination: "<<Distination<<endl;
    cout<<"Dastination: "<<Distance<<endl;
    cout<<"Seat No. "<<Seat_No<<endl;
    cout<<"Unit Price: "<<Unit_Price<<endl;
    Total_Amount =  Distance * Unit_Price;

    cout<<"Total Amount:------"<<Total_Amount<<"Kshs."<<endl;
}
Transporter(string passenger, string distination, int seat_no, int distance, int unit_price)
{
    Passenger_Name = passenger;
    Distination = distination;
    Seat_No = seat_no;
    Distance = distance;
    Unit_Price = unit_price;
}
void TaxiTransport()
{
if(Total_Amount<=58800)
{
    cout<<Passenger_Name<<" You are Within Actual Amount Transport Fare In Kenya"<<endl;
}
else
{
    cout<<Passenger_Name<<" You have been Scammed"<<endl;
}
}
};
class BodaBoda:Transporter
{
    public:
    int Bamount;
BodaBoda(string passenger, string distination, int seat_no, int distance, int unit_price, int bamount)
:Transporter(passenger,distination, seat_no, distance, unit_price)
{
    Bamount = bamount;
}
void BodaReceipt()
    {
        cout<<Passenger_Name<<"You also Borded A Boda Boda"<<endl;
        cout<<"Boda Boda Fees: "<<Bamount<<endl;
    }
};
int main()
{
Transporter firstreceipt = Transporter("Katuramu Nicholus", "Fort-Portal", 804, 140, 420);
firstreceipt.Pasengereciept();
Transporter secondreceipt = Transporter("Peter Waweru", "Nyandarwa", 404, 130, 460);
secondreceipt.Pasengereciept();
Transporter thirdreceipt = Transporter("Winnis Malany", "Kakamega", 604, 110, 450);
thirdreceipt.Pasengereciept();
Transporter fourthreceipt = Transporter("Muraithe Denis", "Nyeri", 504, 130, 460);
fourthreceipt.Pasengereciept();
//Abstract Objects
firstreceipt.TaxiTransport();
secondreceipt.TaxiTransport();
thirdreceipt.TaxiTransport();
fourthreceipt.TaxiTransport();
//This is for the inherited Object
BodaBoda firstbodareceipt = BodaBoda("Muraithe Denis", "Nyeri", 504, 130, 460, 4000);
firstbodareceipt.BodaReceipt();


}





