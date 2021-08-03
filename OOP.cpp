#include<iostream>
#include<string>
using namespace std;
class Ebyokunywa{

virtual void AskforAcompanyment()=0;
	
};
class Ebyokurya:Ebyokunywa{
 private:
	string Statch;
	string Vendor;
	int Contact;
	string Name; 
 public:
 	void setStatch(string statch)
 	{
 		Statch = statch;
	 }
 string getStatch()
 {
 	return Statch;
 }
  	void setVendor(string vendor)
 	{
 		Vendor = vendor;
	 }
 string getVendor()
 {
 	return Vendor;
 }
  	void setContact(int contact)
 	{
 		Contact = contact;
	 }
 int getContact()
 {
 	return Contact;
 }
  	void setName(string name)
 	{
 		Name = name;
	 }
 string getName()
 {
 	return Name;
 }
 void IntroduceYourself()
 {
 	cout<<Name<<" ,You are an amazing farmer at "<<Vendor<<endl;
 	cout<<"Your Contact Number Is "<<Contact<<endl;
 	cout<<"Do You Eat Statch "<<Statch<<endl;
 }
Ebyokurya(string statch, string vendor, int contact, string name)
{
	Statch = statch;
	Vendor = vendor;
	Contact = contact;
	Name = name; 
}
void AskforAcompanyment(){
	if(Contact<300)
	cout<<Name<<", You do not Qualify for the Offer"<<endl;
	else
	cout<<Name<<" , You Qualify"<<endl;
}
};
class Starter:Ebyokurya{
	public:
	string Salaads;
	Starter(string statch, string vendor, int contact, string name, string salaads)
	:Ebyokurya(statch, vendor, contact, name)
	{
		Salaads = salaads;
	}
	void StarterEats()
	{
		cout<<getName()<<", "<<getStatch()<<" you eat statch and "<<"you work at "<<getVendor()<<" you ate "<<Salaads<<" as your Starter."<<endl;
	}
};
int main()
{
	Ebyokurya ebyokurya1 = Ebyokurya("Yes", "Mbagathy Market",996,"Katuramu");
		ebyokurya1.IntroduceYourself();	
	Ebyokurya ebyokurya2 = Ebyokurya("No", "Uhuru Market",296,"Karanja");
		ebyokurya2.IntroduceYourself();	
	Ebyokurya ebyokurya3 = Ebyokurya("Yes", "Magara Market",496,"Ndaraga");
		ebyokurya3.IntroduceYourself();	
	Ebyokurya ebyokurya5 = Ebyokurya("No", "Mbucu Market",996,"Mutatu");
		ebyokurya5.IntroduceYourself();	
	ebyokurya1.setName("Mbaluhira");
	cout<<"Your Other Name Is, "<<ebyokurya1.getName()<<endl;
	ebyokurya1.AskforAcompanyment();
	ebyokurya2.AskforAcompanyment();
	Starter starter1 = Starter("Yes", "Mukuroine Market",784575,"Balijwaha","Kachumbari");
	starter1.StarterEats();
}
