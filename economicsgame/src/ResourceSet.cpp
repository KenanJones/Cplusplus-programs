#include "ResourceSet.h"

ResourceSet::ResourceSet(){}
ResourceSet::ResourceSet(int g, int w, int s, int k, int t)
{
    gold = g;
    wood = w;
    stone = s;
    work = k;
    tech = t;
}

int ResourceSet::getGold(){return gold;}
int ResourceSet::getWood(){return wood;}
int ResourceSet::getStone(){return stone;}
int ResourceSet::getWork(){return work;}
int ResourceSet::getTech(){return tech;}
ResourceSet ResourceSet::operator-(ResourceSet rs)
{
    return ResourceSet(
                       gold - rs.getGold(),
                       wood - rs.getWood(),
                       stone - rs.getStone(),
                       work - rs.getWork(),
                       tech - rs.getTech());
}
bool ResourceSet::operator>=(ResourceSet rs)
{
    if (
        gold >= rs.getGold() &&
        wood >= rs.getWood() &&
        stone >= rs.getStone() &&
        work >= rs.getWork() &&
        tech >= rs.getTech())
            return true;
    else return false;
}
