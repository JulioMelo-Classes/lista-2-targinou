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
 * @tparam ForwardIt iterator para o range.
 * @tparam UnaryPredicate o tipo de um função bool.
 * 
 * @param first Ponteiro para o primeiro elemento do range.
 * @param last Ponteiro para a posição logo após o último elemento do range.
 * @param p Uma função que retorna true quando uma determinada condição é satisfeita ou falso caso contrário.
 * 
 * @return
 */
 /*
 95% faltou documentar o retorno
 */
template<class ForwardIt, class UnaryPredicate>
ForwardIt partition(ForwardIt first, ForwardIt last, UnaryPredicate p)
{
    int aux;
    while (first!=last) {
        while (p(*first)) {
            first++;
            if (first==last){
                return first;
            }  
        }
        do {
            last--;
            if (first==last){
                return first;
            } 
        } 
        while (!p(*last));
        aux = *first;
        *first = *last;
        *last = aux;
        first++;
    }

  return first;

}
#endif
}