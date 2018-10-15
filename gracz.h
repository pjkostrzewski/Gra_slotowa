#pragma once
#include "plansza.h"
#include <fstream>

class Gracz
{
    std::string path;
    std::fstream file;
public:
    long gamesCount; // ilosc symulacji
    long startCredit; // kredyt poczatkowy
    int oneGameBudget; // stawka za gre

    long budgetNow;
    long wonMoney; // suma wygranych: 1884600
    long wonMoneyByFreeSpins;

    int x3Scatter;
    int x4Scatter;
    int x5Scatter;
    int biggestWin; // najwyzsza wygrana
    int freeSpinsActual; // dynamnicznie wykorzystane potem
    int stracone;

    int HFnormal;
    int HFfree;
    long normalGames;
    long freeGames;

    Gracz(long _gamesCount = 1000, long _startCredit = 20000, int _oneGamebudget = 20) :
        gamesCount(_gamesCount), startCredit(_startCredit), oneGameBudget(_oneGamebudget)
    {
        budgetNow = startCredit;
        wonMoney = 0;
        wonMoneyByFreeSpins = 0;
        x3Scatter = 0;
        x4Scatter = 0;
        x5Scatter = 0;
        biggestWin = 0;
        freeSpinsActual = 0;
        HFnormal = 0;
        HFfree = 0;
        normalGames=0;
        freeGames=0;
        path ="/home/spod/Pulpit/results.txt";

    }

    void ModifyBudget(int value);
    void Enter();
    void Display();
    void openFile();
    void sendToFile(const long & value);
    void closeFile();
};

