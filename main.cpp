#include <iostream>
/*
 * 8.3 C++的引用、C++的布尔类型
 *   Ⅰ、C++的引用：&
 *   Ⅱ、C++的布尔类型
 *      布尔类型在C语言没有，是C++的，有true和false
 * */
//在子函数内修改主函数的普通变量
//void modify_num(int &b){
//    b=b+1;
//}
//int main() {
//    int a=10;
//    modify_num(a);
//    printf("after modify_num a=%d\n",a);
//    return 0;
//}

//子函数内修改主函数中的一级指针变量
//void modify_pointer(int *&p,int *q){
//    p=q;
//}
//int main(){
//    int *p=NULL;
//    int a=10;
//    int *q=&a;
//    modify_pointer(p,q);
//    printf("after modify_pointer *p=%d\n",*p);
//    return 0;
//}

//C++的布尔类型
int main(){
    bool a=true;//1
    bool b=false;//0
    printf("a=%d,b=%d\n",a,b);//a=1,b=0
    return 0;
}