// TP5/EX2/culturalproduct.cpp
// Exercice 2 : FNAMATY
// BODIN Maxime C2
// 22/03/15

#include "culturalproduct.h"

void CulturalProduct::displayLabel()
{
    this->Product::displayLabel();

    cout << " TVA : " << itsVAT << '\n'
         << " Prix TVA : " << calculateVATPrice() << '\n';
}

float CulturalProduct::calculateVATPrice()
{return getItsPTPrice() + (itsVAT * getItsPTPrice()) ;}
