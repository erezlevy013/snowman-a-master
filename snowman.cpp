#include "snowman.hpp"
#include <iostream>
#include <stdexcept>
#include <array>
using namespace std;

const int SIZE = 8, I_SIZE=7 ;
#define M(x)(x%10)
#define DIV(x)(x/10)


namespace ariel 
{

    string snowman(int x)
    {
        int i=I_SIZE;

        //int arr[SIZE]={0};
        array <int, SIZE> arr={0};
        
        while(x>0)
        {
            if(M(x) > 4 || M(x) < 1 || i < 0)
            {
                throw std::invalid_argument("Number is not allowed!" );
                break;
            }
            arr.at(i)=M(x);
            x=DIV(x);
            i--;
        }
       /* for(int j=0; j<8; j++)
            cout<<arr.at(j);
        */
        if (i != -1) 
        {
            throw std::invalid_argument("Number is not allowed!" );
        }

        return "good";
    };


}