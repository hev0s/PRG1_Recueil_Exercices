#include <array>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;
/*
const array PAYS {"Allemagne", "Canada", "Chine", "Coree",
                  "Etats-Unis", "Japon", "Russie"};
const int W_PAYS_MAX {10}; // plus long nom de pays

const array METAUX {"Or", "Argent", "Bronze"};
const int W_METAL_MAX {6}; // plus long nom de metal

using Nombre_de_medailles = unsigned short;
using Pays = size_t;
using Metal = size_t;

using Medailles_du_pays = array<Nombre_de_medailles, METAUX.size()>;
using Tableau_des_medailles = array<Medailles_du_pays, PAYS.size()>;

Nombre_de_medailles total_medailles_pays(
        const Tableau_des_medailles& medailles,
        Pays pays);

Nombre_de_medailles total_medailles_metal(
        const Tableau_des_medailles& medailles,
        Metal metal);

inline auto pluriel(unsigned n) { return n >= 2 ? "s" : ""; }


void afficher_tableau(const Tableau_des_medailles& tableau_des_medailles) {
    // 1. Affichage de l'en-tête
    cout << left << setw(W_PAYS_MAX + 2) << "Pays";
    for (const auto& metal : METAUX) {
        cout << right << setw(W_METAL_MAX + 2) << metal;
    }
    cout << '\n' << string(W_PAYS_MAX + 2 + METAUX.size() * (W_METAL_MAX + 2), '-') << '\n';

    // 2. Affichage des lignes (Pays + médailles)
    for (Pays pays{0}; pays < PAYS.size(); ++pays) {
        cout << left << setw(W_PAYS_MAX + 2) << PAYS.at(pays);
        for (Metal metal{0}; metal < METAUX.size(); ++metal) {
            cout << right << setw(W_METAL_MAX + 2) << tableau_des_medailles.at(pays).at(metal);
        }
        cout << '\n';
    }
    cout << endl;
};

int main() {

   const Tableau_des_medailles tableau_des_medailles
           { Medailles_du_pays{0, 0, 2},
             Medailles_du_pays{1, 0, 1},
             Medailles_du_pays{1, 2, 0},
             Medailles_du_pays{1, 0, 0},
             Medailles_du_pays{2, 1, 1},
             Medailles_du_pays{0, 1, 1},
             Medailles_du_pays{0, 1, 0} };

    afficher_tableau(tableau_des_medailles);

   // Nombre total de médailles obtenues par chacun des pays

   for (Pays pays{0}; pays < PAYS.size(); ++pays) {
      const string& nom_du_pays { PAYS.at(pays) };
      Nombre_de_medailles nb_medailles { total_medailles_pays(tableau_des_medailles, pays) };

      cout << setw(W_PAYS_MAX) << left << nom_du_pays << " : "
           << nb_medailles << " medaille" << pluriel(nb_medailles)
           << endl;
   }
   cout << endl;

   // Nombre total de médailles d'or, d'argent et de bronze obtenues
   // par l'ensemble des pays

   for (Metal metal{0}; metal < METAUX.size(); ++metal) {
      const string& nom_du_metal { METAUX.at(metal) };
      Nombre_de_medailles nb_medailles { total_medailles_metal(tableau_des_medailles, metal)};

      cout << setw(W_METAL_MAX) << left << nom_du_metal << " : "
           << nb_medailles << " medaille" << pluriel(nb_medailles)
           << endl;
   }
}

Nombre_de_medailles total_medailles_pays(
        const Tableau_des_medailles & tableau_des_medailles,
        Pays pays)
{
   Nombre_de_medailles cnt{0};
   const Medailles_du_pays& medailles_du_pays = tableau_des_medailles.at(pays);
   for (Nombre_de_medailles nb : medailles_du_pays) {
      cnt += nb;
   }
   return cnt;
}

Nombre_de_medailles total_medailles_metal(
        const Tableau_des_medailles & tableau_des_medailles,
        Metal metal)
{
   Nombre_de_medailles cnt{0};
   for (Pays pays{0}; pays < PAYS.size(); ++pays) {
      cnt += tableau_des_medailles.at(pays).at(metal);
   }
   return cnt;
*/
int main() {
    // médailles
    using Tab_Med_Valeur = array<int, 3>;
    using Tab_Med_Nom = array<string, 3>;

    Tab_Med_Valeur tab_med_valeur {0, 0, 2};
    Tab_Med_Nom tab_med_nom {{"or"s, "Argent"s, "Bronze"s}};

    // i est l'indice
    for (size_t i=0; i < tab_med_valeur.size(); ++i) {
        cout << tab_med_nom[i] << "\t" << tab_med_valeur[i] << endl;
    }

    using Tab_Pays_Med = array<Tab_Med_Valeur, 10>;
    using Tab_Pays_Nom = array<string,7>;

    Tab_Pays_Nom tab_pays_nom{"Allemagne"s, "Canada"s, "Chine"s};
    Tab_Pays_Med tab_medailles {
        Tab_Med_Valeur {0, 0, 2}, // Allemagne
        Tab_Med_Valeur {1, 0, 1}, // Canada
        Tab_Med_Valeur {1, 2, 0} // Chine
    };
    size_t indice = 1; // Canada
    cout << tab_pays_nom[indice] << " : ";
    for (size_t i=0; i < tab_medailles.at(0).size(); ++i) {
        cout << tab_medailles.at(indice).at(i)<<" ";
    }

}

