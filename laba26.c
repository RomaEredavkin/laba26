#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> 
#include <Windows.h>


struct Node {
	int data;
	struct Node* next;
};


struct Node* first = NULL;

void printList() {
	struct Node* ptr = first;
	while (ptr != NULL) {
		printf("(%d) -> ", ptr->data);
		ptr = ptr->next;
	}
	printf("NULL\n");
}
void addToHead(int value) {
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

	newNode->next = first;
	newNode->data = value;

	first = newNode;
}
int deleteFromHead() {
	int value = first->data;
	struct Node* delNode = first;
	first = first->next;
	free(delNode);
	return value;
}
void clearList() {
	while (first != NULL)
	{
		struct Node* delNode = first;
		first = first->next;
		free(delNode);
	}
} 
int contains(int value) {
	struct Node* ptr = first;
	while (ptr != NULL) {
		if (ptr->data == value) {
			return 1;
		}
		ptr = ptr->next;
	}
	return 0;
}
int sum() {
	struct Node* ptr = first; 
	int s = 0; 
	while (ptr != NULL) {
		s += ptr->data; 
		ptr = ptr->next;
	} 
	return s;
}
int countEven() {
	struct Node* ptr = first;
	int count = 0;
	while (ptr != NULL) {
		if (ptr->data % 2 == 0) {
			count++;
		}
		ptr = ptr->next;

		return count;
	}
} 
void oddsx10() {
	struct Node* ptr = first;
	while (ptr != NULL) {
		if (ptr->data % 2 != 0) {
			ptr->data *= 10;
		}
		ptr = ptr->next;
	}
}
void elementIx100(int i)
{
	struct Node* ptr = first; 
	int index = 0; 
	while (ptr != NULL) {
		if (index == i) {
			ptr->data = ptr->data * 100; 
			return;
		} 
		ptr = ptr->next; 
		index++;
	}
} 
void elementsLeftOfIx10(int i) {
	struct Node* ptr = first;
	int index = 0;
	while (ptr != NULL) {
		if (index < i) {
			ptr->data *= 10;
		}
		ptr = ptr->next;
		index++;
	}
}
void main() {
	
	printList();
	addToHead(1); 
	addToHead(3); 
	addToHead(6); 
	addToHead(8); 
	
	printList(); 
	elementsLeftOfIx10(1); 
	printList();
	elementsLeftOfIx10(2);
	printList(); 
	elementsLeftOfIx10(4);
	printList();
	
	//oddsx10();
	//printf("even numbers = %d\n", countEven());
	//elementIx100(0); 
	//printList(); 
	//elementIx100(2); 
	//printList(); 
	//elementIx100(0);
	//printList();
	//clearList(); 
	//printList(); 
	//printf("even nubers = %d\n", countEven());
	



	//printf("contains(100) = %d\n", contains(100));
	//printf("contains(150) = %d\n", contains(150));
	//printf("contains(200) = %d\n", contains(200));

	//clearList();
	//printList();

	//printf("contains(100) = %d\n", contains(100));
	//printf("contains(150) = %d\n", contains(150));
	//printf("contains(200) = %d\n", contains(200));

	{
		int x; 
		scanf("%d", &x);
	}

}

