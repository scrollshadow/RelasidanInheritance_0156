#include <iostream>
#include <string>

#include "jantung.h"
#include "manusia.h"

int main()
{
    manusia *varManusia = new manusia("Markus");
    delete varManusia;
    return 0;
}