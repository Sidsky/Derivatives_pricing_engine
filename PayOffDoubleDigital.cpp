//
// Created by Siddharth Mehrotra on 18/4/2023.
//

#include "PayOffDoubleDigital.h"

PayOffDoubleDigital::PayOffDoubleDigital(const double U_, const double D_) {
    U = U_;
    D = D_;
}

PayOffDoubleDigital::~PayOffDoubleDigital() = default;

double PayOffDoubleDigital::operator()(const double S) const {

    if (S >= D and S <= U)
        return 1.0;
    else
        return 0.0;
}