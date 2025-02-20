#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <ctime>

void showMenu();
void calculator();
void reverseText();
void randomNumber();

int main() {
    int choice = 0;
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    do {
        showMenu();
        std::cout << "\nWybierz opcje: ";
        std::cin >> choice;

        switch (choice) {
            case 1: calculator(); break;
            case 2: reverseText(); break;
            case 3: randomNumber(); break;
            case 4: std::cout << "\nDo widzenia!" << std::endl; break;
            default: std::cout << "\nNieprawidlowy wybor!" << std::endl; break;
        }
    } while (choice != 4);

    return 0;
}

void showMenu() {
    std::cout << "\n===== MENU =====";
    std::cout << "\n1. Kalkulator";
    std::cout << "\n2. Odwroc tekst";
    std::cout << "\n3. Losowa liczba (1-100)";
    std::cout << "\n4. Wyjscie";
    std::cout << "\n================" << std::endl;
}

void calculator() {
    double a, b;
    char op;
    std::cout << "\nPodaj wyrazenie (np. 5 + 3): ";
    std::cin >> a >> op >> b;

    switch (op) {
        case '+': std::cout << "Wynik: " << a + b << std::endl; break;
        case '-': std::cout << "Wynik: " << a - b << std::endl; break;
        case '*': std::cout << "Wynik: " << a * b << std::endl; break;
        case '/':
            if (b != 0)
                std::cout << "Wynik: " << a / b << std::endl;
            else
                std::cout << "Blad: Dzielenie przez zero!" << std::endl;
            break;
        default: std::cout << "Nieznany operator!" << std::endl; break;
    }
}

void reverseText() {
    std::string text;
    std::cout << "\nWpisz tekst do odwrocenia: ";
    std::cin.ignore();
    std::getline(std::cin, text);
    std::reverse(text.begin(), text.end());
    std::cout << "Odwrocony tekst: " << text << std::endl;
}

void randomNumber() {
    int num = std::rand() % 100 + 1;
    std::cout << "\nLosowa liczba: " << num << std::endl;
}
