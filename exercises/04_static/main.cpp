#include "../exercise.h"

// READ: `static` 关键字 <https://zh.cppreference.com/w/cpp/language/storage_duration>
// THINK: 这个函数的两个 `static` 各自的作用是什么？
// func static 使得函数局部访问
// 变量static  static_，表示这是一个具有静态存储期的局部变量。尽管它是在函数内部定义的，但它不会在每次函数调用时重新创建和初始化。相反，它只在第一次调用时初始化一次，之后的每次调用都会保留上次的值。因此，static_ 在多次函数调用之间保持状态。
static int func(int param) {
    static int static_ = param;
    // std::cout << "static_ = " << static_ << std::endl;
    return static_++; //先return 再++
}

int main(int argc, char **argv) {
    // TODO: 将下列 `?` 替换为正确的数字
    ASSERT(func(5) == 5, "static variable value incorrect");
    ASSERT(func(4) == 6, "static variable value incorrect");
    ASSERT(func(3) == 7, "static variable value incorrect");
    ASSERT(func(2) == 8, "static variable value incorrect");
    ASSERT(func(1) == 9, "static variable value incorrect");
    return 0;
}
