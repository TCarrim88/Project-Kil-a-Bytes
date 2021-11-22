#include "LaunchPad.h"
#include "SimTurnOn.h"
#include "SimTurnOff.h"
#include "SimTakeOff.h"
#include "Stage1.h"
#include "Stage2.h"
#include <string>
#include <iostream>
using namespace std;

LaunchPad::LaunchPad(Craft* c){ //Falcon9, FH, CD, DS
    craft = c;
    sequence = "";
}

void LaunchPad::seq(string sequence){
    if(sequence == "On"){
        command = new SimTurnOn(craft);
        command->Launch();
        if(craft->getTurnOnState()){
            sequence = "TakeOff";
            seq(sequence);
        }
        //sequence = "On";
    }
    else if(sequence == "Off"){
        command = new SimTurnOff(craft); //getTurnOnState : on = true, off = false
        command->Launch();
        if(!craft->getTurnOnState()){ //it is off 
            cout << "Error" << endl;
            TestMode();
            //interrupt();
        }
        //sequence = "Off";
    }
    else if(sequence == "TakeOff"){
        command = new SimTakeOff(craft);
        command->Launch();
        if(!craft->getTakeOffState()){
            interrupt();
        }
        else{
            if(craft->getCrewDragon()){
                cout << "Sending Humans and Cargo to International Space Station." <<endl;
                SpaceStation();
            }
            else if(craft->getDragonSpace()){
                cout << "Sending Cargo to International Space Station." <<endl;
                SpaceStation();
            }
            else{
                sequence = "Stage1";
                seq(sequence);
            }
            
        }
    }
    else if(sequence == "Stage1"){
        command = new Stage1(craft);
        command->Launch();
        if(!craft->getStage1State()){
            interrupt();
        }
        else{
            sequence = "Stage2";
            seq(sequence);
        }
    }
    else if(sequence == "Stage2"){
        command = new Stage2(craft);
        command->Launch();
        if(!craft->getStage2State()){
            interrupt();
        }
        else{
            if(craft->getSAstate()){
                cout << "Deploy Satellites." <<endl;
                SpreadOut();
            }
            else{
                success = true;
            }
            
        }
    }
}

void LaunchPad::TestMode(){
    cout << "Select a button: " << endl;
    
    cout << "On" << "\t";
    cout << "Off" << endl;
    cout << "TakeOff" << "\t";
    
    if(!craft->getCrewDragon()|| !craft->getDragonSpace()){
        cout << "Stage1" << "\t";
        cout << "Stage2" << endl;
    }
   

    //string sequence= "";
    cin >> sequence;
    seq(sequence);
}

void LaunchPad::interrupt(){
    cout << "There was an error in the Launch Sequence." << endl;
    cout << "Would you like to tweak the Launch Sequence? (Y/N): " << "\t";
    string ans = "";
    cin >> ans;
    if(ans == "Y"){
        tweak();
    }
    else{
        cout << "Launch Sequence Aborted." << endl;
        return;
    }
}

void LaunchPad::tweak(){
    cout << "What would you like to tweak?" << endl;
    //string sequence = "" ;

    cout << "On" << "\t";
    cout << "Off" << endl;
    cout << "TakeOff" << "\t";
    
    if(!craft->getCrewDragon()|| !craft->getDragonSpace()){
        cout << "Stage1" << "\t";
        cout << "Stage2" << endl;
    }
    
    cin >> sequence;
    if(sequence == "On"){
        command = new SimTurnOn(craft);
        command->Launch();
        //sequence = "On";
        if(craft->getTurnOnState()){
            sequence = "TakeOff";
            cont();
            
        }
        
    }
    else if(sequence == "Off"){
        command = new SimTurnOff(craft);
        command->Launch();
        //sequence = "Off";
        if(!craft->getTurnOnState()){
            cont();
        }
    }
    else if(sequence == "TakeOff"){
        command = new SimTakeOff(craft);
        command->Launch();
        if(craft->getTakeOffState()){
            sequence = "Stage1";
            cont();
        }
        if(!craft->getTakeOffState()){
            interrupt();
        }
    }
    else if(sequence == "Stage1"){
        command = new Stage1(craft);
        command->Launch();
        if(craft->getStage1State()){
            sequence = "Stage2";
            cont();
        }
        if(!craft->getStage1State()){
            interrupt();
        }
    }
    else if(sequence == "Stage2"){
        command = new Stage2(craft);
        command->Launch();
        if(craft->getStage1State()){
            //sequence = "Stage2";
            success = true;
            cont();
        }
        if(!craft->getStage2State()){
            interrupt();
        }
    }
}

void LaunchPad::cont(){
    cout << "Continuing" << endl;

    while(!success){
        seq(sequence);
    }
}

void LaunchPad::ActualLaunch(){
    cout << "Select a button: " << endl;

    cout << "On" << "\t";
    cout << "Off" << endl;
    cout << "TakeOff" << "\t";
    
    if(!craft->getCrewDragon()|| !craft->getDragonSpace()){
        cout << "Stage1" << "\t";
        cout << "Stage2" << endl;
    }

    cin >> sequence;

    if(sequence == "On"){
        command = new SimTurnOn(craft);
        command->Launch();
        if(craft->getTurnOnState()){
            sequence = "TakeOff";
        }
        //sequence = "On";
    }
    if(sequence == "Off"){
        command = new SimTurnOff(craft); //getTurnOnState : on = true, off = false
        command->Launch();
        if(!craft->getTurnOnState()){ //it is off 
            cout << "Error. Engines are off." << endl;
            //interrupt();
        }
        //sequence = "Off";
    }
    if(sequence == "TakeOff"){
        command = new SimTakeOff(craft);
        command->Launch();
        if(!craft->getTakeOffState()){
            cout << "Error. Attempted to launch before firing up engines." << endl;
            cout << "Actual Launch Sequence Failed!"<<endl;
        }
        else{
            if(craft->getCrewDragon()){
                cout << "Sending Humans and Cargo to International Space Station." <<endl;
                SpaceStation();
            }
            else if(craft->getDragonSpace()){
                cout << "Sending Cargo to International Space Station." <<endl;
                SpaceStation();
            }
            else{
                sequence = "Stage1";
                //seq(sequence);
            }
        }
    }
    if(sequence == "Stage1"){
        command = new Stage1(craft);
        command->Launch();
        if(!craft->getStage1State()){
             cout << "Error. Attempted to Initiate Stage 1 before Launching." << endl;
            cout << "Actual Launch Sequence Failed!"<<endl;
        }
        else{
            sequence = "Stage2";
            //seq(sequence);
        }
    }
    if(sequence == "Stage2"){
        command = new Stage2(craft);
        command->Launch();
        if(!craft->getStage2State()){
             cout << "Error. Attempted Initiate Stage 2 before Launching." << endl;
            cout << "Actual Launch Sequence Failed!"<<endl;
        }
        else{
            if(craft->getSAstate()){
                cout << "Deploy Satellites." <<endl;
                SpreadOut();
            }
            else{
                success = true;
            }
        }
    }

}

void LaunchPad::SpreadOut(){
    cout << "Starlink Satellites slowly spread out."<< endl;
    success = true;
}

void LaunchPad::SpaceStation(){
    cout << "Dragon Craft has docked at the International Space Station." << endl;
}