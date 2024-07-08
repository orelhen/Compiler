#ifndef NODE_HEADER
#define NODE_HEADER
typedef struct node{
	int count;
	char *value;
	struct node** sons;
}node;
#endif