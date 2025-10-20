#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Initialisation du générateur aléatoire
    srand(time(nullptr));
    
    // Génération du nombre secret entre 1 et 100
    int nombreSecret = rand() % 100 + 1;
    int tentative = 0;
    int proposition = 0;
    
    std::cout << "=== LE JUSTE PRIX ===" << std::endl;
    std::cout << "J'ai choisi un nombre entre 1 et 100. Devinez-le !" << std::endl << std::endl;
    
    // TODO: Ajouter la boucle de jeu ici
    do {

        // Calcul du nombre de tentatives
        tentative++;

        // Lecture de la proposition du joueur
        std::cout << "Votre proposition: ";
        std::cin >> proposition;

        // Verification de la proposition du joueur
        if (proposition < nombreSecret) {
            std::cout << "-> Plus grand!!" << std::endl << std::endl;
        } else if(proposition > nombreSecret) {
            std::cout << "-> Plus petit!!" << std::endl << std::endl;
        } else {
            std::cout << "Bravo!!!  vous avez trouve en " << tentative << " tentatives!" << std::endl;
        }
    } while (proposition != nombreSecret);
    std::cout << "Appuyez sur entrée pour continuer" << std::endl;
    std::cin.ignore();
    std::cin.get();
    
    
    return 0;

}
