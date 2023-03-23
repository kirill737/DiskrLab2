#include <iostream>
#include <vector>

long long fact(int a) {
    long long ans = 1;
    for (int i = 1; i <= a; i++) {
        ans *= i;
    }
    return ans;
}
long long Pow(int a, int n) { //���������� � �������
    if (n == 0) return 1;
    if (n % 2 == 0)
        return Pow((a * a), n / 2);
    else
        return (a * Pow(a, n - 1));
}

//����� ���������� ��� ����������
int Ank(int n, int k) {
    int ans = fact(n) / fact(n - k);
    
    return ans;
    
}
//����� ���������� � ������������
long long Bnk(int n, int k) {
    long long ans = pow(n, k);
    return ans;
}
//����� ������������ � ������������
long long Pn_rep(int n, int k, std::vector<int> vec_n) {
    long long chis = 1, znam = 1;
    chis = fact(n);
    for (int i = 0; i < k; i++) {
        znam *= fact(vec_n[i]);
    }
    long long ans = chis / znam;
    return ans;
}
//����� ������������ ��� ����������
long long Pn(int n) {
    long long ans = fact(n);
    return ans;
}
//����� ��������� � ������������ 
int Cnk_rep(int n, int k) {
    int ans = fact(k + n - 1) / (fact(n - 1) * fact(k));
    return ans;
}
//����� ��������� ��� ����������
int Cnk(int n, int k) {
    int ans = fact(n) / (fact(n - k) * fact(k));
    return ans;
}
void Cnk() {
    std::cout << "������ ����� ��������� ��� ����������\n";
    int n = 0, k = -1;
    std::cout << "������� n:";
    std::cin >> n;
    while (n <= 0) {
        std::cout << "����������� ������ n ������ ���� > 0 ������� �������� n:\n";
        std::cin >> n;
    }
    std::cout << "������� k:";
    std::cin >> k;
    while ((k < 0) || (k > n)) {
        std::cout <<  (k >= 0);
        std::cin >> k;
    }
    std::cout << "�����: " << Cnk(n, k) << std::endl;
    // int num = 0;
    // std::cout << "�������� ������:\n";
    // std::cout << "1. ��������� ������ \n";
    // std::cout << "2. ��������� � ���� \n";
    // std::cout << "������� ������ �����:";
    // std::cin >> num;
    // while ((num <= 0) || (num > 2)) {
    //     std::cout << "����� �������������� �����.\n";
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
    //     std::cout << "����� �������������� �����.\n";
    //     break;
    // }
}
void Cnk_rep() {
    std::cout << "������ ����� ��������� � ������������\n";
    int n = 0, k = -1;
    std::cout << "������� n:";
    std::cin >> n;
    while (n <= 0) {
        std::cout << "����������� ������ n ������ ���� > 0 ������� �������� n:\n";
        std::cin >> n;
    }
    std::cout << "������� k:";
    std::cin >> k;
    while ((k < 0) || (k > n)) {
        std::cout <<  (k >= 0);
        std::cin >> k;
    }
    std::cout << "�����: " << Cnk_rep(n, k) << std::endl;
}
void Ank() {
    std::cout << "������ ����� ��������� ��� ����������\n";
    int n = 0, k = -1;
    std::cout << "������� n:";
    std::cin >> n;
    while (n <= 0) {
        std::cout << "����������� ������ n ������ ���� > 0 ������� �������� n:\n";
        std::cin >> n;
    }
    std::cout << "������� k:";
    std::cin >> k;
    while ((k < 0) || (k > n)) {
        std::cout << (k >= 0);
        std::cin >> k;
    }
    std::cout << "�����: " << Ank(n, k) << std::endl;
}
void Bnk() {
    std::cout << "������ ����� ��������� ��� ����������\n";
    int n = 0, k = -1;
    std::cout << "������� n:";
    std::cin >> n;
    while (n <= 0) {
        std::cout << "����������� ������ n ������ ���� > 0 ������� �������� n:\n";
        std::cin >> n;
    }
    std::cout << "������� k:";
    std::cin >> k;
    while ((k < 0) || (k > n)) {
        std::cout << "����������� ������ k ������ ���� >= 0 ������� �������� k:\n";
        std::cin >> k;
    }
    std::cout << "�����: " << Bnk(n, k) << std::endl;
}
void Pn() {
    std::cout << "������ ����� ��������� ��� ����������\n";
    int n = 0, k = -1;
    std::cout << "������� n:";
    std::cin >> n;
    while (n <= 0) {
        std::cout << "����������� ������ n ������ ���� > 0 ������� �������� n:\n";
        std::cin >> n;
    }
    std::cout << "�����: " << Pn(n) << std::endl;
}
void Pn_rep() {
    std::cout << "������ ����� ��������� ��� ����������\n";
    int n = 0, k = 2;
    std::vector<int> vec_n;
    std::cout << "������� n:";
    std::cin >> n;
    while (n <= 0) {
        std::cout << "����������� ������ n ������ ���� > 0 ������� �������� n:\n";
        std::cin >> n;
    }
    std::cout << "������� k:";
    std::cin >> k;
    while ((k < 0) || (k > n)) {
        std::cout << "����������� ������ k ������ ���� >= 0 ������� �������� k:\n";
        std::cin >> k;
    }
    int vrem = 0, sum = 0;
    std::cout << "������� " << k << " �����, ����� ������ � ����� ������\n";
    for (int i = 0; i < k; i++) {
        vrem = 0;
        std::cout << i + 1 << ") ";
        std::cin >> vrem;
        while (vrem <= 0) {
            std::cout << "����������� ������, n[i] ������ ���� > 0.\n������� �������� n[i]:\n" << i + 1 << ") ";
            std::cin >> vrem;
        }
        vec_n.push_back(vrem);
        sum += vrem;
    }
    if (sum != n) {
        std::cout << sum <<"����������� ������, ����� n[i] ������ ���� ����� n:\n\n\n";
        Pn_rep();
    }
    std::cout << "�����: " << Pn_rep(n, k, vec_n) << std::endl;
}
void mainMenu() {
    int num = 0;
    // std::cout << "�������� ������:\n";
    std::cout << "1. ����� ��������� ��� ���������� \n";
    std::cout << "2. ����� ��������� c ������������ \n";
    std::cout << "3. ����� ���������� ��� ���������� \n";
    std::cout << "4. ����� ���������� � ������������ \n";
    std::cout << "5. ����� ������������ ��� ���������� \n";
    std::cout << "6. ����� ������������ � ���������� \n";
    std::cout << "7. ��������� ��������� \n";
    std::cout << "������� ������ �����:";
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
        std::cout << "����� ���������� ���������\n";
        return;
    
    default:
        std::cout << "����� �������������� �����.\n";
        break;
    }
    mainMenu();
    
}
int main() {
    setlocale(LC_ALL, "Rus");
    mainMenu();
}
