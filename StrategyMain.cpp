


#include "TheContext.h"    //Context
#include "SendAndReturn.h"          //Strategy
#include "SendCargo.h"  //ConcreteStrategy1
#include "SendAndReturnHumansAndCargo.h" //ConcreteStrategy2

#include <iostream>


using namespace std;



int main(){
	TheContext * context;
	SendAndReturn*  sendANDreturn;
	sendANDreturn= new SendCargo();
	context = new TheContext(sendANDreturn);
	cout<<context->Send()<<endl; 
	

	cout<<endl;
	
	
	TheContext * context1;
	SendAndReturn*  sendANDreturn1;
	sendANDreturn1= new SendAndReturnHumansAndCargo();
	context1 = new TheContext(sendANDreturn1);
	cout<<context1->Send()<<endl; 
	
	
	
	cout<<endl;
	
	
	TheContext * context2;
	SendAndReturn*  sendANDreturn2;
	sendANDreturn2= new SendCargo();
	context2 = new TheContext(sendANDreturn2);
	cout<<context2->Send()<<endl; 
}
	
	
	



    