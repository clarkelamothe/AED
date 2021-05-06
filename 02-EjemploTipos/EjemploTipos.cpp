#include <iostream>
#include <string>

int main()
{
    // Tipo bool
    bool a = true;
    assert(a && true);
    assert(a || false);
    assert(a == !false);

    assert(a != false);
    assert(a == true);

    assert(a + true);
    assert(a - false);
    assert(a * true);
    assert(a / true);

    // Tipo char
    char c = 'C';
    assert(c * c != 1);
    assert(c - c == 0);
    assert(c + c != 1);
    assert(c / c == 1);

    // Tipo unsigned
    unsigned u = 2;
    assert(u && true);
    assert(u || false);
    assert(u == 2);
    assert(u != 1);

    assert(u + true);
    assert(u - false);
    assert(u * true);
    assert(u / true);

    assert(u > 1);
    assert(u >= 2);
    assert(u < 3);
    assert(u <= 3);

    // Tipo unsigned
    int i = -2;
    assert(i || false);
    assert(i && true);
    assert(i == -2);
    assert(i != 1);

    assert(i + true);
    assert(i - false);
    assert(i * true);
    assert(i / true);

    assert(i < 1);
    assert(i <= 2);
    assert(i > -3);
    assert(i >= -3);

    // Tipo double
    double d = 2.6;
    assert(d || false);
    assert(d && true);
    assert(d == 2.6);
    assert(d != 1);

    assert(d + true);
    assert(d - false);
    assert(d * true);
    assert(d / true);

    assert(d < 3);
    assert(d <= 2.7);
    assert(d > -3);
    assert(d >= -3);

    // Tipo string
    std::string first_name = "Clarke";
    std::string last_name = "Lamothe";
    std::string full_name = "Clarke Lamothe";

    assert(first_name == "Clarke");
    assert(first_name != last_name);
    assert(first_name + " " + last_name == full_name);
    assert(first_name <= last_name);
    assert(first_name < last_name);
    assert(last_name >= first_name);
    assert(last_name > first_name);
}
