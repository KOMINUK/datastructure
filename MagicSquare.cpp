#include <iostream>
#define MAX_SIZE 100
using namespace std;

void magic(int n);

int main()

{
  int numdata;
 
  cout << "size" << endl;
  cin >> numdata;
 
  magic(numdata);
  return 0;
}

void magic(int n)
{

  int sqr[MAX_SIZE][MAX_SIZE]={{0},{0}};

  int k , l;

  sqr[0][(n-1)/2]=1;
  int key = 2;

  int i = 0 ;

  int j = (n-1)/2;


  if((n%2)!=0)
    {
	    while(key<=n*n)
       		 {

       		 if(i-1<0) 
         	 k=n-1;   

         	 else
   	  	 k=i-1;


		 if(j-1<0) 

            	 l=n-1;

          	 else

             	 l=j-1
		
	 if(sqr[k][l])

            i=(i+1)%n;  

          else
          {

            i=k;

            j=l;
          }

        sqr[i][j]=key;

        key++;

      }



      for(int x = 0  ; x < n ; x++) 
      {

        for(int y = 0 ; y < n ; y++)

        cout << sqr[x][y] << " ";

        cout << endl;

      }

    }

else

  cout << "" << endl;

}

