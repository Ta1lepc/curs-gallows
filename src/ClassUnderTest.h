#ifndef DD1388_CHESS_EXAMPLECLASS_H
#define DD1388_CHESS_EXAMPLECLASS_H
#include <stdlib.h>
#include <iostream>
#include<string>
#include<cstring>
#include <vector>
#include <cctype>
#include <fstream>
#include <random>
#include <ctime>

class ClassUnderTest {
public:
    int doSomething();

    bool test1(int ch);
    bool test2(std::ifstream &dict);
    bool GamePlay(char star[10],char word[10],int letter);
    void PartyGame();
    void SoloGame();
    void Start();
    int main();
};


#endif //DD1388_CHESS_EXAMPLECLASS_H
