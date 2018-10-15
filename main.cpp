// slotgame.cpp : Defines the entry point for the console application.
//
/*
- SCATTER (trzy SCATTERY to 10 free spinów) - " 1 "
- WILD zastępują dowolny inny symbol, - " 0 "
*/


#include "plansza.h"
#include "gracz.h"
#include "boolplansza.h"
#include "zasady.h"


using namespace std;

bool Compare(BoolPlansza  one, const BoolPlansza & two, const int rzedy = 5 )
{
    BoolPlansza temp;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < rzedy; j++)
        {
            temp.boolPlansza[i][j] = one.boolPlansza[i][j] & two.boolPlansza[i][j];
        }
    }

    for (auto & a : one.boolPlansza)
    {
        a.resize(rzedy);
    }

    for (auto & a : temp.boolPlansza)
    {
        a.resize(rzedy);
    }
    if (temp.boolPlansza == one.boolPlansza) return 1;
    else return 0;
}

int Sukces(Zasady & rules, Plansza & a, Gracz & player)
{
    int sukces = 0;
    for (int j = 2; j <= 9; j++)
    {
        BoolPlansza heh = a.toBoolBoard(j);
        for (int i = 1; i <= 40; i++)
        {
            if (Compare(rules.returnCombination(i), heh, 5)) { sukces += rules.symbols[j-2][2]; rules.symbols[j-2][5]++;}
            else
            {
                if (Compare(rules.returnCombination(i), heh, 4)) { sukces += rules.symbols[j-2][1];rules.symbols[j-2][4]++;}
                else
                {
                    if (Compare(rules.returnCombination(i), heh, 3)) { sukces+=rules.symbols[j-2][0];rules.symbols[j-2][3]++;}
                }
            }
        }
    }
    BoolPlansza heh = a.wildBoard();
    for (int i = 1; i <= 40; i++)
    {
        if (Compare(rules.returnCombination(i), heh, 5)) { sukces += rules.symbols[8][2]; rules.symbols[8][5]++;}
        else
        {
            if (Compare(rules.returnCombination(i), heh, 4)) { sukces += rules.symbols[8][1];rules.symbols[8][4]++;}
            else
            {
                if (Compare(rules.returnCombination(i), heh, 3)) { sukces+=rules.symbols[8][0];rules.symbols[8][3]++;}
            }
        }
    }

    if (sukces > player.biggestWin) player.biggestWin = sukces;
    return sukces;
}

void Scatters( Plansza & a, Gracz & player)
{
    if(player.freeSpinsActual==0)
    {
        switch (a.numberOfScatters())
        {
        case 3:
            player.x3Scatter++;
            player.freeSpinsActual+=10;
            break;
        case 4:
            player.x4Scatter++;
            player.freeSpinsActual+=15;
            break;
        case 5:
            player.x5Scatter++;
            player.freeSpinsActual+=20;
            break;
        default:
            break;
    }
    }
}

int main()
{
    Gracz player;
    Zasady rules;
    Plansza a;
    player.openFile();
    player.sendToFile(player.budgetNow);

    for (int i = 0; i < player.gamesCount; i++)
    {
        if(i%100==0) cout << i <<" / "<<player.gamesCount<< endl;
        if(player.freeSpinsActual>0)
        {
            player.freeGames++;
            a.fill(rules.returnRandom(1));           
            //a.AddScatters(a.RandomScatters());
            int wygrana = Sukces(rules, a,player);
            if(wygrana>0) player.HFfree++;
            player.wonMoney += wygrana;
            player.wonMoneyByFreeSpins += wygrana;
            player.freeSpinsActual--;
            i--;
        }
        else
        {
           player.normalGames++;
           a.fill(rules.returnRandom((0)));
           a.AddScatters(a.RandomScatters());
           int wygrana = Sukces(rules, a,player);
           if(wygrana>0) player.HFnormal++;
           player.Enter();
           player.wonMoney += wygrana;
        }

        Scatters(a,player);
        player.sendToFile(player.budgetNow+player.wonMoney);
    }

    player.ModifyBudget(player.wonMoney);
    player.Display();
    rules.DisplayTwo(player.startCredit, player.gamesCount);
    player.closeFile();

    return 0;
}

