//
// Copyright 2024
//

#ifndef FOODITEM_H
#define FOODITEM_H

#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

class FoodItem {
public:
    // Declare default constructor without providing its definition
    FoodItem();

    // Declare second constructor with parameters without providing its definition
    FoodItem(string name, double fat, double carbs, double protein);

    string GetName();

    double GetFat();

    double GetCarbs();

    double GetProtein();

    double GetCalories(double numServings);

    void PrintInfo();

private:
    string name;
    double fat;
    double carbs;
    double protein;
};


#endif //FOODITEM_H
