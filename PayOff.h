//
// Created by Siddharth Mehrotra on 18/4/2023.
//

#ifndef DERIVATIVES_PRICING_ENGINE_PAYOFF_H
#define DERIVATIVES_PRICING_ENGINE_PAYOFF_H
#include <algorithm>

class PayOff {
public:
    PayOff() = default;;

    virtual ~PayOff() = default;

    virtual double operator() (const double S) const = 0;

};
#endif //DERIVATIVES_PRICING_ENGINE_PAYOFF_H
