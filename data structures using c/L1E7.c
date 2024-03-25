#include <stdio.h>
#include <stdlib.h>

// Structure to represent each element/node in the disjoint set
struct Node {
    struct Node *rep; // Pointer to the representative of the set
    struct Node *next; // Pointer to the next node in the set
    int data; // Data value of the node
};

// Global arrays to store pointers to the heads and tails of each disjoint set
struct Node *heads[50], *tails[50];

// Global variable to keep track of the number of disjoint sets
static int countRoot = 0;

// Function to create a new set with a single element
void makeSet(int x) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    newNode->rep = newNode; // Each element is initially its own representative
    newNode->next = NULL;
    newNode->data = x;

    // Add the new node to the array of sets and update the count
    heads[countRoot] = newNode;
    tails[countRoot++] = newNode;
}

// Function to find the representative (root) of the set containing the element
struct Node *find(int a) {
    struct Node *tmp;
    for (int i = 0; i < countRoot; i++) {
        tmp = heads[i];
        while (tmp != NULL) {
            if (tmp->data == a)
                return tmp->rep;
            tmp = tmp->next;
        }
    }
    return NULL; // Element not found in any set
}

// Function to union the sets containing elements a and b
void unionSets(int a, int b) {
    struct Node *tail2;
    struct Node *rep1 = find(a);
    struct Node *rep2 = find(b);

    if (rep1 == NULL || rep2 == NULL) {
        printf("\nElement not present in the disjoint set.\n");
        return;
    }

    if (rep1 != rep2) {
        int pos, flag = 0;
        // Find the position of rep2 in the array of sets
        for (int j = 0; j < countRoot; j++) {
            if (heads[j] == rep2) {
                pos = j;
                flag = 1;
                countRoot--; // Decrement the count of disjoint sets
                tail2 = tails[j];
                for (int i = pos; i < countRoot; i++) {
                    heads[i] = heads[i + 1];
                    tails[i] = tails[i + 1];
                }
            }
            if (flag == 1)
                break;
        }

        // Add the nodes of rep2 to the set represented by rep1
        for (int j = 0; j < countRoot; j++) {
            if (heads[j] == rep1) {
                tails[j]->next = rep2;
                tails[j] = tail2;
                break;
            }
        }

        // Update the representative of all nodes in the set represented by rep2
        while (rep2 != NULL) {
            rep2->rep = rep1;
            rep2 = rep2->next;
        }
    }
}

// Function to search for element x in the disjoint sets
int search(int x) {
    struct Node *tmp;
    for (int i = 0; i < countRoot; i++) {
        tmp = heads[i];
        while (tmp != NULL) {
            if (tmp->data == x)
                return 1; // Element found
            tmp = tmp->next;
        }
    }
    return 0; // Element not found
}

// Main function to provide menu-driven interface for disjoint set operations
int main() {
    int choice, x, y;

    do {
        printf("\nDisjoint Set Operations:\n");
        printf("1. Make Set\n");
        printf("2. Display Set Representatives\n");
        printf("3. Union\n");
        printf("4. Find Set Representative\n");
        printf("5. Display Sets\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nEnter new element: ");
                scanf("%d", &x);
                if (search(x) == 1)
                    printf("\nElement already present in the disjoint set.\n");
                else
                    makeSet(x);
                break;
            case 2:
                printf("\nSet Representatives:\n");
                for (int i = 0; i < countRoot; i++)
                    printf("%d ", heads[i]->data);
                printf("\n");
                break;
            case 3:
                printf("\nEnter first element: ");
                scanf("%d", &x);
                printf("Enter second element: ");
                scanf("%d", &y);
                unionSets(x, y);
                break;
            case 4:
                printf("\nEnter the element: ");
                scanf("%d", &x);
                struct Node *rep = find(x);
                if (rep == NULL)
                    printf("\nElement not present in the disjoint set.\n");
                else
                    printf("\nThe representative of %d is %d.\n", x, rep->data);
                break;
            case 5:
                printf("\nDisjoint Sets:\n");
                for (int i = 0; i < countRoot; i++) {
                    printf("Set %d: ", i + 1);
                    struct Node *temp = heads[i];
                    printf("{ ");
                    while (temp != NULL) {
                        printf("%d ", temp->data);
                        temp = temp->next;
                    }
                    printf("}\n");
                }
                break;
            case 6:
                printf("Exiting the program.\n");
                exit(0);
            default:
                printf("\nInvalid choice. Please enter a valid option.\n");
                break;
        }
    } while (1);

    return 0;
}