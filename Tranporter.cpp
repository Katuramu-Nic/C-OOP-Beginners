#include<iostream>
#include<string>
using namespace std;
class Transport{
	public:
	string Name;
	int Seat_No;
	int Distance;
	int Fare;
void TransportReceipt()
{
cout<<"Your Name:"<<Name<<endl;
cout<<"Seat No:"<<Seat_No<<endl;
cout<<"Millage:"<<Distance<<endl;
cout<<"Tranport Fare: "<<Fare<<endl;	
}
Transport(string name, int seat_No, int distance, int fare)
{
Name = name;
Seat_No = seat_No;
Distance = distance;
Fare = fare;	
}
};
int main()
{
	Transport transport1();
	transport.Name="Katuramu Nicholus";
}
