#include <iostream>
#include <vector>
#include <string>
#include "Nutrition_Tracker.h"

using namespace std;

int main(){
    vector<FoodItem> foodList;
    int input;
    double maxEnergy = 2000;
    
    
    FoodItem totalEnergy("Total Name", 0, 0, 0, 0, 0);

    foodList.push_back(FoodItem("Apple", 95, 20, 0.5, 19, 2));
    foodList.push_back(FoodItem("Pizza", 285, 10.4, 12.2, 3.8, 640));
    foodList.push_back(FoodItem("Steak", 679, 0, 48, 62, 450));
    foodList.push_back(FoodItem("Banana", 110, 0, 20, 39, 600));
    foodList.push_back(FoodItem("Strawberry", 100, 45, 34, 23, 400));
    foodList.push_back(FoodItem("Cheese Burger", 500, 40, 30, 90, 670));
    foodList.push_back(FoodItem("Coke", 200, 20, 40, 40, 350));
    foodList.push_back(FoodItem("Cake", 100, 20, 0, 30, 600));
    foodList.push_back(FoodItem("Chipotle Burrito", 1100, 40, 4, 0, 380));
    foodList.push_back(FoodItem("Wings", 100, 20, 30, 0, 450));


    while(input != foodList.size()+1){
        FoodItem::printList(foodList);
        
        cin >>input;
        if((input <= foodList.size()+1) && (input > 0)){
                for(int i = 0; i < foodList.size(); i++){
                    if(i == input -1) 
                    totalEnergy += foodList.at(i);
                }
        }
        else{
            cout << "Invalid input please enter number between 1-11: " << endl;
            cout << endl;
            continue;
        }
        
    }//while

    totalEnergy.print();
    
    if(totalEnergy.getEnergy() > maxEnergy){
        cout << "***Warning you have exceeded the average daily calorie intake for the the average adult***" << endl;
    }

    
    return 0;
}