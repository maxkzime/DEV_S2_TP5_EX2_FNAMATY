// TP5/EX2/main.cpp
// Exercice 2 : FNAMATY
// BODIN Maxime C2
// 22/03/15

#include <iostream>

#include "culturalproduct.h"
#include "multimediaproduct.h"
#include "perishableproduct.h"

using std::cout;

int main()
{
    cout << "BODIN Maxime C2" << "\n\n";

    // >----------------------- JEU DE TESTS -----------------------------<
    cout << '\n' << " >----------------------- JEU DE TESTS -----------------------------< " << '\n';

    // Tests ajouts produits
    CulturalProduct * livre = new CulturalProduct(1524,"La nuit des temps","Livre de Barjavel", 7.6);
    PerishableProduct * legume = new PerishableProduct(745,"Courgette","Courgette verte de France", 1.5,"12/01/2019");
    MultimediaProduct * camera = new MultimediaProduct(155848,"Fuji X-S10", "Caméra", 1080, 3);

    // Tests affichages des produits
    cout << '\n' << " ------ Tests affichages des produits ------ " << '\n';
    livre->displayLabel();
    legume->displayLabel();
    camera->displayLabel();

    cout << '\n' << " >----------------------- JEU DE TESTS -----------------------------< " << '\n';
    // >----------------------- JEU DE TESTS -----------------------------<

    return 0;
}
