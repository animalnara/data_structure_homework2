#include <stdio.h>

int main(){
    int i; //정수형 i 선언
    int *ptr; //정수형 포인터 변수 ptr 선언
    int **dptr; //정수형 포인터를 가리키는 포인터 변수 dptr 선언

    i = 1234;

    printf("-----[강태광] [2021041098] -----\n");

    printf("[checking values before ptr = &i] \n");
    printf("value of i == %d\n", i); //i의 value값이 출력됩니다. 1234
    printf("address of i == %p\n", &i); //&i, i의 주소값이 출력됩니다. 000000264C5FF79C
    printf("value of ptr == %p\n", ptr); // ptr의 값이 출력됩니다, ptr = &i 이전이므로 0000000000000000가 출력되었습니다.
    printf("address of ptr == %p\n", &ptr); //ptr의 주소값이 출력됩니다, 주소값은 존재하므로 000000264C5FF790가 출력되었습니다.


    /////////////////////////////////////////////////////
    ptr = &i;   /* ptr is now holding the address of i */

    printf("\n[checking values after ptr = &i] \n");
    printf("value of i == %d\n", i); //ptr에 i의 주소값만 넣었으므로 i의 value값은 1234 그대로 출력됩니다.
    printf("address of i == %p\n", &i); //i의 주소값도 000000264C5FF79C로 동일합니다.
    printf("value of ptr == %p\n", ptr); //ptr의 값이 출력됩니다, &i를 넣었으므로 &i의 값과 동일합니다(000000264C5FF79C)
    printf("address of ptr == %p\n", &ptr); //ptr의 주소값이 출력됩니다, 000000264C5FF790으로 ptr의 주소값은 동일합니다.
    printf("value of *ptr == %d\n", *ptr); //포인터 ptr의 값은 i의 주소값이 가리키는 value를 출력하고 1234가 출력됩니다.


    /////////////////////////////////////////////////////
    dptr = &ptr; /*dptr is now holding the address of ptr*/

    printf("\n[checking values after dptr = &ptr] \n");
    printf("value of i == %d\n", i); //i는 dptr에 ptr의 주소값을 넣었으므로 여전히 1234로 출력됩니다.
    printf("address of i == %p\n", &i); //i의 주소값도 ptr에 들어있는 값이 &i이기 때문에 똑같이 000000264C5FF79C로 출력됩니다.
    printf("value of ptr == %p\n", ptr); //value도 위와 같은 이유로 000000264C5FF79C가 동일하게 출력됩니다.
    printf("address of ptr == %p\n", &ptr); //address 또한 &i의 주소가 들어있기때문에 000000264C5FF790가 동일하게 출력됩니다.
    printf("value of *ptr == %d\n", *ptr); //*ptr, 포인터는 value값을 가리키고 있으므로 1234가 출력됩니다.
    printf("value of dptr == %p\n", dptr); //dptr의 값은 &ptr의 값이 들어있으므로 000000264C5FF790의 value값이 출력됩니다.
    printf("address of dptr == %p\n", &dptr); //dptr의 주소는 새 주소이므로 000000264C5FF788이 출력됩니다.
    printf("value of *dptr == %p\n", *dptr); //*dptr은 value는 기존 value인 dpr(&i)의 000000264C5FF79C가 출력됩니다.
    printf("value of **dptr == %d\n", **dptr); //**dptr value는 *dptr이 가리키는 변수의 값을 가져오므로 1234가 출력됩니다.


    /////////////////////////////////////////////////////
    *ptr = 7777; /*changing the value of *ptr */

    printf("\n[after *ptr = 7777] \n");
    printf("value of i == %d\n", i); //*ptr은 i의 값을 가리키고있었으므로 기존 1234에서 7777로 들어갔습니다.
    printf("value of *ptr == %d\n", *ptr); //*ptr도 value값을 가리키고있었는데 같이 갱신되어 7777로 들어갔습니다.
    printf("value of **dptr == %d\n", **dptr); //**dptr의 값도 *dptr이 기존 dpr(&i)였으며 여기에 있는 값이 7777로 들어갔습니다.


    /////////////////////////////////////////////////////
    **dptr = 8888; /*changing the value of &&dptr */

    printf("\n[after **dptr = 8888] \n");
    printf("value of i == %d\n", i); //**dptr의 값을 변경할 경우 *dptr이 기존 value인 dpr(&i)였으며 여기에 있는 값이 7777에서 8888로 되었으므로 8888이 출력됩니다.
    printf("value of &ptr == %d\n", *ptr); //&ptr의 값은 *ptr이 기존 value(7777)을 가리키고있었는데 8888로 되었으므로 8888이 출력됩니다(**dptr의 값을 8888로 넣었는데 *dptr은 기존 dpr(&i)였으며 이 주소게 있는 value가 8888로 수정됨)
    printf("value of **dptr == %d\n", **dptr); //**dptr은 8888값이 들어갔기때문에 8888이 출력됩니다.


    return 0;
}