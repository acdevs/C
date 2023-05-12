#include<stdio.h>

// static int func (int); //parameter as static, not allowed

int main(){
    static a = 10; //static as a local variable, allowed
    //why? it defaults to int.
    // static static int a; //a static variable prefixed with static, not allowed
}
