#include<stdio.h>
#include <math.h>

//la function de calcule la somme de 2 binaire
// resulta de type int
int Somme(int bin1[4],int bin2[4]){


}


/*first function*/
/*function type INT*/

int bintoint(int biin)
{
    int _innt = 0, temp = 0, remainder;
    while (biin!=0)
    {
        remainder = biin % 10;
        biin = biin / 10;
        _innt = _innt+ remainder*pow(2,temp);
        temp++;
    }
    return _innt;

}

int main(){

    int biin;
    printf("Enter a binary number: ");
    scanf("%ld", &biin);
    printf("Equivalent decimal number is: %d", bintoint(biin));
	return 0;


}

