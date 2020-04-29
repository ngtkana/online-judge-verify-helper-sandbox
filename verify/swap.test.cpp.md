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


# :x: swap.test.cpp

<a href="../index.html">Back to top page</a>

* category: <a href="../index.html#5058f1af8388633f609cadb75a75dc9d">.</a>
* <a href="{{ site.github.repository_url }}/blob/master/swap.test.cpp">View this file on GitHub</a>
    - Last commit date: 2020-04-29 21:26:23+09:00


* see: <a href="https://atcoder.jp/contests/abc152/tasks/abc152_a">https://atcoder.jp/contests/abc152/tasks/abc152_a</a>


## Code

<a id="unbundled"></a>
{% raw %}
```cpp
#define PROBLEM "https://atcoder.jp/contests/abc152/tasks/abc152_a"

#include <iostream>

int main() {
    int n,m;std::cin>>n>>m;
    std::cout<<(n==m?"Yes":"No")<<'\n';
}

```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "swap.test.cpp"
#define PROBLEM "https://atcoder.jp/contests/abc152/tasks/abc152_a"

#include <iostream>

int main() {
    int n,m;std::cin>>n>>m;
    std::cout<<(n==m?"Yes":"No")<<'\n';
}

```
{% endraw %}

<a href="../index.html">Back to top page</a>

