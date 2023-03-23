#include <iostream>
#include <vector>

long long fact(int a) {
    long long ans = 1;
    for (int i = 1; i <= a; i++) {
        ans *= i;
    }
    return ans;
}
long long Pow(int a, int n) { //возведение в степень
    if (n == 0) return 1;
    if (n % 2 == 0)
        return Pow((a * a), n / 2);
    else
        return (a * Pow(a, n - 1));
}

//Число размещений без повторений
int Ank(int n, int k) {
    int ans = fact(n) / fact(n - k);
    
    return ans;
    
}
//Число размещений с повторениями
long long Bnk(int n, int k) {
    long long ans = pow(n, k);
    return ans;
    
}
//Число перестановок с повторениями
long long Pn_rep(int n, int k, std::vector<int> vec_n) {
    long long chis = 1, znam = 1;
    chis = fact(n);
    for (int i = 0; i < k; i++) {
        znam *= fact(vec_n[i]);
    }
    long long ans = chis / znam;
    return ans;
}
//Число перестановок без повторений
long long Pn(int n) {
    long long ans = fact(n);
    return ans;
}
//Число сочетаний с повторениями 
int Cnk_rep(int n, int k) {
    int ans = fact(k + n - 1) / (fact(n - 1) * fact(k));
    return ans;
}
//Число сочетаний без повторений
int Cnk(int n, int k) {
    int ans = fact(n) / (fact(n - k) * fact(k));
    return ans;
}
void Cnk() {
    std::cout << "Расчёт числа сочетаний без повторений\n";
    int n = 0, k = -1;
    std::cout << "Введите n:";
    std::cin >> n;
    while (n <= 0) {
        std::cout << "Некоректные данные n должно быть > 0 введите повторно n:\n";
        std::cin >> n;
    }
    std::cout << "Введите k:";
    std::cin >> k;
    while ((k < 0) || (k > n)) {
        std::cout <<  (k >= 0);
        std::cin >> k;
    }
    std::cout << "Ответ: " << Cnk(n, k) << std::endl;
    // int num = 0;
    // std::cout << "Выбирите задачу:\n";
    // std::cout << "1. Повторить расчёт \n";
    // std::cout << "2. Вернуться в меню \n";
    // std::cout << "Введите нужный пункт:";
    // std::cin >> num;
    // while ((num <= 0) || (num > 2)) {
    //     std::cout << "Введён несуществующий пункт.\n";
    //     std::cin >> num;
    // }
    // switch (num)
    // {
    // case 1:
    //     /* code */
    //     break;
    // case 2:
    //     break;
    // default:
    //     std::cout << "Введён несуществующий пункт.\n";
    //     break;
    // }
}
void Cnk_rep() {
    std::cout << "Расчёт числа сочетаний с повторениями\n";
    int n = 0, k = -1;
    std::cout << "Введите n:";
    std::cin >> n;
    while (n <= 0) {
        std::cout << "Некоректные данные n должно быть > 0 введите повторно n:\n";
        std::cin >> n;
    }
    std::cout << "Введите k:";
    std::cin >> k;
    while ((k < 0) || (k > n)) {
        std::cout <<  (k >= 0);
        std::cin >> k;
    }
    std::cout << "Ответ: " << Cnk_rep(n, k) << std::endl;
}
void Ank() {
    std::cout << "Расчёт числа размещений без повторений\n";
    int n = 0, k = -1;
    std::cout << "Введите n:";
    std::cin >> n;
    while (n <= 0) {
        std::cout << "Некоректные данные n должно быть > 0 введите повторно n:\n";
        std::cin >> n;
    }
    std::cout << "Введите k:";
    std::cin >> k;
    while ((k < 0) || (k > n)) {
        std::cout <<  (k >= 0);
        std::cin >> k;
    }
    std::cout << "Ответ: " << Ank(n, k) << std::endl;
}
void Bnk() {
    std::cout << "Расчёт числа размещений с повторениями\n";
    int n = 0, k = -1;
    std::cout << "Введите n:";
    std::cin >> n;
    while (n <= 0) {
        std::cout << "Некоректные данные n должно быть > 0 введите повторно n:\n";
        std::cin >> n;
    }
    std::cout << "Введите k:";
    std::cin >> k;
    while ((k < 0) || (k > n)) {
        std::cout << "Некоректные данные k должно быть >= 0 введите повторно k:\n";
        std::cin >> k;
    }
    std::cout << "Ответ: " << Bnk(n, k) << std::endl;
}
void Pn() {
    std::cout << "Расчёт числа перестановок без повторений\n";
    int n = 0, k = -1;
    std::cout << "Введите n:";
    std::cin >> n;
    while (n <= 0) {
        std::cout << "Некоректные данные n должно быть > 0 введите повторно n:\n";
        std::cin >> n;
    }
    std::cout << "Ответ: " << Pn(n) << std::endl;
}
void Pn_rep() {
    std::cout << "Расчёт числа перестановок с повторениями\n";
    int n = 0, k = 2;
    std::vector<int> vec_n;
    std::cout << "Введите n:";
    std::cin >> n;
    while (n <= 0) {
        std::cout << "Некоректные данные n должно быть > 0 введите повторно n:\n";
        std::cin >> n;
    }
    std::cout << "Введите k:";
    std::cin >> k;
    while ((k < 0) || (k > n)) {
        std::cout << "Некоректные данные k должно быть >= 0 введите повторно k:\n";
        std::cin >> k;
    }
    int vrem = 0, sum = 0;
    std::cout << "Введите " << k << " чисел, вводя каждое с новой строки\n";
    for (int i = 0; i < k; i++) {
        vrem = 0;
        std::cout << i + 1 << ") ";
        std::cin >> vrem;
        while (vrem <= 0) {
            std::cout << "Некоректные данные, n[i] должно быть > 0.\nВведите повторно n[i]:\n" << i + 1 << ") ";
            std::cin >> vrem;
        }
        vec_n.push_back(vrem);
        sum += vrem;
    }
    if (sum != n) {
        std::cout << sum <<"Некоректные данные, сумма n[i] должна быть равна n:\n\n\n";
        Pn_rep();
    }
    std::cout << "Ответ: " << Pn_rep(n, k, vec_n) << std::endl;
}
void mainMenu() {
    int num = 0;
    // std::cout << "Выбирите задачу:\n";
    std::cout << "1. Число сочетаний без повторений \n";
    std::cout << "2. Число сочетаний c повторениями \n";
    std::cout << "3. Число размещений без повторений \n";
    std::cout << "4. Число размещений с повторениями \n";
    std::cout << "5. Число перестановок без повторений \n";
    std::cout << "6. Число перестановок с повторений \n";
    std::cout << "7. Завершить программу \n";
    std::cout << "Введите нужный пункт:";
    std::cin >> num;
    std::cout << std::endl;

    switch (num)
    {
    case 1:
        Cnk();
        break;
    case 2:
        Cnk_rep();
        break;
    case 3:
        Ank();
        break;
    case 4:
        Bnk();
        break;
    case 5:
        Pn();
        break;
    case 6:
        Pn_rep();
        break;
    case 7:
        std::cout << "Конец выполнения программы\n";
        return;
    
    default:
        std::cout << "Введён несуществующий пункт.\n";
        break;
    }
    mainMenu();
    
}
int main() {
    setlocale(LC_ALL, "Rus");
    mainMenu();
}
