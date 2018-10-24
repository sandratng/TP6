#ifndef SOMMET_H_INCLUDED
#define SOMMET_H_INCLUDED
#include "coords.h"

class Sommet
{
private :
    Coords m_position;

public :
    Sommet (double x, double y);
    ~Sommet();
    void afficher() const;
    void saisir();
    Coords getPosition() const;
    /// a faire
    //void dessiner(Svgfile& svgout);
};

#endif // SOMMET_H_INCLUDED

