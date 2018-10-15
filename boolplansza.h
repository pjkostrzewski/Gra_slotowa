#pragma once
#include <vector>
#include <iostream>
#include "plansza.h"

class BoolPlansza
{
private:
    std::vector<std::vector<bool>> boolPlansza;
public:
    BoolPlansza();
    BoolPlansza(std::vector<std::vector<bool>> other);
    BoolPlansza(std::vector<bool> a, std::vector<bool> b, std::vector<bool> c, std::vector<bool> d);
    void Display();
    int dlugoscLinii();

    friend bool Compare(BoolPlansza  one, const BoolPlansza & two, const int rzedy);

};
