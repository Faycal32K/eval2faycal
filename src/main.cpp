#include <iostream>
using namespace std;

int main()  {
  //variable permettant de compter le nombre de places disponibles
  int nbrePlace = 10;
  //variable permettant de récuperer le choix de l'utilisateur 
  int choix;
  cout << "************ Evaluation 2 ************" << endl <<endl;
  // partie a compléter a partir du 3.1
cout << "" << endl << endl;
  cout << "1 - Entrée dans le parking" << endl << endl;
  cout << "2 - Nombre de place disponibles" << endl << endl;
  cout << "3 - Sortie du parking" << endl << endl;
  cout << "4 - Quitter" << endl << endl;
  cin >> choix;
  switch (choix) {
    case 1:
    cout << " Vous avez choisi l'option numero 1 "
      break;
    case 2:
    cout << " Vous avez choisi l'option numero 2"
      break;
    case 3 :
    cout << " Vous avez choisi l'option numero 3"
      break
      case 4:
    cout << " Vous avez choisi l'option nummero 4"
      break;
  }
  return 0;
}