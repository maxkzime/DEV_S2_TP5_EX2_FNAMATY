// TP5/EX2/product.h
// Exercice 2 : FNAMATY
// BODIN Maxime C2
// 22/03/15

#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>
#include <iostream>

using std::string, std::cout;


class Product
{
protected:
    int itsReference;
    string itsName;
    string itsDescription;

private:
    float itsPTPrice;
    constexpr static float const itsVAT = 0.2 ;

public:
    Product(int reference,
            string name,
            string description,
            float price);

    float getItsPTPrice() const;
    void setItsPTPrice(float newItsPTPrice);

    float calculateVATPrice();

    void displayLabel();

};

#endif // PRODUCT_H
