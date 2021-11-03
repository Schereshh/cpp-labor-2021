//
// Created by Scheresh on 2021-10-27.
//

#include "Polynominal.h"

Polynomial::Polynomial(int degree, const double *coefficients){
    this->capacity = degree+1;
    this->coefficients = new double [capacity];
    for(int i=0;i<this->capacity;i++){
        this->coefficients[i] = coefficients[i];
    }
}

Polynomial::~Polynomial() {
    delete [ ] coefficients;
}

ostream &operator<<(ostream &out, const Polynomial &what) {
    for(int i=0; i<what.capacity;i++){
        out << what.coefficients[i] << " ";
    }
    return out;
}

Polynomial::Polynomial(const Polynomial &that) {

}

Polynomial::Polynomial(Polynomial &&that) {

}


int Polynomial::degree() const {
    return 0;
}

double Polynomial::evaluate(double x0) const {
    double P = this->coefficients[0];
    for(int i=1;i<this->capacity; i++){
        P = P * x0 + this->coefficients[i];
    }
    return P;
}

Polynomial Polynomial::derivative() const {
    return Polynomial(0, nullptr);
}

double Polynomial::operator[](int index) const {
    return 0;
}
