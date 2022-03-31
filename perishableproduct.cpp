// TP5/EX2/perishableproduct.cpp
// Exercice 2 : FNAMATY
// BODIN Maxime C2
// 22/03/15

#include "perishableproduct.h"

void PerishableProduct::displayLabel()
{
    this->Product::displayLabel();

    cout << " Prix TVA : " << calculateVATPrice() << '\n'
         << " Date limite : " << itsDeadline << '\n';
}
