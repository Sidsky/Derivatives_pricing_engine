//
// Created by Siddharth Mehrotra on 17/4/2023.
//

#ifndef DERIVATIVES_PRICING_ENGINE_VANILLA_OPTION_H
#define DERIVATIVES_PRICING_ENGINE_VANILLA_OPTION_H

class VanillaOption {
public:
    VanillaOption();

    VanillaOption(const double& _K, const double& _r,
                  const double& _T, const double& _S,
                  const double& _sigma);

    VanillaOption(const VanillaOption& rhs);

    VanillaOption& operator=(const VanillaOption& rhs);

    VanillaOption (VanillaOption&& rhs) noexcept;

    VanillaOption& operator=(VanillaOption&& rhs) noexcept ;

    virtual ~VanillaOption();

    double getK() const;
    double getr() const;
    double getT() const;
    double getS() const;
    double getsigma() const;

    double calc_call_price() const;
    double calc_put_price() const;

private:
    void init();
    void copy (const VanillaOption& rhs);

    double K; // Strike price
    double r; // Risk-free rate
    double T; // Maturity time
    double S; // Underlying asset price
    double sigma; // Volatility of the underlying asset
    double N(double d1) const;
};
#endif //DERIVATIVES_PRICING_ENGINE_VANILLA_OPTION_H
