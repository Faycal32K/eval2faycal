#include <iostream>
using namespace std;

int main()  {
  //variable permettant de compter le nombre de places disponibles
  int i = 10 ;
  
  //variable permettant de récuperer le choix de l'utilisateur 
  int choix;
do{
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
    cout << --i;
      cout << " Place restantes";
      break;
    case 2:
      cout << i;
    cout << " Place disponibles";
      break;
    case 3 :
      cout << ++i;
    cout << " Place restantes";
      break;
      case 4:
    cout << "Au-revoir";
      break;
  }
}
  while ( choix <4 || choix >4);

  return 0;
}
