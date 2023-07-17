# CS106B Programming Abstractions

[Course website](https://web.stanford.edu/class/archive/cs/cs106b/cs106b.1238/)

## L2 C++ Fundamentals

### 2.1 Function

1. 函数声明的顺序是有影响的，必须先声明后调用
2. 可以先声明函数，但不实现，放到后面实现
3. 调用函数时，参数传递是值传递，相当于拷贝一份值传入函数，函数内部的改动不影响外部变量存的值

### 2.2 Control Flow

**Conditionals**

- Operator
  - and: a && b
  - or: a || b
  - not: !a
- Expression:
  - \>
  - \>=
  - <
  - <=
  - ==
  - !=

```cpp
if (condition) {
    // do something
} else if (condition2) {
    // do something
} else {
    // do something else
}
```

**While Loops**

```cpp
while (condition) {
    // do something
}
```

**For Loops**

```cpp
for (int i = 0; i < 10; i++) {
    cout << i << endl;
}
```

## L3 Strings

**String**

- a sequence of characters
- Marked by ""

**Char**

- a single character
- Marked by ''
- Can be represented by a number (ASCII code)

**Looping through a string**

```cpp
string word = "apple";

for (int i=0; i < word.length(); i++) {}

// or
for (char letter : word) {}
```

