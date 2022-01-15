#include<iostream>
#include<string>
using namespace std;
class AbstractDayMeal{
    virtual void AskForMoreMeals()=0;

};
class DayMeal:AbstractDayMeal{
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
              if(Munitprice>-10)
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
//Abstracted method
void AskForMoreMeals()
{
    //If statement to validate the Unit price in the Day Meal class
    if(Munitprice<200)
        cout<<"You are regular Customer"<<endl;
    else
        cout<<"You are our premium customer"<<endl;
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
//Using the getters and setters
fourthdaymeal.AskforAmeal();
firstdaymeal.setMunitprice(4);
cout<<"The First Order Meal Price has changed to "<<firstdaymeal.getMunitprice()<<"Kshs."<<endl;
//objects with abstracted dated
firstdaymeal.AskForMoreMeals();
seconddaymeal.AskForMoreMeals();
thirddaymeal.AskForMoreMeals();
fourthdaymeal.AskForMoreMeals();

}
