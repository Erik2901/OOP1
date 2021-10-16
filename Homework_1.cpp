#include <iostream>
#include <cstdint>

///// exercise 1

class Power {
    float x=1;
    float y=1;
public:
    void setxy(float x, float y) {
        this->x = x;
        this->y = y;
    }
    void calculate() {
        std::cout << pow(x, y) << std::endl;
    }
    ~Power() {};
};

//////////

///// exercise 2

class RGBA {
    uint8_t m_red = 0;
    uint8_t m_green = 0;
    uint8_t m_blue = 0;
    uint8_t m_alpha = 255;
public:
    RGBA(uint8_t _m_red, uint8_t _m_green, uint8_t _m_blue, uint8_t _m_alpha) {
        m_red = _m_red;
        m_green = _m_green;
        m_blue = _m_blue;
        m_alpha = _m_alpha;
    }
    void print() {
        std::cout << "red:" << m_red << std::endl;
        std::cout << "green:" << m_green << std::endl;
        std::cout << "blue:" << m_blue << std::endl;
        std::cout << "alpha:" << m_alpha << std::endl;
    }
    ~RGBA() {};
};
//////

///// exercise 3

class Stack {
    int size = 10;
    int elements[10] = {0};
    int cursor = -1;
public:
    void reset() {
        cursor = -1;
        for (size_t i = 0; i < size; i++)
        {
            elements[i] = 0;
        }
    }
    bool push(int data) {
        if (cursor < size)
        {
            elements[++cursor] = data;
            return true;
        }
        else
        {
            std::cout << "Stack overflow" << std::endl;
            return false;
        }
    }
    void pop() {
        if (cursor == -1)
        {
            std::cout << "Stack is empty" << std::endl;
        }
        else {
            elements[cursor] = 0;
            cursor--;
        }
    }
    void print() {
        std::cout << "(";
        for (size_t i = 0; i < size; i++)
        {
            if (elements[i] != 0)
            {
                std::cout << elements[i] << " ";
            }
        }
        std::cout << ")" << std::endl;
    }
    ~Stack() {};
};

///////

int main()
{
    /////// exercise 1

    Power p1;
    p1.setxy(5, 2);
    p1.calculate();

    ////////

    ///// exercise 2

    RGBA color(15, 26, 135, 206);
    color.print();

    /////

    /////// exercise 3

    Stack stack;
    stack.reset();
    stack.print();

    stack.push(3);
    stack.push(7);
    stack.push(5);
    stack.print();

    stack.pop();
    stack.print();

    stack.pop();
    stack.pop();
    stack.print();

    ///////

    system("pause");
    return 0;
}
