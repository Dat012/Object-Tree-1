#include "Major.h"
#include "Base.h"
#include "Heir.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

void Major::get_and_bild()
{
    Base* p = this;
    Heir* cp = nullptr;
    string major_name, parent_name, heir_name;
    cin >> major_name;
    this->set_name(major_name);
    cin >> parent_name >> heir_name;
    while (parent_name != heir_name)
    {
        if (parent_name != p->get_name())
        {
            p = cp;
        }
        cp = new Heir(p, heir_name);
        cin >> parent_name >> heir_name;
    }
    cout << this->get_name() << "\n";
    cout << this->get_name() << "  ";
}
void Major::print_finalTree()
{
    this->print_tree();
}