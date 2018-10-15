
#include "boolplansza.h"

const int rozmiar = 4;

BoolPlansza::BoolPlansza()
{
    boolPlansza.resize(rozmiar);
    for (int i = 0; i < boolPlansza.size(); i++)
    {
        boolPlansza[i] = { false,false,false,false,false };	// { 0,0,0,0,0 }
    }

}

BoolPlansza::BoolPlansza(std::vector<std::vector<bool>> other)
{
    boolPlansza = other;
}

BoolPlansza::BoolPlansza(std::vector<bool> a, std::vector<bool> b = { 0,0,0,0,0 }, std::vector<bool> c = { 0,0,0,0,0 }, std::vector<bool> d = { 0,0,0,0,0 })
{
    boolPlansza.resize(rozmiar);
    boolPlansza[0] = a;
    boolPlansza[1] = b;
    boolPlansza[2] = c;
    boolPlansza[3] = d;
}

void BoolPlansza::Display()
{
    for (auto a : boolPlansza)
    {
        for (auto b : a)
        {
            std::cout << b << "\t";
        }
        std::cout << std::endl;
    }
}

int BoolPlansza::dlugoscLinii()
{
    int counter = 0;
    int result = 0;
    for (int i = 0; i < boolPlansza.size() - 1; i++)
    {
        for (int j = 0; j < boolPlansza[0].size() - 1; j++)
        {
            if (boolPlansza[i][j] == true) counter++;
            if (boolPlansza[i][j+1] == true) counter++;
            if (boolPlansza[i+1][j] == true) counter++;
            if (boolPlansza[i+1][j+1] == true) counter++;
            if (counter >= 2) result++;
            counter = 0; // dodać if i > 3 break;
        }
    }
    if (result== 2) return 3;
    if (result == 3) return 4;
    if (result == 4) return 5;
    else return 0;
}


