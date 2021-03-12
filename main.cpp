#include <iostream> 
#include <iomanip>
using namespace std;

template <typename B>
void swap(B * const element1Ptr, B * const element2Ptr){
   B hold = *element1Ptr;
   *element1Ptr = *element2Ptr;
   *element2Ptr = hold;
}

template<typename A>
void selectionSort( A * const array, const int size ){
   int smallest; 
   for ( int i = 0; i < size - 1; ++i ){
      smallest = i;
      for ( int index = i + 1; index < size; ++index )
         if ( array[ index ] < array[ smallest ] )
            smallest = index;
      swap( &array[ i ], &array[ smallest ] );
   }
}

int main()
{
   const int arraySize = 10;
   int a[ arraySize ] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };

   cout << "Data items in original order\n";

   for ( int i = 0; i < arraySize; ++i )
      cout << setw( 4 ) << a[ i ];

   selectionSort( a, arraySize );

   cout << "\nData items in ascending order\n";

   for ( int j = 0; j < arraySize; ++j )
      cout << setw( 4 ) << a[ j ];

   cout << endl;


   
   const int floatArraySize = 12;
   float b[floatArraySize] = {16.2, 5.6, 4.9, 8.1, 7.345, 9.999, 9.2, 2.3, 0, -3.4, -10, -1};

   cout << "Data items in original order\n";

   for ( int i = 0; i < floatArraySize; ++i )
      cout << setw( 8 ) << b[ i ];

   selectionSort( b, floatArraySize );

   cout << "\nData items in ascending order\n";

   for ( int j = 0; j < floatArraySize; ++j )
      cout << setw( 8 ) << b[ j ];

   cout << endl;
}
