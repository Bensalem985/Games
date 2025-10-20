#include <iostream>

// Fonction pour demander la reponse du joueur
char demanderReponse(int proposition) {
    char reponse;
    std::cout << "Je propose : " << proposition << std::endl;
    std::cout << "Est-ce trop petit (+), trop grand (-) ou juste (=) ? ";
    std::cin >> reponse;
    return reponse;
} 

// Fonction principale : l'IA devine le nombre
void devinerNombre() {
    int min = 1;
    int max = 100;
    char proposition;
    char reponse;
    int nbEssais = 0;

    std::cout << "Pensez a un nombre entre 1 et 100." << std::endl;
    std::cout << "Appuyez sur Entree quand vous etes pret." << std::endl;
    std::cin.ignore(); // Attendre que l'utilisateur appuie sur Entrée
    std::cin.get(); // Attendre
    do {
        int proposition = (min) + (max - min) / 2; // Proposition de l'IA
        reponse = demanderReponse(proposition);
        nbEssais++;
        if (reponse == '+') {
            min = proposition + 1; // Ajuster la borne minimale
        } else if (reponse == '-') {
            max = proposition - 1; // Ajuster la borne maximale
        } else if (reponse == '=') {
            std::cout << "J'ai devine votre nombre " << proposition << " en " << nbEssais << " essais!" << std::endl;
        } else {
            std::cout << "Reponse invalide. Veuillez repondre par +, - ou =." << std::endl;
        }
        } while (reponse != '=');
    }
int main() {
    devinerNombre();
    return 0;
}