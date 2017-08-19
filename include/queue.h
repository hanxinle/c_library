Welcome to the Emacs shell

~/myCODE/c_data_structure/hanxl_ds $ gcc teststkl.c 
~/myCODE/c_data_structure/hanxl_ds $ ./a.out
9
8
7
6
5
4
3
2
1
0
~/myCODE/c_data_structure/hanxl_ds $ gcc teststka.c 
teststka.c:4:1: error: expected ‘=’, ‘,’, ‘;’, ‘asm’ or ‘__attribute__’ before ‘int’
 int main( )
 ^
~/myCODE/c_data_structure/hanxl_ds $ gcc teststka.c 
teststka.c:4:1: error: expected ‘=’, ‘,’, ‘;’, ‘asm’ or ‘__attribute__’ before ‘int’
 int main( )  {
 ^
~/myCODE/c_data_structure/hanxl_ds $ gcc teststka.c 
teststka.c:1:2: error: stray ‘#’ in program
 e#include <stdio.h>
  ^
teststka.c:1:1: error: unknown type name ‘e’
 e#include <stdio.h>
 ^
teststka.c:1:11: error: expected ‘=’, ‘,’, ‘;’, ‘asm’ or ‘__attribute__’ before ‘<’ token
 e#include <stdio.h>
           ^
In file included from stackar.c:1:0,
                 from teststka.c:2:
stackar.h:14:12: error: unknown type name ‘ElementType’
 void Push( ElementType X, Stack S );
            ^
stackar.h:15:1: error: unknown type name ‘ElementType’
 ElementType Top( Stack S );
 ^
stackar.h:17:1: error: unknown type name ‘ElementType’
 ElementType TopAndPop( Stack S );
 ^
In file included from teststka.c:2:0:
stackar.c:11:3: error: unknown type name ‘ElementType’
   ElementType *Array;
   ^
stackar.c: In function ‘CreateStack’:
stackar.c:35:30: error: ‘ElementType’ undeclared (first use in this function)
   S->Array = malloc( sizeof( ElementType ) * MaxElements );
                              ^
stackar.c:35:30: note: each undeclared identifier is reported only once for each function it appears in
stackar.c: At top level:
stackar.c:59:13: error: unknown type name ‘ElementType’
 void  Push( ElementType X, Stack S )  {
             ^
stackar.c:68:1: error: unknown type name ‘ElementType’
 ElementType  Top( Stack S )  {
 ^
stackar.c:85:1: error: unknown type name ‘ElementType’
 ElementType  TopAndPop( Stack S )  {
 ^
teststka.c:4:1: error: expected ‘=’, ‘,’, ‘;’, ‘asm’ or ‘__attribute__’ before ‘int’
 int main()  {
 ^
~/myCODE/c_data_structure/hanxl_ds $  
~/myCODE/c_data_structure/hanxl_ds $ gcc teststka.c 
teststka.c:4:1: error: expected ‘=’, ‘,’, ‘;’, ‘asm’ or ‘__attribute__’ before ‘int’
 int main()  {
 ^
~/myCODE/c_data_structure/hanxl_ds $ gcc teststka.c 
teststka.c:4:1: error: expected ‘=’, ‘,’, ‘;’, ‘asm’ or ‘__attribute__’ before ‘int’
 int main()  {
 ^
~/myCODE/c_data_structure/hanxl_ds $ gcc teststka.c 
teststka.c:4:1: error: expected ‘=’, ‘,’, ‘;’, ‘asm’ or ‘__attribute__’ before ‘int’
 int main()  {
 ^
~/myCODE/c_data_structure/hanxl_ds $ gcc teststka.c 
teststka.c:4:1: error: expected ‘=’, ‘,’, ‘;’, ‘asm’ or ‘__attribute__’ before ‘int’
 int main()  {
 ^
~/myCODE/c_data_structure/hanxl_ds $ gcc teststka.c 
teststka.c:4:1: error: expected ‘=’, ‘,’, ‘;’, ‘asm’ or ‘__attribute__’ before ‘int’
 int main()  {
 ^
~/myCODE/c_data_structure/hanxl_ds $ gcc teststka.c 
teststka.c:4:1: error: expected ‘=’, ‘,’, ‘;’, ‘asm’ or ‘__attribute__’ before ‘int’
 int main()  {
 ^
~/myCODE/c_data_structure/hanxl_ds $ gcc teststka.c 
teststka.c:4:1: error: expected ‘=’, ‘,’, ‘;’, ‘asm’ or ‘__attribute__’ before ‘int’
 int main()  {
 ^
~/myCODE/c_data_structure/hanxl_ds $ gcc teststka.c 
teststka.c:4:1:  {
 ^
~/myCODE/c_data_structure/hanxl_ds $ gcc teststka.c 
teststka.c:4:1: error: expected ‘=’, ‘,’, ‘;’, ‘asm’ or ‘__attribute__’ before ‘int’
 int main()  {
 ^
~/myCODE/c_data_structure/hanxl_ds $ gcc teststka.c 
/tmp/ccU9IRua.o：在函数‘CreateStack’中：
teststka.c:(.text+0x114)：对‘MakeEmpty’未定义的引用
collect2: error: ld returned 1 exit status
~/myCODE/c_data_structure/hanxl_ds $ gcc teststka.c 
~/myCODE/c_data_structure/hanxl_ds $ ./a.out
9
8
7
6
5
4
3
2
1
0
~/myCODE/c_data_structure/hanxl_ds $ gcc testque.c 
~/myCODE/c_data_structure/hanxl_ds $ ./a.out
0
1
2
3
4
5
6
7
8
9
~/myCODE/c_data_structure/hanxl_ds $ gcc testque.c 
In file included from testque.c:2:0:
queue.c:89:1: error: unknown type name ‘Elementype’
 Elementype  FrontAndDequeue( Queue Q )  {
 ^
testque.c:4:1: error: expected ‘=’, ‘,’, ‘;’, ‘asm’ or ‘__attribute__’ before ‘int’
 int main( )
 ^
~/myCODE/c_data_structure/hanxl_ds $ gcc testque.c 
In file included from testque.c:2:0:
queue.c:89:1: error: unknown type name ‘Elementype’
 Elementype  FrontAndDequeue( Queue Q )  {
 ^
~/myCODE/c_data_structure/hanxl_ds $ gcc testque.c 
~/myCODE/c_data_structure/hanxl_ds $ ./a.out
0
1
2
3
4
5
6
7
8
9
~/myCODE/c_data_structure/hanxl_ds $ ./a.out
0
1
2
3
4
5
6
7
8
9
~/myCODE/c_data_structure/hanxl_ds $ ./a.out
0
1
2
3
4
5
6
7
8
9
~/myCODE/c_data_structure/hanxl_ds $ 2
2: command not found
~/myCODE/c_data_structure/hanxl_ds $ 