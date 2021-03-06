#pragma once
#ifndef __HPX_COLLECTIVES_SERIALIZER__
#define __HPX_COLLECTIVES_SERIALIZER__

#include <type_traits>
#include <string>

#include "serialization_hpx.hpp"
#include "serialization_boost.hpp"

namespace hpx { namespace utils { namespace collectives { namespace serialization {

#ifdef HPX
    using backend = hpx;
#else
    using backend = boost;
#endif

} } } } // end namespaces

#endif
