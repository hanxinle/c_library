#ifndef  TREE_H
#define  TREE_H

typedef int ElementType;


struct TreeNode;
typedef struct TreeNode *Position;
typedef struct TreeNode *SearchTree;

SearchTree MakeEmpty( SearchTree T );
Position Find( ElementType X, SearchTree T );
Position FindMin( SearchTree T );
Position FindMax( SearchTree T );
SearchTree Insert( ElementType X, SearchTree T );
SearchTree Delete( ElementType X, SearchTree T );
ElementType Retrieve( Position P );
void PrintElement(ElementType X);
void PrintTree(SearchTree T);
int CountNodes (SearchTree T);
int ConuntLeaves (SearchTree T);
int ConuntFull (SearchTree T);

#endif  /* TREE_H */

