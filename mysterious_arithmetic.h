
using namespace std;

static const double EPS = 1e-6;

class mysterious_arithmetic {

        double x;
        double y;
        mysterious_arithmetic(double _x, double _y);

        public:

        double getX();
        double getY();

        explicit mysterious_arithmetic(double c);
        static mysterious_arithmetic IndependendVariable(double x);

        bool operator==(const mysterious_arithmetic& f) const;
        bool operator!=(const mysterious_arithmetic& f) const;
        mysterious_arithmetic operator=(const mysterious_arithmetic& f);
        mysterious_arithmetic operator+=(const mysterious_arithmetic& f);
        mysterious_arithmetic operator-=(const mysterious_arithmetic& f);
        mysterious_arithmetic operator*=(const mysterious_arithmetic& f);
        mysterious_arithmetic operator*=(double a);
        mysterious_arithmetic operator/=(const mysterious_arithmetic& f);
        mysterious_arithmetic operator/=(double a);
        mysterious_arithmetic cos() const;
        mysterious_arithmetic sin() const;
        mysterious_arithmetic exp() const;
        mysterious_arithmetic log() const;
        mysterious_arithmetic abs() const;
        mysterious_arithmetic pow(double k) const;

};

mysterious_arithmetic operator+(mysterious_arithmetic f1, const mysterious_arithmetic& f2);
mysterious_arithmetic operator-(mysterious_arithmetic f1, const mysterious_arithmetic& f2);
mysterious_arithmetic operator*(mysterious_arithmetic f1, const mysterious_arithmetic& f2);
mysterious_arithmetic operator*(mysterious_arithmetic f1, double a);
mysterious_arithmetic operator*(double a, mysterious_arithmetic f1);
mysterious_arithmetic operator/(mysterious_arithmetic f1, const mysterious_arithmetic& f2);
mysterious_arithmetic operator/(mysterious_arithmetic f1, double a);
mysterious_arithmetic cos(const mysterious_arithmetic& f);
mysterious_arithmetic sin(const mysterious_arithmetic& f);
mysterious_arithmetic exp(const mysterious_arithmetic& f);
mysterious_arithmetic log(const mysterious_arithmetic& f);
mysterious_arithmetic abs(const mysterious_arithmetic& f);
mysterious_arithmetic pow(const mysterious_arithmetic& f, double k);

