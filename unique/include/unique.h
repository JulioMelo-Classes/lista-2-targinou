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
 * @tparam InputIt iterator para o range.
 * @tparam Equal o tipo de um função bool.
 * 
 * @param first Ponteiro para o primeiro elemento do range.
 * @param last Ponteiro para a posição logo após o último elemento do range.
 * @param eq Uma função que retorna true se o elemento é igual ao segundo, ou falso caso contrário.@param eq Uma função que retorna true se o elemento é igual ao segundo, ou falso caso contrário.
 * 
 * @return Um iterator para o elemento logo após o último elemento do range após o processamento.
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
