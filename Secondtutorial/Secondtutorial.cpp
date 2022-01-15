#include<iostream>
#include<string>
using namespace std;
class DayMeal{
      public:
string Mfood;
int Mquantity;
int Munitprice;
string Mcustomer;
int Mtotal;
void AskforAmeal()
{
    cout<<"Customer Name: "<<Mcustomer<<endl;
    cout<<"Food Ordered: "<<Mfood<<endl;
    cout<<"Unit Price: "<<Munitprice<<endl;
    cout<<"Quantity: "<<Mquantity<<endl;
    Mtotal = Mquantity * Munitprice;
    cout<<"Total Amount: Kshs."<<Mtotal;
}
/*The Day Meal Constructor method*/
DayMeal(string mfood, int mquantity, int munitprice, string mcustomer)
{
    Mfood = mfood;
    Mquantity = mquantity;
    Munitprice = munitprice;
    Mcustomer = mcustomer;
}

};
int main()
{
DayMeal firstdaymeal = DayMeal("Rice & Beef",2,400,"Katuramu Nicholus");
firstdaymeal.AskforAmeal();


DayMeal seconddaymeal = DayMeal("Ugali & Beef",4,520,"Kipcaren Marvin");
seconddaymeal.AskforAmeal();

DayMeal thirddaymeal = DayMeal("Sweet Potatoes & Beef",3,400,"Denis Mungata");
thirddaymeal.AskforAmeal();

DayMeal fourthdaymeal = DayMeal("Yams & Beef",6,200,"Peter Waweru");
fourthdaymeal.AskforAmeal();

}
