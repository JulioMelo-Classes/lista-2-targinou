#ifndef GRAAL_H
#define GRAAL_H

#include <utility>
using std::pair;
#include <iterator>
using std::distance;
#include <algorithm>
using std::sort;
using std::prev;
using std::next;

namespace graal {

/*! 
 * Exemplo de documentação seguindo o formato Doxygen
 *
 * @tparam Itr iterator para o range.
 * @tparam Compare o tipo de uma função bool(const T &a, const T &b)
 *
 * @param first Ponteiro para o primeiro elemento do range
 * @param last Ponteiro para a posição logo após o último elemento do range
 * @param cmp A função de comparação que retorna true quando o primeiro parâmetro é menor do que o segundo
 *
 * @return Um std::pair contendo o menor e maior elemento, nesta ordem
 *
 */
template <typename Itr, typename Compare >
std::pair<Itr, Itr> minmax( Itr first, Itr last, Compare cmp )
{
    Itr aux1 = first, aux2 = first;

    for (Itr i = first; i != last; i++)
    {
        if(cmp(*i, *aux1) == true){
            aux1 = i;
        }
    }
    for (Itr i = first; i != last; i++)
    {
        if(cmp(*i, *aux2) == false){
            aux2 = i;
        }
    }

    return std::make_pair( aux1, aux2 );
}

}
#endif
