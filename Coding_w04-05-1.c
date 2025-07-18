#include <stdio.h>

void counterCall() {
    static int counter = 0; 
    counter++;
    printf("Call Function: Counter = %d\n", counter);
}

int main() {
    printf("Starting function calls...\n");
    counterCall();
    printf("After first call:\n");
    counterCall();
    return 0;
}
// ผลลัพธ์ที่ได้จะเป็นการ printf ครั้งที่ 1 นับครั้งที่ 1, เเละ printf ครั้งที่ 2 และครั้งที่ 2 เพราะใช้ตัวแปร static