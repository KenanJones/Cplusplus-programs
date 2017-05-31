#ifndef RESOURCESET_H
#define RESOURCESET_H


class ResourceSet
{
    public:
        ResourceSet();
        ResourceSet(int,int,int,int,int);
        int getGold();
        int getWood();
        int getStone();
        int getWork();
        int getTech();
        ResourceSet operator-(ResourceSet);
        bool operator>=(ResourceSet);

    protected:

    private:
        int gold,wood,stone,work,tech;
};

#endif // RESOURCESET_H
