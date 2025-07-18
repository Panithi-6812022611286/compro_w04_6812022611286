#include <stdio.h> 

int main() {             
// char คือ ใช้เก็บตัวอักษรเเรกของชื่อ            
    char nameInitial = 'C';
// int คือ ใช้เก็บตัวเลขจำนวนเต็ม อายุ
    int age = 18;
// float คือ ใช้เก็บตัวเลขที่เป็ยทศนิยม น้ำหนัก
    float weight = 80.5;
// char[] คือ ใช้เก็บค่าตัวแปรที่เป็นคำ เพศ
    char gender[] = "Male";

    printf("nameInitial: %c\n", nameInitial);
    printf("age: %d\n", age);
    printf("weight: %.1f\n", weight);
    printf("gender: %s\n", gender);
    return 0;
}
