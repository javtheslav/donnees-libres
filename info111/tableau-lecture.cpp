#include <stdexcept>
/** @file **/
#include <fstream>
#include <sstream>
#include "tableau-lecture.hpp"

        // Julien Cassou

vector<vector<string>> litTableau(string nom_fichier, int nb_colonnes) {
    ifstream tableau(nom_fichier);
    vector<vector<string>> resultat; 
    string ligne;
    while (getline(tableau, ligne)) {
        istringstream la_ligne(ligne);
        vector<string> ligne_renvoyé;
        for (int i = 0; i < nb_colonnes; i++) {
            la_ligne >> ligne_renvoyé[i];
        }
        resultat.push_back(ligne_renvoyé);
    }
    return resultat;
}