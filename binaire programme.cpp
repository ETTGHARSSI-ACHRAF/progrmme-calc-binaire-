#include<stdio.h>
#include <math.h>

//la function de calcule la somme de 2 binaire
// resulta de type int
int Somme(int bin1[4],int bin2[4]){


}


/*first function*/
/*function type INT*/

int bin(){

}



// fonction int
// get int (biin)
// return int (_innt)

int binaryToDecimal(int binarynum)
{
    int decimalnum = 0, temp = 0, remainder;
    while (binarynum!=0)
    {
        remainder = binarynum % 10;
        binarynum = binarynum / 10;
        decimalnum = decimalnum + remainder*pow(2,temp);
        temp++;
    }
    return decimalnum;
}

int main(){

    int binarynum;
    printf("Enter a binary number: ");
    scanf("%ld", &binarynum);

    printf("Equivalent decimal number is: %d", binaryToDecimal(binarynum));
	return 0;


}

