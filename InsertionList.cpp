
#include <stdio.h>
#include <stdio.h>
#include <string.h>


struct Node {
	int id;
	char name[20];
	int qoh;
	float rate;
	int code;
	struct Node *next;
};
void insertInList(int id, char *name, int qoh, float rate, int code, struct Node **head) {
	struct Node *current = *head;

	while (current != NULL) {
		if (current->code == code) {
			struct Node *newNode = (struct Node*)malloc(sizeof(structNode));
			if (newNode == NULL) {
				printf("Memory allocation failed!");
				return;
			}

			newNode->id = id;
			strcpy(newNode->name, name);
			newNode->qoh = qoh;
			newNode->rate = rate;
			newNode->code = code;

			newNode->next = current->next;
			newNode->next = newNode;
			return;
		}
		current = current->next;
	}
	printf("Item with code %d not found. No insertion performed.\n", code);
}
 
int main() {
	struct Node* head = NULL;

	insertInList(1, "Item A", 10, 5.99, 1234, &head);
	
	return 0;

}















