

#include <stdio.h>
typedef struct item_node {
    int item_id;
    char name;
    int qoh;
    double rate;
    struct item_node* pNext;
}ITEMNODE;

ITEMNODE* item_root = NULL;
void addnode(int id, char* name, int qoh, double rate);
void displayList(ITEMNODE* root);
`
int main()
{
    displayList(item_root);
    addNode(1, (char*)"Shirts", 100, 11.11);
    displayList(item_root);

}

void displayList(ITEMNODE* root);
{
    if (root = NULL) {
        printf(List is Empty\n");
            return;
    }
    while (root != NULL)
    {
        printf("%d. %s, %d, %lf\n", root->item_id root->name, root->qoh, root->rate);
        root = root->pNext;
    }
    printf("END");
}

void addnode(int id, char* name, int qoh, double rate);
{
    nodePtr->item_id = id;
    strcpy(nodePtr->name, name);
    nodePtr->qoh = qoh;
    nodePtr->rate = rate;

    nodePtr->pNext = NULL;

    if (item_root = NULL) {
        item_root = nodePtr;
    }

}
