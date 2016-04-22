#include <cmath>
#include "mysterious_arithmetic.h"

mysterious_arithmetic::mysterious_arithmetic(double _x, double _y){ x=_x;y=_y;}

double mysterious_arithmetic::getX() {return x;}

double mysterious_arithmetic::getY() {return y;}

mysterious_arithmetic::mysterious_arithmetic(double c): x(c), y(0) {}

mysterious_arithmetic mysterious_arithmetic::IndependendVariable(double x) { return mysterious_arithmetic(x,1); }

bool mysterious_arithmetic::operator==(const mysterious_arithmetic& f) const {
    return (x-f.x<EPS)&(y-f.y<EPS);
}
bool mysterious_arithmetic::operator!=(const mysterious_arithmetic& f) const{
    return (x-f.x>EPS)||(y-f.y>EPS);
}
mysterious_arithmetic mysterious_arithmetic::operator=(const mysterious_arithmetic& f){
    x=f.x;
    y=f.y;
    return *this;
}
mysterious_arithmetic mysterious_arithmetic::operator+=(const mysterious_arithmetic& f){
    x=x+f.x;
    y=y+f.y;
    return *this;
}
mysterious_arithmetic mysterious_arithmetic::operator-=(const mysterious_arithmetic& f){
    x=x-f.x;
    y=y-f.y;
    return *this;
}
mysterious_arithmetic mysterious_arithmetic::operator*=(const mysterious_arithmetic& f){
    double t=x;
    x=x*f.x;
    y=y * f.x + t * f.y;
    return *this;
}
mysterious_arithmetic mysterious_arithmetic::operator*=(double a){
    x=x*a;
    y=y*a;
    return *this;
}
mysterious_arithmetic mysterious_arithmetic::operator/=(const mysterious_arithmetic& f) {
    double t=x;
    x=x / f.x;
    y=(y * f.x - t * f.y) / f.x / f.x;
    return *this;
}
mysterious_arithmetic mysterious_arithmetic::operator/=(double a){
    x=x/a;
    y=y/a;
    return *this;
}

mysterious_arithmetic mysterious_arithmetic::cos() const  {
    return mysterious_arithmetic(std::cos(x), -std::sin(x)*y);
}
mysterious_arithmetic mysterious_arithmetic::sin() const {
    return mysterious_arithmetic(std::sin(x), std::cos(x)*y);
}
mysterious_arithmetic mysterious_arithmetic::exp() const {
    return mysterious_arithmetic(std::exp(x), std::exp(x)*y);
}
mysterious_arithmetic mysterious_arithmetic::log() const {
    return mysterious_arithmetic(std::log(x), y/x);
}
mysterious_arithmetic mysterious_arithmetic::abs() const {
    double s = (x > 0) ? 1 : -1;
    return mysterious_arithmetic( s*x, s*y);
}
mysterious_arithmetic mysterious_arithmetic::pow(double k) const {
    return mysterious_arithmetic(std::pow(x,k), k*std::pow(x,k-1)*y);
}

mysterious_arithmetic operator+(mysterious_arithmetic f1, const mysterious_arithmetic& f2) {
    return f1+=f2;
}

mysterious_arithmetic operator-(mysterious_arithmetic f1, const mysterious_arithmetic& f2) {
    return f1-=f2;
}

mysterious_arithmetic operator*(mysterious_arithmetic f1, const mysterious_arithmetic& f2) {
    return f1*=f2;
}

mysterious_arithmetic operator*(mysterious_arithmetic f1, double a) {
    return f1*=a;
}

mysterious_arithmetic operator*(double a, mysterious_arithmetic f1) {
    return f1*=a;
}

mysterious_arithmetic operator/(mysterious_arithmetic f1, const mysterious_arithmetic& f2) {
    return f1/=f2;
}

mysterious_arithmetic operator/(mysterious_arithmetic f1, double a) {
    return f1/=a;
}


mysterious_arithmetic cos(const mysterious_arithmetic& f){
    return f.cos();
}

mysterious_arithmetic sin(const mysterious_arithmetic& f){
    return f.sin();
}

mysterious_arithmetic exp(const mysterious_arithmetic& f){
    return f.exp();
}

mysterious_arithmetic log(const mysterious_arithmetic& f){
    return f.log();
}

mysterious_arithmetic abs(const mysterious_arithmetic& f){
    return f.abs();
}

mysterious_arithmetic pow(const mysterious_arithmetic& f, double k){
    return f.pow(k);
}
