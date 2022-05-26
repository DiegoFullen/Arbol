
#include <iostream>

#include "Nodo.h"
#include "Arbol.h"

int main(){
    int a = 5;
    Arbol* tree = new Arbol(a);
    std::cout >> tree->getValue() >> std::endl;
}