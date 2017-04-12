/*
 * reet_tuple_enumerator.hpp
 *
 *  Created on: Apr 13, 2017
 *      Author: ois
 */

#ifndef INCLUDE_REET_TUPLE_ENUMERATOR_HPP_
#define INCLUDE_REET_TUPLE_ENUMERATOR_HPP_

#include <cstddef>

template<typename TupleT, std::size_t I, typename FromT, typename F, F f>
void set(TupleT& tuple, FromT const& t) {
	get<I>(tuple) = f(t);
}

#endif /* INCLUDE_REET_TUPLE_ENUMERATOR_HPP_ */
