// binaryGap.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//A binary gap within a positive integer N is any maximal sequence of consecutive zeros that is 
//surrounded by ones at both ends in the binary representation of N.
//
//For example, number 9 has binary representation 1001 and contains a binary gap of length 2. 
//The number 529 has binary representation 1000010001 and contains two binary gaps :
//one of length 4 and one of length 3. The number 20 has binary 
//representation 10100 and contains one binary gap of length 1. 
//The number 15 has binary representation 1111 and has no binary gaps.
//The number 32 has binary representation 100000 and has no binary gaps.
//
//Write a function ://
//int solution(int N);//
//that, given a positive integer N, returns the length of its longest binary gap.
//The function should return 0 if N doesn't contain a binary gap.
//
//For example, given N = 1041 the function should return 5, because N has binary representation 10000010001 
//and so its longest binary gap is of length 5. Given N = 32 the function should return 0, 
//because N has binary representation '100000' and thus no binary gaps.
//
//Write an efficient algorithm for the following assumptions ://
//N is an integer within the range[1..2, 147, 483, 647].

#include <iostream>
using namespace std;

int solution(int N) {
    int result;
    int myNumber = N;
    int binaryGapCounter;
    bool myflag = false;
    result = 0;
    binaryGapCounter = 0;

    
    for (int i = 0; i < 32; i++)
    {
        if ((myNumber & 0x01) == 1) {
            if (binaryGapCounter > 0) {
                result = binaryGapCounter;
            }
                
            myflag = true;
            binaryGapCounter = 0;

        }
        else {
            if(myflag)
                binaryGapCounter++;    
        }

        myNumber = myNumber >> 1;
        

    }
    


    return result;

}

int main()
{
    int N = 1041;
    cout << "Binary Gap ==\n"<<solution(N);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
