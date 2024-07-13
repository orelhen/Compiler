#ifndef NODE_HEADER
#define NODE_HEADER
typedef struct Node {
    char* value;        // Value of the node (e.g., "FUNC", "ID", "+", etc.)
    int count;          // Number of child nodes
    struct Node** sons; // Array of child nodes
    char* staticType;   // Static or non-static indication
} node;
#endif