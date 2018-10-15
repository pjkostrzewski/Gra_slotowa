
#include "gracz.h"

void Gracz::ModifyBudget(int value)
{
    budgetNow += value;
}

void Gracz::Enter()
{
    budgetNow -= oneGameBudget;
    stracone+=oneGameBudget;
}


void Gracz::Display()
{
    std::cout << std::endl << "====================================" << std::endl;
    std::cout << "Stawka jednej gry: " << oneGameBudget << std::endl;
    std::cout << "Suma stawek: " << oneGameBudget * gamesCount << std::endl;
    //std::cout << "Budzet: " << budgetNow << std::endl;
    std::cout << "Wygrane pieniadze: " <<wonMoney << std::endl;
    std::cout << "startowy kredyt: " << startCredit << std::endl;
    std::cout << "ilosc gier free spin z 3x Scatter: " << x3Scatter *10<<"\tx3 raz na: "<<static_cast<double>(gamesCount)/x3Scatter<<" gier"<<std::endl;
    std::cout << "ilosc gier free spin z 4x Scatter: " << x4Scatter *15<<"\tx4 raz na: "<<static_cast<double>(gamesCount)/x4Scatter<<" gier"<<std::endl;
    std::cout << "ilosc gier free spin z 5x Scatter: " << x5Scatter *20<<"\tx5 raz na: "<<static_cast<double>(gamesCount)/x5Scatter<<" gier"<<std::endl;
    std::cout<< "suma gier freespinowych: "<<x5Scatter *20 +x4Scatter *15+x3Scatter *10<<std::endl;
    std::cout<<"wygrana z gier freespinowych: "<<wonMoneyByFreeSpins<<std::endl;
    std::cout<<"wygrana z gier freespinowych / calkowita:  "<< static_cast<double>(wonMoneyByFreeSpins)/wonMoney*100<<"%"<<std::endl;
    std::cout << "najwyzsza wygrana: "<< biggestWin << std::endl;
    std::cout<<"stracone: "<<stracone<<std::endl;
    std::cout<<"HF dla calosci: "<<static_cast<double> (HFnormal+HFfree)/(normalGames+freeGames)*100<<"%\t"<<std::endl;
    std::cout<<"HF dla normalnej gry: "<<static_cast<double> (HFnormal)/(normalGames)*100<<"%\t"<<std::endl;
    std::cout<<"HF dla freespinowej: "<<static_cast<double> (HFfree)/(freeGames)*100<<"%\t"<<std::endl;
    std::cout<<"suma gier: "<<(normalGames+freeGames)<<std::endl;
    std::cout <<"RTP: "<< static_cast<double> (wonMoney) / static_cast<double> (oneGameBudget * gamesCount) *100 <<"%"<< std::endl;
}

 void Gracz::sendToFile(const long & value)
 {
     if(!file.good()) std::cout<<"brak dostepu do pliku"<<std::endl;
     else
     {
         file<<value<<std::endl;
     }

 }

 void Gracz::openFile()
 {
     file.open(path, std::ios::out);
 }

 void Gracz::closeFile()
 {
     file.close();
 }
