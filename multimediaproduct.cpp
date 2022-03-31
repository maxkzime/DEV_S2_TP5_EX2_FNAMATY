// TP5/EX2/multimediaproduct.cpp
// Exercice 2 : FNAMATY
// BODIN Maxime C2
// 22/03/15

#include "multimediaproduct.h"

void MultimediaProduct::displayLabel()
{
    this->Product::displayLabel();

    cout  << " Prix TVA : " << calculateVATPrice() << '\n'
          << " Durée de garantie : " << itsYearsWarranty << '\n';
}
