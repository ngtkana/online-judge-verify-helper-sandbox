#define PROBLEM "https://judge.yosupo.jp/problem/aplusb"

#include <iostream>

#include "swap.hpp"

int main() {
    int x,y;std::cin>>x>>y;
    swap(x,y);
    std::cout<<x+y<<'\n';
}
