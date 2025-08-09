#include <stdio.h>
#include "demo.h"
#include "unity.h"

void setUp(){}
void tearDown(){}

void test_sum(){
    TEST_ASSERT_EQUAL(9,sum(6,3));
    TEST_ASSERT_EQUAL(100,sum(69,31));
}

void test_product(){
    TEST_ASSERT_EQUAL(6,product(2,3));
    TEST_ASSERT_EQUAL(100,product(10,10));
}

void test_division(){
    TEST_ASSERT_EQUAL(2,division(20,10));
    TEST_ASSERT_EQUAL(100,division(1000,10));
}

void test_subtract(){
    TEST_ASSERT_EQUAL(5,subtract(10,5));
    TEST_ASSERT_EQUAL(100,subtract(101,1));
}

void test_square(){
    TEST_ASSERT_EQUAL(9,square(3));
    TEST_ASSERT_EQUAL(100,square(10));
}

int main(){
    
    int a=20, b= 10,c,d,e,f,g;
    c=sum(a,b);
    d=product(a,b);
    e=division(a,b);
    f=subtract(b,a);
    g=square(a);

    printf("sum is : %d\n",c);
    printf("product is : %d\n",d);
    printf("division is : %d\n",e);
    printf("subtract is : %d\n",f);
    printf("square is : %d\n",g);

UNITY_BEGIN();

    RUN_TEST(test_sum);
    RUN_TEST(test_product);
    RUN_TEST(test_division);
    RUN_TEST(test_subtract);
    RUN_TEST(test_square);


return UNITY_END();

}