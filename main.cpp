#include "piece.cpp"
#include "plateau.cpp"
#include "joueur.cpp"
#include "partie.cpp"
#include <iostream>


int main(){

   cout<<"Debut du jeu\n"<<endl;

    Plateau plateau;
    Joueur j1(Noir);
    Joueur j2(Blanc);

    j1.print_piece_left();

    j1.poserPiece('R', Position(0,0), plateau,0);
    j2.poserPiece('R', Position(1,0), plateau,1);

    j1.print_piece_left();
    //j2.poserPiece('A', Position(15,0), plateau,2);
    j2.poserPiece('A', Position(1,1), plateau,2);
    j1.poserPiece('H', Position(-1,-1), plateau,3);
    j1.poserPiece('H', Position(-1,0), plateau,4);
    plateau.print_board();
    plateau.deplacerPiece(Position(-1,-1), Position(0,1),Noir);
    plateau.print_board();
    /*
    Partie partie(j1, j2,plateau,0);
    partie.jouer();
    cout<<"\nFin du jeu"<<endl;
    */

    return 0;
}

