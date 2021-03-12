#include <iostream> 
#include <iomanip>

using namespace std;

template <typename B>
void swap(B * const e1, B * const e2){
   B temp = *e1;
   *e1 = *e2;
   *e2 = temp;
}

template<typename A>
void selectionSort( A * const arr, const int size ){
   int min_index; 
   for ( int i = 0; i < size - 1; i++ ){
      min_index = i;
      for ( int j = i + 1; j < size; j++ )
         if ( arr[ j ] < arr[ min_index ] )
            min_index = j;
      swap( &arr[ i ], &arr[ min_index ] );
   }
}

int main()
{
   const int intArraySize = 8;
   int a[ intArraySize ] = {0,-5,45,9,12,6,-10,3};

   cout << "Unsorted array:\n";

   for ( int i = 0; i < intArraySize; ++i )
      cout << setw( 4 ) << a[ i ];

   selectionSort( a, intArraySize );

   cout << "\nSorted array:\n";

   for ( int j = 0; j < intArraySize; ++j )
      cout << setw( 4 ) << a[ j ];

   cout << endl;

   const int floatArraySize = 12;
   float b[floatArraySize] = {16.2, 5.6, 4.9, 8.1, 7.345, 9.999, 9.2, 2.3, 0, -3.4, -10, -1};

   cout << "Unsorted Array:\n";

   for ( int i = 0; i < floatArraySize; ++i )
      cout << setw( 8 ) << b[ i ];

   selectionSort( b, floatArraySize );

   cout << "\nSorted Array:\n";

   for ( int j = 0; j < floatArraySize; ++j )
      cout << setw( 8 ) << b[ j ];

   cout << endl;
}
