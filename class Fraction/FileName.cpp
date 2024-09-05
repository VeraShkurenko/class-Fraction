#include <iostream>
using namespace std;

class Fraction
{
private:
    int numerator;
    int denominator;

public:
    Fraction() : numerator(0), denominator(1)
    {

    }

    Fraction(int a, int b)
    {
        numerator = a;
        if (b == 0) {
            cout << "Ошибка: знаменатель не может быть равен 0. Установлено значение 1." << endl;
            denominator = 1;
        }
        else {
            denominator = b;
        }
    }

    Fraction(int a) : numerator(a), denominator(1) {}


    void SetNumerator(int a)
    {
        numerator = a;
    }

    void SetDenominator(int b)
    {
        if (b == 0) {
            cout << "Ошибка: знаменатель не может быть равен 0. Установлено значение 1." << endl;
            denominator = 1;
        }
        else {
            denominator = b;
        }
    }

    int GetNumerator()
    {
        return numerator;
    }

    int GetDenominator()
    {
        return denominator;
    }

    // Метод для ввода данных
    void Input(int a, int b)
    {
        numerator = a;
        if (b == 0) {
            cout << "Ошибка: знаменатель не может быть равен 0. Установлено значение 1." << endl;
            denominator = 1;
        }
        else {
            denominator = b;
        }
    }


    void OutPut()
    {
        cout << numerator << "/" << denominator << endl;
    }

    Fraction Sum(const Fraction& b)
    {
        int new_numerator = numerator * b.denominator + b.numerator * denominator;
        int new_denominator = denominator * b.denominator;
        return Fraction(new_numerator, new_denominator);
    }

    Fraction Minus(const Fraction& b)
    {
        int new_numerator = numerator * b.denominator - b.numerator * denominator;
        int new_denominator = denominator * b.denominator;
        return Fraction(new_numerator, new_denominator);
    }

    Fraction Mult(const Fraction& b)
    {
        int new_numerator = numerator * b.numerator;
        int new_denominator = denominator * b.denominator;
        return Fraction(new_numerator, new_denominator);
    }

    Fraction Division(const Fraction& b)
    {
        if (b.numerator == 0) {
            cout << "Ошибка: деление на ноль!" << endl;
            return Fraction(0, 1);
        }
        int new_numerator = numerator * b.denominator;
        int new_denominator = denominator * b.numerator;
        return Fraction(new_numerator, new_denominator);
    }
};

int main()
{
    Fraction f1(1, 2);
    f1.OutPut();

    Fraction f2(3, 4);
    f2.OutPut();

    Fraction f3 = f1.Sum(f2);
    f3.OutPut();

    Fraction f4 = f1.Minus(f2);
    f4.OutPut();

    Fraction f5 = f1.Mult(f2);
    f5.OutPut();

    Fraction f6 = f1.Division(f2);
    f6.OutPut();

    return 0;
}
