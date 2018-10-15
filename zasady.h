#pragma once
#include "boolplansza.h"


class Zasady
{
    std::vector<BoolPlansza> winCombinations;
public:
    std::vector<std::vector<int>> machine; //500 symboli w maszynie
    std::vector<std::vector<int>> symbols = {{4,8,20,0,0,0},{4,8,20,0,0,0},{5,10,25,0,0,0},{5,10,25,0,0,0},
                                             {8,15,40,0,0,0},{8,15,50,0,0,0},{10,20,75,0,0,0},{10,25,100,0,0,0},
                                             {15,30,200,0,0,0}}; // <--- WILD
    Zasady();
    void FillMachine(); //zapelnianie maszyny
    std::vector<std::vector<int>> returnRandom(const int & freespin); // zwroc plansze wylosowaną z maszyny
    BoolPlansza returnCombination(int value);
    void DisplayTwo(long startCredit, long gameCount); //wyswietlanie
};

