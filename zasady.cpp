
#include "zasady.h"

//{ 0,0,0,0,0 }

Zasady::Zasady()
{
    winCombinations.resize(40);
    winCombinations[0] = { { 0,0,0,0,0 },{ 1,1,1,1,1},{ 0,0,0,0,0 },{ 0,0,0,0,0 } }; //1
    winCombinations[1] =  { { 0,0,0,0,0 },{ 0,0,0,0,0 }, { 1,1,1,1,1 }, {0,0,0,0,0}} ; //2
    winCombinations[2] = { { 1,1,1,1,1 },{ 0,0,0,0,0 },{ 0,0,0,0,0 },{ 0,0,0,0,0 } };//3
    winCombinations[3] = { { 0,0,0,0,0 },{ 0,0,0,0,0 },{ 0,0,0,0,0 },{ 1,1,1,1,1 } };//4
    winCombinations[4] = { { 0,0,0,0,0 },{ 0,0,1,0,0 },{ 0,1,0,1,0 },{ 1,0,0,0,1 } }; //5
    winCombinations[5] = { { 0,0,1,0,0 },{ 0,1,0,1,0 },{ 1,0,0,0,1 },{ 0,0,0,0,0 } };//6
    winCombinations[6] = { { 1,0,0,0,1 },{0,1,0,1,0 },{ 0,0,1,0,0 },{ 0,0,0,0,0 } }; // 7
    winCombinations[7] = { { 0,0,0,0,0 },{ 1,0,0,0,1 },{ 0,1,0,1,0 },{ 0,0,1,0,0 } }; //8
    winCombinations[8] = { { 0,0,0,0,0 },{ 0,0,0,0,0 },{ 0,1,0,1,0 },{ 1,0,1,0,1 } }; //9
    winCombinations[9] = { { 0,0,0,0,0 },{ 0,1,0,1,0 },{ 1,0,1,0,1 },{ 0,0,0,0,0 } }; //10
    winCombinations[10] = { { 0,1,0,1,0 },{ 1,0,1,0,1 },{ 0,0,0,0,0 },{ 0,0,0,0,0 } }; //11
    winCombinations[11] = { { 1,0,1,0,1 },{ 0,1,0,1,0 },{ 0,0,0,0,0 },{ 0,0,0,0,0 } };	// 12
    winCombinations[12] = { { 0,0,0,0,0 },{ 1,0,1,0,1 },{ 0,1,0,1,0 },{ 0,0,0,0,0 } };//13
    winCombinations[13] = { { 0,0,0,0,0 },{ 0,0,0,0,0 },{ 1,0,1,0,1 },{ 0,1,0,1,0 } }; //14
    winCombinations[14] = { { 0,0,1,0,0 },{ 1,1,0,1,1 },{ 0,0,0,0,0 },{ 0,0,0,0,0 } }; //15
    winCombinations[15] = { { 0,0,0,0,0 },{ 0,0,1,0,0 },{ 1,1,0,1,1 },{ 0,0,0,0,0 } };//16
    winCombinations[16] = { { 0,0,0,0,0 },{ 0,0,0,0,0 },{ 0,0,1,0,0 },{ 1,1,0,1,1 } };//17
    winCombinations[17] = { { 0,0,0,0,0 },{ 0,0,0,0,0 },{ 1,1,0,1,1 },{ 0,0,1,0,0 } };//18
    winCombinations[18] = { { 0,0,0,0,0 },{ 1,1,0,1,1 },{ 0,0,1,0,0 },{ 0,0,0,0,0 } };//19
    winCombinations[19] = { { 1,1,0,1,1 },{ 0,0,1,0,0 },{ 0,0,0,0,0 },{ 0,0,0,0,0 } }; //20
    winCombinations[20] = { { 0,0,1,0,0 },{ 0,0,0,0,0 },{ 0,0,0,0,0 },{ 1,1,0,1,1 } };//21
    winCombinations[21] = { { 0,0,0,0,0 },{ 0,0,1,0,0 },{ 0,0,0,0,0 },{ 1,1,0,1,1 } };//22
    winCombinations[22] = { { 0,0,1,0,0 },{ 0,0,0,0,0 },{ 1,1,0,1,1 },{ 0,0,0,0,0 } };//23
    winCombinations[23] = { { 1,1,0,1,1},{ 0,0,0,0,0 },{ 0,0,0,0,0 },{ 0,0,1,0,0 } };//24
    winCombinations[24] = { { 1,1,0,1,1},{ 0,0,0,0,0 },{ 0,0,1,0,0 },{ 0,0,0,0,0 } };//25
    winCombinations[25] = { { 0,0,0,0,0 },{ 1,1,0,1,1 },{ 0,0,1,0,0 },{ 0,0,0,0,0 } };//26
    winCombinations[26] = { { 0,0,0,0,0 },{ 0,1,0,1,0 },{ 0,0,0,0,0 },{ 1,0,1,0,1 } };//27
    winCombinations[27] = { { 0,1,0,1,0 },{ 0,0,0,0,0 },{ 1,0,1,0,1 },{ 0,0,0,0,0 } };//28
    winCombinations[28] = { { 1,0,1,0,1 },{ 0,0,0,0,0 },{ 0,1,0,1,0 },{ 0,0,0,0,0 } };//29
    winCombinations[29] = { { 0,0,0,0,0 },{ 1,0,1,0,1 },{ 0,0,0,0,0 },{ 0,1,0,1,0 } };//30
    winCombinations[30] = { { 1,0,0,0,1 },{ 0,1,1,1,0 },{ 0,0,0,0,0 },{ 0,0,0,0,0 } };//31
    winCombinations[31] = { { 0,0,0,0,0},{ 1,0,0,0,1},{ 0,1,1,1,0 },{ 0,0,0,0,0 } }; //32
    winCombinations[32] = { { 0,0,0,0,0 },{ 0,0,0,0,0 },{ 1,0,0,0,1 },{ 0,1,1,1,0 } };//33
    winCombinations[33] = { { 0,0,0,0,0 },{ 0,0,0,0,0 },{ 0,1,1,1,0 },{ 1,0,0,0,1 } };//34
    winCombinations[34] = { { 0,0,0,0,0 },{ 0,1,1,1,0},{ 1,0,0,0,1 },{ 0,0,0,0,0 } };//35
    winCombinations[35] = { { 0,1,1,1,0 },{ 1,0,0,0,1 },{ 0,0,0,0,0 },{ 0,0,0,0,0 } };//36
    winCombinations[36] = { { 1,0,0,0,1}, { 0,0,0,0,0 },{ 0,1,1,1,0 },{ 0,0,0,0,0 } };//37
    winCombinations[37] = { { 0,0,0,0,0 },{ 1,0,0,0,1 },{ 0,0,0,0,0 },{ 0,1,1,1,0 } }; //38
    winCombinations[38] = { { 0,1,1,1,0 },{ 0,0,0,0,0 },{ 1,0,0,0,1 },{ 0,0,0,0,0 } };//39
    winCombinations[39] = { { 0,0,0,0,0 },{ 0,1,1,1,0 },{ 0,0,0,0,0 },{ 1,0,0,0,1 } };//
    FillMachine();
}

void Zasady::DisplayTwo(long startCredit, long gameCount)
{
    std::cout<<"name\t\tcount\tcount%\tavg1\tvalue\tvalue%\tsingle"<<std::endl;
    for(int i = 0 ; i<8; i++)
    {
        std::cout<<"FIG_"<< i+2<<" x3\t"<< symbols[i][3]<<"\t" << static_cast<double>(symbols[i][3])/gameCount <<"%\t"<< static_cast<double>(gameCount)/symbols[i][3]
                         <<"\t"<<symbols[i][0] * symbols[i][3]<<"\t"<<static_cast<double>(symbols[i][0] * symbols[i][3])* 100 / startCredit<<"%\t"<<symbols[i][0]<<std::endl;
        std::cout<<"FIG_"<< i+2<<" x4\t"<< symbols[i][4]<<"\t" << static_cast<double>(symbols[i][4])/gameCount <<"%\t"<< static_cast<double>(gameCount)/symbols[i][4]
                         <<"\t"<<symbols[i][1] * symbols[i][4]<<"\t"<<static_cast<double>(symbols[i][1] * symbols[i][4])* 100 / startCredit<<"%\t"<<symbols[i][1]<<std::endl;
        std::cout<<"FIG_"<< i+2<<" x5\t"<< symbols[i][5]<<"\t" << static_cast<double>(symbols[i][5])/gameCount <<"%\t"<< static_cast<double>(gameCount)/symbols[i][5]
                         <<"\t"<<symbols[i][2] * symbols[i][5]<<"\t"<<static_cast<double>(symbols[i][2] * symbols[i][5])* 100 / startCredit<<"%\t"<<symbols[i][2]<<std::endl;
    }
    std::cout<<"WILD_X3"<<"\t\t"<<  symbols[8][3]<<"\t" << static_cast<double>(symbols[8][3])/gameCount <<"%\t"<< static_cast<double>(gameCount)/symbols[8][3]
                     <<"\t"<<symbols[8][0] * symbols[8][3]<<"\t"<<static_cast<double>(symbols[8][0] * symbols[8][3])* 100 / startCredit<<"%\t"<<symbols[8][0]<<std::endl;
    std::cout<<"WILD_X4"<<"\t\t"<<  symbols[8][4]<<"\t" << static_cast<double>(symbols[8][4])/gameCount <<"%\t"<< static_cast<double>(gameCount)/symbols[8][4]
                     <<"\t"<<symbols[8][1] * symbols[8][4]<<"\t"<<static_cast<double>(symbols[8][1] * symbols[8][4])* 100 / startCredit<<"%\t"<<symbols[8][1]<<std::endl;
    std::cout<<"WILD_X5"<<"\t\t"<< symbols[8][5]<<"\t" << static_cast<double>(symbols[8][5])/gameCount <<"%\t"<< static_cast<double>(gameCount)/symbols[8][5]
                     <<"\t"<<symbols[8][2] * symbols[8][5]<<"\t"<<static_cast<double>(symbols[8][2] * symbols[8][5])* 100 / startCredit<<"%\t"<<symbols[8][2]<<std::endl;
    std::cout<<std::endl<<"maszyna\twartosc\tlicznik"<<std::endl;
    for(int i = 0; i<10; i++)
    {
        for(int j = 0; j<10; j++)
        {
            std::cout<<i<<"\t"<<j<<"\t"<<std::count(machine[i].begin(), machine[i].end(), j)<<std::endl;
        }
        std::cout<<std::endl;
    }
}

BoolPlansza Zasady::returnCombination(int value)
{
    return winCombinations[value - 1];
}

void Zasady::FillMachine()
{
    machine.resize(10);
    machine[0]= {0,2,2,5,5,0,5,5,5,5,2,2,2,2,0,5,5,5,2,2,2,2,5,5,2,2,0,2,2,5,5,6,6,2,0,3,3,3,5,5,5,5,0,5,3,3,5,5,5,5,0,4,4,4,5,5,5,5,2,2,4,4,0,2,2,2,7,7,0,3,3,0,3,3,8,8,8,5,5,5,8,8,8,2,2,2,7,7,9,9,5,5,0,2,2,2,2,2,5,5};
    machine[1]= {3,3,0,3,2,0,6,6,6,6,6,3,3,3,3,3,3,3,6,6,6,0,3,3,0,3,3,3,3,2,3,0,3,3,2,2,6,6,6,0,4,4,4,5,5,5,4,4,4,6,6,6,6,5,2,2,0,6,6,6,3,3,6,6,6,6,7,7,6,6,6,6,6,6,0,8,4,4,3,0,8,9,9,9,9,0,9,9,9,9,9,8,8,0,9,9,9,8,8,8};
    machine[2]= {4,4,4,2,0,2,2,4,4,4,2,2,2,2,0,4,4,0,3,3,4,4,3,3,0,4,4,4,4,4,0,4,4,0,4,4,4,4,5,5,5,7,7,7,5,5,4,4,0,7,7,7,7,7,7,6,6,6,6,6,3,3,2,2,7,7,7,7,6,6,6,7,7,7,8,8,4,4,4,7,7,9,8,8,8,9,8,9,9,9,9,8,9,9,9,9,4,4,4,4};

    machine[3]= {8,9,9,9,0,2,2,0,2,9,0,2,0,0,3,0,2,9,0,3,9,2,0,0,0,3,8,4,0,3,3,4,4,5,0,5,8,4,5,0,4,4,0,5,0,5,9,5,0,0,5,6,0,6,0,5,6,6,6,0,7,6,6,0,7,6,0,7,6,7,0,7,7,9,8,8,9,9,9,8,7,9,9,9,9,8,8,9,9,9,9,8,9,8,9,9,9,8,8,8};
    machine[4]= {8,9,9,9,8,2,0,2,0,2,3,0,2,0,3,3,2,2,0,3,3,0,0,0,0,3,3,4,4,0,3,4,0,0,5,5,0,5,5,0,0,5,0,5,5,0,6,0,5,0,5,5,6,6,0,6,6,6,0,7,7,6,6,7,7,6,0,7,0,7,0,7,7,9,8,8,9,9,9,8,7,9,9,9,9,8,8,9,9,9,9,8,9,9,9,8,8,9,9,9};

    machine[5]= {2,2,2,3,3,2,5,2,2,2,0,2,2,5,5,4,4,0,5,5,5,4,2,2,7,7,7,6,5,5,5,5,7,7,7,8,8,0,8,9,9,8,9,7,0,8,8,8,7,7};
    machine[6]= {3,3,0,3,3,3,0,2,3,3,3,3,6,6,0,8,8,8,5,3,3,6,6,6,8,8,7,8,7,9,9,9,7,9,9,8,8,9,9,9,9,8,9,9,9,8,8,8,8,8};
    machine[7]= {0,7,7,8,8,4,0,2,4,4,4,4,7,7,0,4,6,6,7,7,7,6,6,6,7,7,7,8,9,9,9,8,8,8,8,8,8,9,9,9,9,8,9,9,9,8,8,8,9,9};
    machine[8]= {9,0,9,9,0,8,0,9,9,9,9,0,0,7,8,8,0,0,9,9,9,0,7,7,8,8,9,7,0,0,9,9,0,0,8,8,8,7,7,9,9,0,7,7,0,8,0,7,9,9};
    machine[9]= {9,8,0,9,7,8,0,0,7,0,9,9,9,7,0,8,9,7,0,8,7,7,8,7,9,8,8,0,0,0,9,9,0,7,8,8,8,0,8,7,9,8,0,7,0,8,8,7,9,8};
}

std::vector<std::vector<int>> Zasady::returnRandom(const int & freespin)
{
    std::vector<std::vector<int>> result;
    int index;
    result.resize(5);

    for(int i =0; i<5; i++)
    {
        for(int j = 0; j<4; j++)
        {
            result[j].resize(5);
            if(freespin==1)
            {
                index=std::rand()%45; //sesja freespinowa
                result[j][i] = machine[i+5][index+j];
            }
                else
                {
                    index = std::rand() % 95; //sesja normalna
                    result[j][i] = machine[i][index+j];
                }
        }
    }
return result;
}
