#include <stdio.h>
const int GLOBAL_RATE = 20;  
void calculate() {
    const int LOCAL_BONUS = 50;
    printf("GLOBAL_RATE =  %d\n", GLOBAL_RATE);
    printf("LOCAL_BONUS =  %d\n", LOCAL_BONUS);
}

int main() {
    calculate();
    printf("GLOBAL_RATE =  %d\n", GLOBAL_RATE);
    return 0;
}
// ค่าคงที่ GLOBAL_RATE คือ Global constant variable จะเป็นค่าคงที่ที่ใช้ได้ทั่วทั้งโปรแกรม ในขณะที่ LOCAL_BONUS คือ Local constand variable จะใช้ได้แค่ในฟังก์ชันที่กำหนดเท่านั้น
// เมื่อเปลี่ยน GOBAL_RATE เป็น 20 หรือ LOCAL_BONUS เป็น 80 จะทeให้ค่าที่แสดงผลเปลี่ยนเป็น 20 หรือ 80
// เหตุผลที่ LOCAL_BONUS ไม่สามารถถูกเรียกใช้ใน main() ไม่ได้เพราะ LOCAL_BONUS ถูกประกาศภายในฟังก์ชัน calculate() แสดงผลได้เเค่ในฟังก์ชัน calculate() จึงทำให้ไม่สามารถเรียกใช้ในฟังก์ชัน main() ไม่ได้
// สรุป คือ Global constant variable จะสามารถใช้ได้ทั่วทั้งโปรแกรม ในขณะที่ Local constant variable จะสามารถใช้ได้เเค่ในฟังก์ชันที่ประกาศเท่านั้น