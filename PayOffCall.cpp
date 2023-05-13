//
// Created by Siddharth Mehrotra on 18/4/2023.
//

#include "PayOffCall.h"

PayOffCall::PayOffCall(const double K_) {
    K = K_;
}

PayOffCall::~PayOffCall() = default;

double PayOffCall::operator()(const double S) const {
    return std::max(S-K, 0.0);
}

