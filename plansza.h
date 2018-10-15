#pragma once
#include <vector>
#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <numeric>
//#include "zasady.h"


class Plansza
{
public:
    std::vector<std::vector<int>> plansza;
    Plansza();
    Plansza(std::vector<int> a, std::vector<int> b, std::vector<int> c, std::vector<int> d);
    void Display();
    void Random();
    //void RandomTwo(Zasady & rules);
    int Win();
    std::vector<std::vector<bool>> toBoolBoard(int value);
    std::vector<std::vector<bool>> wildBoard();
    int numberOfScatters();
    int RandomScatters();
    void AddScatters(int value);
    void fill(const std::vector<std::vector<int>> & temp);

};
