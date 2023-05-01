/*
백준 문제 - 스택
https://www.acmicpc.net/problem/10828
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*
push X: 정수 X를 스택에 넣는 연산이다.
pop: 스택에서 가장 위에 있는 정수를 빼고, 그 수를 출력한다. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다.
size: 스택에 들어있는 정수의 개수를 출력한다.
empty: 스택이 비어있으면 1, 아니면 0을 출력한다.
top: 스택의 가장 위에 있는 정수를 출력한다. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다
*/
typedef struct _s_node
{
    struct _s_node *next;
    int elem;
} s_node;

typedef struct
{
    s_node *head;
    int s_size;
} s_list;

// 주요 기능
int top(s_list *l);
void push(s_list *l, int num);
int pop(s_list *l);
int size();
int empty();

// 보조 기능
s_list *alloc();

int main(void)
{
    s_list *l;
    int c;
    scanf("%d", &c);
    for (int i = 0; i < c; i++)
    {
        char menu[6];
        scanf("%s", menu);

        if (!strcmp(menu, "push"))
        {
            int num;
            scanf("%d", &num);
            push(l, num);
        }
        else if (!strcmp(menu, "top"))
        {
            printf("%d\n", top(l));
        }
        else if (!strcmp(menu, "pop"))
        {
            int result = pop(l);
        }
    }
}
//-------주요기능
int top(s_list *l)
{
    if (l->head->elem == 0x0)
        return -1;
    else
    {
        return l->head->elem;
    }
}

void push(s_list *l, int num)
{
    s_node *n;
    n = (s_node *)malloc(sizeof(s_node));
    n->elem = num;
    if (l->head == 0x0)
    {
        l->head = n;
    }
    else
    {
        n->next = l->head->next;
        l->head = n;
    }
}

int pop(s_list *l)
{
    if (l->head != 0x0)
    {
        s_node *n = l->head;
        l->head = l->head->next;
        free(n);
        return 1;
    }
    else return -1;
}

//--------보조 기능
s_list *alloc()
{
    s_list *l;
    l = (s_list *)malloc(sizeof(s_list));
    l->head = 0x0;
    return l;
}