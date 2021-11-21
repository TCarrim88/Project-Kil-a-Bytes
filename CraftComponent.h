#ifndef __CraftComponent_h__
#define __CraftComponent_h__
//Template: AbstractClass
//AbstractFact: AbstractProd
//Decorator: Component
class CraftComponent{   
    public:
        void Orbit(CraftComponent*);
        CraftComponent();
        virtual ~CraftComponent();

        //Decorator
        virtual void add(CraftComponent*);
        virtual void print() = 0;
};
#endif