#include <iostream>
#include <string>

void print_pascal(int n) {
    if (n == 0) return;

    std::vector<int> v_old{1, 1};
    std::cout  << "                                   " << 1 << '\n';
    std::cout  << "                                 " << 1 << "   "<<1 << '\n';

    for (int i = 0; i < n; ++i) {
        std::vector<int> v_new;
        v_new.push_back(1);
        for (size_t j = 0; j < v_old.size() - 1; ++j) {
            v_new.push_back(v_old[j] + v_old[j + 1]);
        }
        v_new.push_back(1);
        for (size_t j = i; j < n; ++j) {
            std::cout << "   ";
        }
        for (auto i: v_new) {
            std::cout << i << "    ";
        }
        v_old = v_new;

        std::cout << '\n';
    }
}

int main() {
    print_pascal(10);
}
