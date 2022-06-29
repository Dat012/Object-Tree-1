#include "Base.h"
#include "Heir.h"
#include "Major.h"
#include <iostream>
int main()
{

    Major obj (nullptr, "");
    obj.get_and_bild();
    obj.print_finalTree();

}