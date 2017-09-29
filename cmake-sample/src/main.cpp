#include <iostream>
#include <string>

template< typename T >
void unused( T && )
{
}

// clang++ -Wall -g main.cpp -o sample_clang
// g++-7 -Wall -g main.cpp -o sample_gcc

int main( int argc, char* argv[] )
{
    unused( argc );
    unused( argv );

    std::string result = "Hello World";
    std::cout << result << std::endl;
    
    return 1;
}

