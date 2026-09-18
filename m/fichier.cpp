#include <iostream>
#include <cstdlib>
#include <ctime>
int main() { 
   const int NOMBRE_MAX = 100;
   int nombre;
   srand(time(NULL));

   int nombresecret = rand()% NOMBRE_MAX + 1;
   std::cout<<"un nombre aleatoire :"<<nombresecret;
   std::cout<<"un nombre aleatoire :"<<nombresecret;
   std::cout<<"entrer le nombre";
   return 0;
   }
   int main(){

    float x,a,b;
    std::cout<<"donner un nombre entre 1 et 100 :";
    std::cin>>x;
    std::cin>>a;
    std::cout<<"le resultat de l'addition est :"<<x+a;
    std::cout<<"le resultat de la soustraction est :"<<x-b;
    std::cout<<"le resultat de la multiplication est :"<<x*a;
    std::cout<<"le resultat de la division est :"<<x/b;
    std::cout<<" votre programme se termine ici";
    int calculer(int x,int a,int b);
    return 0;
   }
