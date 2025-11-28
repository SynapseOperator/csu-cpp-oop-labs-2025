#include "Clock.h"

int main() {
    Clock c1;        // 默认 00:00:00
    Clock c2(12,30,45);

    c1.show();
    c2.show();

    c1.setTime(23,59,59);
    c1.show();

    return 0;
}
