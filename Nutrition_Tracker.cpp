#include <iostream>
#include "Nutrition_Tracker.h"
#include <string>
#include <vector>

using namespace std;

FoodItem::FoodItem(string name, double TotEnergy, double TotFats, double TotProtein, double TotSugars, double TotSodium){
        this-> name = name;
        this-> TotEnergy = TotEnergy;
        this-> TotFats = TotFats;
        this-> TotProtein = TotProtein;
        this-> TotSugars = TotSugars;
        this-> TotSodium = TotSodium;
}
void FoodItem::print(){
        cout << "Total Nutrition Facts: " << endl;
        cout << "***********************" << endl;
        cout << "Calories: " << TotEnergy << endl;
        cout << "Total Fats: " << TotFats << " (g)" <<  endl;
        cout << "Total Protein: " << TotProtein << " (g)" << endl;
        cout << "Total Sugars: " << TotSugars << " (g)" << endl;
        cout << "Total Sodium: " << TotSodium << " (mg)" << endl;

}

void FoodItem::printList(vector<FoodItem> foodList){
        cout << "Please select foods from list below: " << endl;
        for(int i = 0; i < foodList.size(); i++){
                cout << i+1 << ". " ;
                cout << foodList.at(i).getName() << endl;
        } 
        cout << "11. Finished choosing food items." << endl;
}

void FoodItem::operator +=(const FoodItem& f){
        this-> name += f.name;
        this-> TotEnergy += f.TotEnergy;
        this-> TotFats += f.TotFats;
        this-> TotProtein += f.TotProtein;
        this-> TotSugars += f.TotSugars;
        this-> TotSodium += f.TotSodium;
        
}

double FoodItem::getEnergy() const{
        return TotEnergy;
}
string FoodItem::getName() const{ 
        return name;
}
    
double FoodItem::getSugars() const{
        return TotSugars;
}
    
double FoodItem::getFats() const{
        return TotFats;
}
    
double FoodItem::getProtein() const {
        return TotProtein;
}
    
double FoodItem::getSodium() const{
        return TotSodium; 
}