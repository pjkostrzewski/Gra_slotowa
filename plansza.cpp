
#include "plansza.h"


const int rozmiar = 4;

Plansza::Plansza()
{
    plansza.resize(rozmiar);
    for (int i = 0; i < plansza.size(); i++)
    {
        plansza[i] = std::vector<int>(5,0);		// { 0,0,0,0,0 }
    }
}

void Plansza::Display()
{
    for (auto a : plansza)
    {
        for (auto b : a)
        {
            std::cout << b<<"\t";
        }
        std::cout << std::endl;
    }
}

void Plansza::Random()
{
    for (auto & a : plansza)
    {
        for (auto & b : a)
        {
            b = std::rand() % 10;
        }
        //std::cout << std::endl;
    }
}



int Plansza::Win()
{
    int result = 0;
    for (auto a : plansza)
    {
        if (std::accumulate(a.begin(), a.end(), 0) % 2 == 1) result += 5;
        //result += std::count(a.begin(), a.end(), 9) * 2;
    }
    //std::cout << result << std::endl;
    return result;
}

std::vector<std::vector<bool>> Plansza::toBoolBoard( int value )
{
    std::vector<std::vector<bool>> result;
    result.resize(rozmiar);
    for (int i = 0; i < result.size(); i++)
    {
        result[i] = std::vector<bool>(5, 0);		// { 0,0,0,0,0 }
    }

    for (int i = 0; i < plansza.size(); i++)
    {
        for (int j = 0; j <= rozmiar; j++)
        {
            if (plansza[i][j] == value || plansza[i][j]==0) result[i][j] = true;
        }
    }

    return result;
}

std::vector<std::vector<bool>> Plansza::wildBoard()
{
    std::vector<std::vector<bool>> result;
    result.resize(rozmiar);
    for (int i = 0; i < result.size(); i++)
    {
        result[i] = std::vector<bool>(5, 0);		// { 0,0,0,0,0 }
    }
    for (int i = 0; i < plansza.size(); i++)
    {
        for (int j = 0; j <= rozmiar; j++)
        {
            if (plansza[i][j]==0) result[i][j] = true;
        }
    }
return result;
}

int Plansza::RandomScatters()
{
    int rand = std::rand() %80000;
    if(rand>=0 && rand<100) return 5;
    else if(rand>=100 && rand< 300) return 4;
    else if(rand >= 300 && rand <700) return 3;
    else return 0;
}

void Plansza::AddScatters(int value)
{
    while(numberOfScatters()<value)
    {
       plansza[std::rand() %4][std::rand() %5]=1;
    }
}

Plansza::Plansza(std::vector<int> a = { 0,0,0,0,0 }, std::vector<int> b = { 0,0,0,0,0 }, std::vector<int> c = { 0,0,0,0,0 }, std::vector<int> d = { 0,0,0,0,0 })
{
    plansza.resize(rozmiar);
    plansza[0] = a;
    plansza[1] = b;
    plansza[2] = c;
    plansza[3] = d;
}

int Plansza::numberOfScatters()
{
    int counter = 0;

    for (auto a : plansza)
    {
        for (auto b : a)
        {
            if (b == 1) counter++;
        }
    }
    return counter;
}

void Plansza::fill(const std::vector<std::vector<int>> & temp)
{
    for(int i =0; i<4; i++)
    {
        for(int j=0; j<5; j++)
        {
            plansza[i][j] =  temp [i][j];
        }
    }
}
