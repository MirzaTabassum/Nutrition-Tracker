#ifndef NUTRITION_TRACKER_H
#define NUTRITION_TRACKER_H

#include <string>
#include <vector>

using namespace std;

class FoodItem{
    public:
    FoodItem(string name, double TotEnergy, double TotFats, double TotProtein, double TotSugars, double TotSodium);
    static void printList(vector<FoodItem> foodList);
    void operator +=(const FoodItem& f);
    void print();
    string getName() const;
    double getEnergy() const;
    double getSugars() const;
    double getFats() const;
    double getProtein() const;
    double getSodium() const;

    private:
    string name;
    double TotEnergy;
    double TotSugars;
    double TotFats;
    double TotProtein;
    double TotSodium;

};

#endif
