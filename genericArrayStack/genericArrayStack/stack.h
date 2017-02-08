#pragma once
#pragma warning(disable:4996)
#include "datatype.h"
typedef struct _stack {
	void *stack;       // stack���� ���Ǵ� �迭�� ����Ű�� ������ ����
	int sSize;             // ������ ũ��
	int top;               // ������ ��,�ⱸ ��ġ���� ����
}Stack;

void initStack(Stack *sPtr, size_t sSize, size_t dataSize);     //���� �޸� �Ҵ� �� �ʱ�ȭ �Լ� top�� ��ġ�� 0�� �ʱ�ȭ
void clearStack(Stack *sPtr, size_t sSize, size_t dataSize);         // ���� ���� �Լ�
int push(Stack *sPtr, void *pushData, size_t dataSize, void (*memCpy)(void *, void *));           // ���ÿ� ������ �����ϴ� �Լ�
int pop(Stack *sPtr, void *popData, size_t dataSize, void (*memCpy)(void *, void *), void(*memFree)(void *));          // ���ÿ��� �����͸� ������ �Լ�
void printStack(const Stack*, size_t dataSIze, void(*print)(void *));    // ���� ���� ��� �����͸� ����ϴ� �Լ�
void destroyStack(Stack *sPtr, size_t dataSIze, void(*memFree)(void *));       // ���� �޸� ���� �Լ�
int isStackFull(Stack *sPtr);     // ������ �� ���ִ��� �˻�
int isStackEmpty(Stack *sPtr);    // ������ ������ ����ִ��� �˻�