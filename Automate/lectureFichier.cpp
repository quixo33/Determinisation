//
//  lectureFichier.cpp
//  DéterminisationAutomate
//
//  Created by Raphael Thibierge on 03/04/2015.
//  Copyright (c) 2015 Raphael Thibierge. All rights reserved.
//
#include <string>
#include <vector>
#include <set>
#include <list>
#include <iostream>
#include <fstream>

using namespace std;

void loadData(string nomDuFichier, int & nbEtatAutomate, list<int> & etatsInitiaux, list<int> & etatsTerminaux ){
    fstream f ;
    f.open(nomDuFichier, ios::in) ;
    if (f.fail())
        cout << "ouverture en lecture impossible " << endl ;
    
}
    