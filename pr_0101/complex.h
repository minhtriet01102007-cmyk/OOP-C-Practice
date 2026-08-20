class Complex{
    private:
        double realPart;
        double imaginaryPart;
        void setComplexNumber(double r, double i);
    public:
        Complex(double r = 0.0 , double i = 0.0);
        Complex addition(const Complex& a);
        Complex subtraction(const Complex& a);
        void printComplex();
};
