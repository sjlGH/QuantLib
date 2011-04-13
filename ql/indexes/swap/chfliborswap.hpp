/* -*- mode: c++; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*- */

/*
 Copyright (C) 2008, 2011 Ferdinando Ametrano

 This file is part of QuantLib, a free-software/open-source library
 for financial quantitative analysts and developers - http://quantlib.org/

 QuantLib is free software: you can redistribute it and/or modify it
 under the terms of the QuantLib license.  You should have received a
 copy of the license along with this program; if not, please email
 <quantlib-dev@lists.sf.net>. The license is also available online at
 <http://quantlib.org/license.shtml>.

 This program is distributed in the hope that it will be useful, but WITHOUT
 ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 FOR A PARTICULAR PURPOSE.  See the license for more details.
*/

/*! \file chfliborswap.hpp
    \brief %CHF %Libor %Swap indexes
*/

#ifndef quantlib_chfliborswap_hpp
#define quantlib_chfliborswap_hpp

#include <ql/indexes/swapindex.hpp>

namespace QuantLib {

    //! %ChfLiborSwapIsdaFix index base class
    /*! %CHF %Libor %Swap indexes fixed by ISDA in cooperation with
        Reuters and Intercapital Brokers at 11am London.
        Annual 30/360 vs 6M Libor, 1Y vs 3M Libor.
        Reuters page ISDAFIX4 or CHFSFIX=.

        Further info can be found at <http://www.isda.org/fix/isdafix.html> or
        Reuters page ISDAFIX.

    */
    class ChfLiborSwapIsdaFix : public SwapIndex {
      public:
        ChfLiborSwapIsdaFix(const Period& tenor,
                            const Handle<YieldTermStructure>& h =
                                    Handle<YieldTermStructure>());
        ChfLiborSwapIsdaFix(const Period& tenor,
                            const Handle<YieldTermStructure>& forwarding,
                            const Handle<YieldTermStructure>& discounting);
    };

}

#endif
