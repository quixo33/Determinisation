//
//  Automate.h
//  Automate
//
//  Created by Maxime Maheo on 03/04/2015.
//  Copyright (c) 2015 Maxime Maheo. All rights reserved.
//

#ifndef __Automate__Automate__
#define __Automate__Automate__

#include <stdio.h>
#include <vector>
#include <set>

class Automate{
    
private:
    
    int _nombreEtats;
    std::set<int> _etatsInitiaux;
    std::set<int> _etatsTerminaux;
    std::vector<std::vector<std::set<int>>> _transitions;
    
public:
    
    Automate();
    ~Automate();
    
    void chargerDonnees(const std::string nomFichier);
    void afficherAutomateNonDeterministe() const;
    void construireAutomateNonDeterministe();
    void determiniser();
    void affichageFinal();
    
};

#endif /* defined(__Automate__Automate__) */
