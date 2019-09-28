typedef struct tree Tree;

Tree * create();
void destroyTree(Tree * t);
void add(Tree * tree, char * name);
int count_nodes(Tree * tree);
int count_leaf(Tree * tree);
int height(Tree * tree);
int search(Tree * tree, char * name);
void printTree(Tree * tree);
