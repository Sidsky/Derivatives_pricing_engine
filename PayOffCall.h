//
// Created by Siddharth Mehrotra on 18/4/2023.
//

#ifndef DERIVATIVES_PRICING_ENGINE_PAYOFFCALL_H
#define DERIVATIVES_PRICING_ENGINE_PAYOFFCALL_H
#include "PayOff.h"

class PayOffCall : public PayOff {
public:
    PayOffCall(const double K_);

    ~PayOffCall() override;

    double operator()(const double S) const override;

private:
    double K; //Strike price
};
#endif //DERIVATIVES_PRICING_ENGINE_PAYOFFCALL_H
