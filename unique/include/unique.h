#ifndef GRAAL_H
#define GRAAL_H

#include <utility>
using std::pair;
#include <iterator>
using std::distance;
#include <algorithm>
using std::sort;

namespace graal {

/*! 
 * TODO: documentação no estilo doxygen
 */
template<class InputIt, class Equal>
InputIt unique( InputIt first, InputIt last, Equal eq )
{
    
    InputIt result;
    bool test;

    for (InputIt i = first; i != last; i++)
    {
        test = false;
        for (InputIt j = first; j != i; j++)
        {
        
            if((distance(i, j) != 0) && (eq(*i,*j) == true))
            {
                test = true; 
            }
        }
        
        if (test == false)
        {
            result = i;
            result++;
        }
        
    }
    last = result;
    return last;

    
    
    
}

}
#endif
