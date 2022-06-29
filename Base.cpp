#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <string>
#include "Base.h"

using namespace std;

Base::Base(Base* parent, string name)
{
    this->parent = parent;
    this->name = name;
    if (parent != 0)
    {
        parent->heirs.push_back(this);
    }
}
void Base::set_name(string name)
{
    this->name = name;
}
string Base::get_name()
{
    return name;
}
void Base::print_tree() //pocmotret
{
    for (int i = 0; i < heirs.size(); i++)
    {
        cout << heirs[i]->get_name();
        if (i != heirs.size() - 1)
        {
            cout << "  ";
        }
    }
    for (int j = 0; j < heirs.size(); j++)
    {
        if (heirs[j]->heirs.size() != 0)
        {
            cout << "\n";
            cout << heirs[j]->get_name() << "  ";
            heirs[j]->print_tree();
        }
    }
}
void Base::set_parent(Base* parent)
{
    if (this->parent != nullptr)
    {
        this->parent->heirs.erase(find(this->parent-> heirs.begin(),this->parent->heirs.end(), this));
    }
    this->parent = parent;
    parent->heirs.push_back(this);
}

Base* Base::get_parent()
{
    return parent;
}
