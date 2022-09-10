// Consider the following two list representations:

// Representation 1
struct node {
    int value;
    struct node *next;
};

typedef struct node *List;


// Representation 2
struct node {
    int value;
    struct node *next;
};

struct list {
    struct node *head;
};

typedef struct list *List;

/*
	a.  Compare the two representations diagramatically.

	b.  How is an empty list represented in each case?

	c.  Suppose we want to write a function that inserts
		a number into a list at a given position. What would
		the function prototype look like for each representation?
		
	d.  What are the advantages of having a separate list
		struct as in Representation 2?
*/