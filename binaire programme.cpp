#include<stdio.h>


//la function de calcule la somme de 2 binaire
// resulta de type int
int rest=0;


int  sTw(int a,int b, int k)
{
    int r=0;
    rest=0;
    if(a+b+k==1)
    {
        r=1;
    }

    if(a+b+k==2)
        {
           rest=1;
           r=0;
        }else if(a+b+k==3)
        {
           rest=1;
           r=1;
        }

    return r;
}

int Somme(int a[3],int b[3],int c[4]){
    for (int i = 2;i >= 0;i--)
    {
        c[i+1]=sTw(a[i],b[i], rest);

    }
    if(rest==1)
    {
        c[0]=rest;

    }
    if(rest==1)
    {
        printf("%d",c[0]);
    }
    for (i = 1 ; i <4; i++)
      {

        printf("%d",c[i]);
        }
	
}


/*first function*/
/*function type INT*/

int bin(){
	
}



// fonction int
// get int (biin)
// return int (_innt)
int bintoint (int biin)
{
    int _innt;

    return _innt;
}

int main(){

	return 0;
	

}

