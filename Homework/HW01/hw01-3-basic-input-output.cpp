/*
    เขียนโปรแกรมรับ "ชื่อ" จากผู้ใช้ และแสดงผลบนหน้าจอดังผลลัพธ์ด้านล่างต่อไปนี้ 
    
    Test case:
        First Name: Aomsin
        Last Name: AomMoney
    Output:
        Aomsin AomMoneys TC, RMUTL, Chiang Mai, Thailand

    Test case:
        First Name: ABC
        Last Name: DEF
    Output:
        ABD DEFs TC, RMUTL, Chiang Mai, Thailand
*/
#include <stdio.h>

int main() {
    
    char ABC[20], DEF[20] ;
    
    printf( "First Name: \n" ) ;
    scanf( "%s", &ABC);
    
    printf( "Last Name: \n") ;
    scanf( "%s", &DEF);
   
    printf( "%s %ss TC, RMUTL, Chiang Mai, Thailand", ABC, DEF ) ;

    
}