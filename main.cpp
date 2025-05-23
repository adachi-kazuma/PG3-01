#include <cstdio>
using namespace std;

// 動物クラス（抽象クラス）
class Animal {
public:
    virtual void sound() const = 0;  // 純粋仮想関数
};

// 犬クラス
class Dog : public Animal {
public:
    void sound() const override {
        printf("イヌ鳴き声：ワン\n");
    }
};

// 猫クラス
class Cat : public Animal {
public:
    void sound() const override {
        printf("ネコ鳴き声:ニャー\n");
    }
};

int main() {
    Animal* animal1 = new Dog();  // 犬のインスタンスを作成
    Animal* animal2 = new Cat();  // 猫のインスタンスを作成

    animal1->sound();  // 仮想関数 sound を呼び出し（犬）
    animal2->sound();  // 仮想関数 sound を呼び出し（猫）

    delete animal1;
    delete animal2;

    return 0;
}
