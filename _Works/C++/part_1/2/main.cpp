#include<iostream>
//#include<Windows.h>
#include"Point&Circle"

int main()
{
    // initialization
    Circle A( "A" , 3 , 1 , 1 ) , B( "B" , 2 , 4 , 4 ) ;
    
    // relation between Circle A and B
    State relation = A.relation(B) ;
    if( relation == disjoint )
        std::cout << "A and B is disjoint!\n" ;
    else if( relation == intersect )
        std::cout << "A and B is intersect!\n" ;
    else
        std::cout << "A and B is crossing!\n" ;
    system("pause") ;

    return 0 ;
}