#include "sommet.h"
#include "coords.h"
#include <iostream>

Sommet::Sommet(double x, double y):
    m_position {x,y}
{}

Sommet::~Sommet()
{

}

void Sommet::afficher() const
{
        m_position.afficher();
}

Coords Sommet::getPosition() const
{
    return m_position;
}

void Sommet::saisir()
{
    m_position.saisir();
}

/*void Sommet::dessiner(Svgfile& svgout)
{
    //svgout.addTriangle(100,300, 200,300, 150,250, "green", 5, "orange");

}*/
