#ifndef LAUNCHPAD_H
#define LAUNCHPAD_H
#include "LaunchSimulator.h"
#include "Craft.h"
#include <string>
//Facade: interface
using namespace std;
class LaunchPad{

    private:
    Craft* craft;
    LaunchSimulator* command;
    string sequence;
    bool success = false;

    public:
    LaunchPad(){};
    LaunchPad(Craft* c);
    void seq(string s);
    void setSequence(string s){
        sequence = s;
    }
    string getSequence(){
        return sequence;
    }
    void TestMode();
    void interrupt();
    void tweak();
    void cont();
    void SpreadOut();
    void ActualLaunch();
    void SpaceStation();
};
#endif