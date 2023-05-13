//
// Created by Siddharth Mehrotra on 18/4/2023.
//

#ifndef DERIVATIVES_PRICING_ENGINE_PAYOFFDOUBLEDIGITAL_H
#define DERIVATIVES_PRICING_ENGINE_PAYOFFDOUBLEDIGITAL_H
#include "PayOff.h"

class PayOffDoubleDigital : public PayOff {
public:
    PayOffDoubleDigital(const double U_, const double D_);

    virtual ~PayOffDoubleDigital();

    double operator() (const double S) const override;

private:
    double U; // Upper strike price
    double D; // Lower strike price
};
#endif //DERIVATIVES_PRICING_ENGINE_PAYOFFDOUBLEDIGITAL_H
