#include<iostream>
#include<string>
using namespace std;

class DayMeal{
//Getters and setters, encapsulated data
    private:
    string Mfood;
int Mquantity;
int Munitprice;
string Mcustomer;
int Mtotal;
      public:
          void setMfood(string mfood)
          {
              Mfood = mfood;
          }
          string getMfood()
          {
              return Mfood;
          }

          void setMquantity(int mquantity)
          {
              Mquantity = mquantity;
          }
          int getMquantity()
          {
              return Mquantity;
          }

          void setMunitprice(int munitprice)
          {
              Munitprice = munitprice;
          }
          int getMunitprice()
          {
              return Munitprice;
          }
//Output methods
void AskforAmeal()
{
    cout<<"Customer Name: "<<Mcustomer<<endl;
    cout<<"Food Ordered: "<<Mfood<<endl;
    cout<<"Unit Price: "<<Munitprice<<endl;
    cout<<"Quantity: "<<Mquantity<<endl;
    Mtotal = Mquantity * Munitprice;
    cout<<"Total Amount: Kshs."<<Mtotal<<endl;
}
/*The Day Meal Constructor method*/
DayMeal(string mfood, int mquantity, int munitprice, string mcustomer)
{
    //Initializing variables in the Meals constructor method
    Mfood = mfood;
    Mquantity = mquantity;
    Munitprice = munitprice;
    Mcustomer = mcustomer;
}

};
int main()
{
    //First Object
DayMeal firstdaymeal = DayMeal("Rice & Beef",2,400,"Katuramu Nicholus");
firstdaymeal.AskforAmeal();
//Second Object
DayMeal seconddaymeal = DayMeal("Ugali & Beef",4,520,"Kipcaren Marvin");
seconddaymeal.AskforAmeal();
//Third Object
DayMeal thirddaymeal = DayMeal("Sweet Potatoes & Beef",3,400,"Denis Mungata");
thirddaymeal.AskforAmeal();
//Fourth Object
DayMeal fourthdaymeal = DayMeal("Yams & Beef",6,200,"Peter Waweru");
fourthdaymeal.AskforAmeal();
firstdaymeal.setMunitprice(40);
cout<<"The First Order Meal Price has changed to "<<firstdaymeal.getMunitprice()<<"Kshs.";
}
