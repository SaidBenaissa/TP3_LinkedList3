//
//  main.cpp
//  TP3_LinkedList3
//
//  Created by Benaissa on 16/08/2017.
//  Copyright © 2017 Benaissa. All rights reserved.
//


#include <iostream>

using namespace std;
typedef struct Element{
    int contenu;
    Element *suivant;
}Element;
int est_vide(Element *L){
    if(L==NULL) return 1;
    return 0;
    
}

void afficherTableu(int *p){
// T represent une adress
    printf("Affichage du tableau\n");
    for (int i=0; i<5; i++) {
        printf("%d - %i \n",(p+i),*(p+i));
        printf("\n");
    }
}

void afficherListe(Element *p){
    Element *pt;
    for (pt=p; pt!=NULL; pt=pt->suivant) {
        printf(" %d -- %i \n",pt,pt->contenu);
    }
}

Element* insertFin(int cont, Element *L){
    //1- Creer le nouveau element
    Element *pt;
    Element *position;
    Element *nouveau;
    nouveau=(Element*)malloc(sizeof(Element));
    nouveau->contenu=cont;
//    printf("%d -- %i",nouveau,nouveau->contenu);
    
    //2- tester si la liste est vide alors le nouveau element va representer la liste
    int v;
    v=est_vide(L);
    if (v==1) {
        // Traitement mon L celui le nouveau element
       // printf("\n Vide. Le nouveau est la tete de la liste \n");
        return nouveau;
    }else{
        // Je dois se positionner a la fin de la liste
      //  printf("\n Non vide. Trouver la position \n");
        pt=L;
        while (pt!=NULL) {
            position=pt;
            pt=pt->suivant;
                    }
        position->suivant=nouveau;
       return L;
//        if (position!=NULL) {
//            printf("\n Ma position est non null \n");
//            return pt;
//            //Je sors de la boucle
//        }
    }
   // return L;
}

    //3- Attacher le nouveau element a ma liste L( le representent de ma liste)

int main(int argc,char *argv[]) {
    
    Element *L;
    L=NULL;
    
    
    
    // Inserer
    L=insertFin(5,L);
    L=insertFin(10,L);
    L=insertFin(7,L);
    L=insertFin(8,L);
    L=insertFin(12,L);
    // Afficher le contenue d'une liste chainee
    printf("Affichage de la liste \n");
    afficherListe(L);
    
    //supprimer
    
    //rchercher
    
    printf("\n");
    return 0;
}
