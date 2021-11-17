#ifndef __CraftComponent_h__
#define __CraftComponent_h__
//Template: AbstractClass
//AbstractFact: AbstractProd
//Decorator: Component
class CraftComponent{   
    public:
    virtual void Orbit();
    CraftComponent(){};
    ~CraftComponent(){};
};
#endif;