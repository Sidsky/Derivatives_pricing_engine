//
// Created by Siddharth Mehrotra on 18/4/2023.
//

#include "PayOffPut.h"

PayOffPut::PayOffPut(const double K_) {
    K = K_;
}

PayOffPut::~PayOffPut() = default;

double PayOffPut::operator()(const double S_) const {
    return std::max(S_-K, 0.0);
}