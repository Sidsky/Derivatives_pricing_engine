//
// Created by Siddharth Mehrotra on 17/4/2023.
//
#ifndef DERIVATIVES_PRICING_ENGINE_VANILLA_OPTION_CPP
#define DERIVATIVES_PRICING_ENGINE_VANILLA_OPTION_CPP

#include "VANILLA_OPTION.h"
#include <cmath>

void VanillaOption::init() {
    K = 100; // Strike price
    r = 0.05; // 5% interest rate
    T = 1.0; // One year until maturity
    S = 100.0; // Option is "at the money" as spot equals the strike
    sigma = 0.2; //Volatility is 20%
}

void VanillaOption::copy(const VanillaOption &rhs) {
    K = rhs.getK();
    r = rhs.getr();
    T = rhs.getT();
    S = rhs.getS();
    sigma = rhs.getsigma();
}

VanillaOption::VanillaOption() { init(); }

VanillaOption::VanillaOption(const double& _K, const double& _r, const double& _T, const double& _S,
                             const double& _sigma) {
    K = _K;
    r = _r;
    T = _T;
    S = _S;
    sigma = _sigma;
}

VanillaOption::VanillaOption(const VanillaOption &rhs) {
    copy(rhs);
}

VanillaOption& VanillaOption::operator=(const VanillaOption &rhs) {
    if (this == &rhs) return *this;
    copy(rhs);
    return *this;
}

VanillaOption::VanillaOption(VanillaOption&& rhs) noexcept = default;

VanillaOption& VanillaOption::operator=(VanillaOption&& rhs) noexcept = default;

VanillaOption::~VanillaOption() = default;

double VanillaOption::getK() const { return K; }

double VanillaOption::getr() const { return r; }

double VanillaOption::getT() const { return T; }

double VanillaOption::getS() const { return S; }

double VanillaOption::getsigma() const { return sigma; }

double VanillaOption::calc_call_price() const {
    double sigma_sqrt_T = sigma * sqrt(T);
    double d_1 = (log(S/K) + (r + sigma*sigma*0.5) * T) /sigma_sqrt_T;
    double d_2 = d_1 - sigma_sqrt_T;
    return S * N(d_1) - K * exp(-r*T) * N(d_2);
}

double VanillaOption::calc_put_price() const {
    double sigma_sqrt_T = sigma * sqrt (T) ;
    double d_1 = ( log(S/K) + (r + sigma * sigma * 0.5 ) * T ) / sigma_sqrt_T;
    double d_2 = d_1 - sigma_sqrt_T;
    return K * exp(-r*T) * N(-d_2) - S * N(-d_1);
}

double VanillaOption::N(double d1) const {
    return 0;
}

#endif //DERIVATIVES_PRICING_ENGINE_VANILLA_OPTION_CPP

