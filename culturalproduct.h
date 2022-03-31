// TP5/EX2/culturalproduct.h
// Exercice 2 : FNAMATY
// BODIN Maxime C2
// 22/03/15

#ifndef CULTURALPRODUCT_H
#define CULTURALPRODUCT_H

#include "product.h"

class CulturalProduct : public Product
{
private:
    constexpr static float const itsVAT = 0.055;

public:
    CulturalProduct(int reference,
                    string name,
                    string description,
                    float price)
        : Product(reference,
                  name,
                  description,
                  price)
    {}

    void displayLabel();

    float calculateVATPrice();

};

#endif // CULTURALPRODUCT_H
