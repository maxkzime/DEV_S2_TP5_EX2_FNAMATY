// TP5/EX2/multimediaproduct.h
// Exercice 2 : FNAMATY
// BODIN Maxime C2
// 22/03/15

#ifndef MULTIMEDIAPRODUCT_H
#define MULTIMEDIAPRODUCT_H

#include "product.h"

class MultimediaProduct : public Product
{
private:
    int itsYearsWarranty;

public:
    MultimediaProduct(int reference,
                      string name,
                      string description,
                      float price,
                      int warranty)
        : Product(reference,
                  name,
                  description,
                  price),
          itsYearsWarranty(warranty)
    {}

    void displayLabel();

};

#endif // MULTIMEDIAPRODUCT_H
