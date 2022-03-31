// TP5/EX2/product.cpp
// Exercice 2 : FNAMATY
// BODIN Maxime C2
// 22/03/15

#include "product.h"


Product::Product(int reference,
                 string name,
                 string description,
                 float price)
    : itsReference(reference),
      itsName(name),
      itsDescription(description),
      itsPTPrice(price)
{}


float Product::getItsPTPrice() const
{return itsPTPrice;}

void Product::setItsPTPrice(float newItsPTPrice)
{itsPTPrice = newItsPTPrice;}


float Product::calculateVATPrice()
{return itsPTPrice + (itsVAT * itsPTPrice) ;}


void Product::displayLabel()
{
    cout << " --- Etiquette --- " << '\n'
         << " Nom : " << itsName << '\n'
         << " Référence : " << itsReference << '\n'
         << " Prix HT : " << getItsPTPrice() << '\n'
         << " Description : " << itsDescription << '\n';
}
