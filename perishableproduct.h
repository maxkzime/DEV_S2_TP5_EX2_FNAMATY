// TP5/EX2/perishableaproduct.h
// Exercice 2 : FNAMATY
// BODIN Maxime C2
// 22/03/15

#ifndef PERISHABLEPRODUCT_H
#define PERISHABLEPRODUCT_H

#include "product.h"

class PerishableProduct : public Product
{
private:
    string itsDeadline;

public:
    PerishableProduct(int reference,
                      string name,
                      string description,
                      float price,
                      string deadline)
        : Product(reference,
                  name,
                  description,
                  price),
          itsDeadline(deadline)
    {}

    void displayLabel();

};

#endif // PERISHABLEPRODUCT_H
