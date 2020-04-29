---
layout: default
---

<!-- mathjax config similar to math.stackexchange -->
<script type="text/javascript" async
  src="https://cdnjs.cloudflare.com/ajax/libs/mathjax/2.7.5/MathJax.js?config=TeX-MML-AM_CHTML">
</script>
<script type="text/x-mathjax-config">
  MathJax.Hub.Config({
    TeX: { equationNumbers: { autoNumber: "AMS" }},
    tex2jax: {
      inlineMath: [ ['$','$'] ],
      processEscapes: true
    },
    "HTML-CSS": { matchFontHeight: false },
    displayAlign: "left",
    displayIndent: "2em"
  });
</script>

<script type="text/javascript" src="https://cdnjs.cloudflare.com/ajax/libs/jquery/3.4.1/jquery.min.js"></script>
<script src="https://cdn.jsdelivr.net/npm/jquery-balloon-js@1.1.2/jquery.balloon.min.js" integrity="sha256-ZEYs9VrgAeNuPvs15E39OsyOJaIkXEEt10fzxJ20+2I=" crossorigin="anonymous"></script>
<script type="text/javascript" src="../assets/js/copy-button.js"></script>
<link rel="stylesheet" href="../assets/css/copy-button.css" />


# :heavy_check_mark: swap.test.cpp

<a href="../index.html">Back to top page</a>

* category: <a href="../index.html#5058f1af8388633f609cadb75a75dc9d">.</a>
* <a href="{{ site.github.repository_url }}/blob/master/swap.test.cpp">View this file on GitHub</a>
    - Last commit date: 2020-04-29 23:09:08+09:00


* see: <a href="https://judge.yosupo.jp/problem/aplusb">https://judge.yosupo.jp/problem/aplusb</a>


## Depends on

* :heavy_check_mark: <a href="../library/swap.hpp.html">Swapping <small>(swap.hpp)</small></a>


## Code

<a id="unbundled"></a>
{% raw %}
```cpp
#define PROBLEM "https://judge.yosupo.jp/problem/aplusb"

#include <iostream>

#include "swap.hpp"

int main() {
    int x,y;std::cin>>x>>y;
    swap(x,y);
    std::cout<<x+y<<'\n';
}

```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "swap.test.cpp"
#define PROBLEM "https://judge.yosupo.jp/problem/aplusb"

#include <iostream>

#line 1 "swap.hpp"
void swap(int& x, int& y) {
    x^=y;
    y^=x;
    x^=y;
}

/*
 * @brief Swapping
 *
 * @docs swap.md
 */
#line 6 "swap.test.cpp"

int main() {
    int x,y;std::cin>>x>>y;
    swap(x,y);
    std::cout<<x+y<<'\n';
}

```
{% endraw %}

<a href="../index.html">Back to top page</a>

