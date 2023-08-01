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
- is mutable

**Char**

- a single character
- Marked by ''
- Can be represented by a number (ASCII code)
- is const, cannot be changed

**Access by index**

```cpp
string s = "apple";
s[0] = "A";
cout << s << endl;

>>> Apple
```

**Concat**

- YES: string + string
- YES: string + char
- NO: char + char

> Note: the following statement is INVALID!
>
> `string s = "apple" + "s"`
> 
> But this will work:
> `string s = string("apple") + "s";`
> 
> Also, this: `string s = "apple"; s += 's'`

**Looping through a string**

```cpp
string word = "apple";

for (int i=0; i < word.length(); i++) {}

// or
for (char letter : word) {}
```

## L4 Vector and grids

### vector

- a list of same type elements
- can be shrunk and extended

> 💡Tips: Pass-by-value vs. Pass-by-reference
> 
> **Pass-by-value**:
> - will make a copy
> - won't change the original one.
> 
> **Pass-by-ref**:
> - won't make a copy (very usefully when facing a large data structure)
> - the original one would be edited
> - provide a workaround for **multiple return values**

**Reference**

Use & (ampersand) to indicate it's a reference to a certain data type.

- double&: the reference of a double variable

When to use ref:

- edit data
- avoid big data copy
- return multiple values

# Games

Course: [BiliBili Link](https://www.bilibili.com/video/BV16h4y1d766/?spm_id_from=333.880.my_history.page.click&vd_source=0f6b43e09abf3b0bbe74b006f5977c60)

## 1. Tetromino

**wstring**

> `std::string` is a basic_string templated on a `char`, 
> and `std::wstring` on a `wchar_t`.

**L"foobar"** 

- a wstring.

**关于指向数组的指针**

- 当数组本身不打算变化的时候，直接声明数组变量；
- 当希望改变数组内部，并且需要经常修改数组的时候，使用指向数组的指针；

**三元表达式**

```c++
bool a = (1+1 == 2) ? true : false;
// equals to
if (1+1==2) a = true;
else a = false
```

