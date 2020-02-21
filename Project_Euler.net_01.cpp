#include <iostream>
/*
--------------- PROJECT EULER 1 ----------------------------------------
If we list all the natural numbers below 10 that are multiples of 3 or 5,
we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.
*/
//1. Find sum of multiples of 3
//2. Find sum of multiples of 5
//3. Number 15 is gonna apear in both sets, so we need to make sure we don't count it twice
//3.5 -> We could use logical operator for that
//3.75 Or create set from "1." without multiples of 5
//4. Add the numbers from the functions to get the answer

int Multiples3WO5()
{
    //Multiples of 3 without couting multiples of 5
    int m_3{};
    for (int i = 1; i < 1000; i++)
    {
        if (i % 3 == 0 && i % 5 != 0) m_3 += i;
    }
    return m_3;
}

int Multiples5()
{
    int m_5 = 0;
    for (int i = 1; i < 1000; i++)
    {
        if (i % 5 == 0) m_5 += i;
    }
    return m_5;
}

int main()
{  
    std::cout<< Multiples3WO5() + Multiples5();
}
