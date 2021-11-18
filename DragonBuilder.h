#ifndef DRAGON_BUILDER_H
#define DRAGON_BUILDER_H

#include <iostream>
#include <map>
#include <cstring>

using namespace std;


class DragonBuilder {

    private:


    public: 
    DragonBuilder();
    

   virtual ~DragonBuilder();
   virtual void setName(string s = "");

        
};

#endif