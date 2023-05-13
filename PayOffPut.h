//
// Created by Siddharth Mehrotra on 18/4/2023.
//

#ifndef DERIVATIVES_PRICING_ENGINE_PAYOFFPUT_H
#define DERIVATIVES_PRICING_ENGINE_PAYOFFPUT_H
#include "PayOff.h"

class PayOffPut : public PayOff {
public:
    PayOffPut(const double K_);

    ~PayOffPut() override;

    double operator()(const double S_) const override;

private:
    double K; //Strike price
};
#endif //DERIVATIVES_PRICING_ENGINE_PAYOFFPUT_H
