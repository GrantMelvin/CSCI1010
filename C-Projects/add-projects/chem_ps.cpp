#include<iostream>
#include<string>
#include<fstream>
#include<algorithm>

using namespace std ;

void readline(){
    //will be used to retrieve individual element data
}

int main()
{
    //creates a method in which to output the csv text
    string MyText ;

    //selects periodic table as the readable file
    ifstream MyReadFile("Periodic Table of Elements.csv") ;

    // Reads: 
    // (Property)(Column Number)
    //                          Atomic Number(1) -- Element(2) -- Symbol(3) -- Atomic Mass(4) -- Number of Neutrons(5)
    //                          Number of Protons(6) -- Number of Electrons(7) -- Periodic Group(8) -- Phase(9) -- Radiotactive(10)
    //                          Natural(11) -- Metal(12) -- Nonmetal(13) -- Metalloid(14) -- Type(15) -- Atomic Radius(16) -- Electronegativity(17)
    //                          Firstionization(18) -- Density(19) -- Melting Point(20) -- Boiling Point(21) -- Number of Isotopes(22)
    //                          Discoverer(23) -- Year(24) -- Number of Shells(25) -- Number of Valence Electrons(26)

    //loops through the file to output
    while(getline (MyReadFile, MyText))
    {
        cout << MyText << endl ; 
    }

    //closes the file
    MyReadFile.close() ;



    return 0 ;
}