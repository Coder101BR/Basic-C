#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int val;
    struct node *leftchild;
    struct node *rightchild;

}node_t;

/* functions */
void insert_val (node_t *tree, int value);
int search_val (node_t *tree, int value);
void pre_order_traversal(node_t *tree);
void inorder_traversal(node_t *tree);
void post_order_traversal(node_t *tree);


int main()
{
    int array_val[] = {27, 14, 35, 10, 19, 31, 42};
    node_t *tree_list;
    tree_list = (node_t*)malloc(sizeof(node_t));

    tree_list->val = NULL;

    printf("\nInserting values: ");
    for(int i = 0; i < 7; i++){
        printf("%d ", array_val[i]);
        insert_val(tree_list, array_val[i]);
    }

    printf("\nSearching values:\n");
    printf("Found: ");
    for(int i = 0; i < 7; i++){
        search_val(tree_list, array_val[i]);
        printf("%d ", array_val[i]);
    }
/* Manually insert the values and show them */
//    insert_val(tree_list, 27);
//    printf("\n%d", tree_list->val);
//    insert_val(tree_list, 30);
//    printf("\n%d", tree_list->rightchild->val);
//    insert_val(tree_list, 25);
//    printf("\n%d", tree_list->leftchild->val);
//    insert_val(tree_list, 35);
//    printf("\n%d", tree_list->rightchild->rightchild->val);
//    insert_val(tree_list, 20);
//    printf("\n%d", tree_list->leftchild->leftchild->val);
//    printf("\n\nFound: %d" , search_val(tree_list, 35));


    printf("\n\npre order traversal: ");
    pre_order_traversal(tree_list);
    printf("\ninorder traversal: ");
    inorder_traversal(tree_list);
    printf("\npost order traversal: ");
    post_order_traversal(tree_list);
    printf("\n\n\n");

    return 0;
}

void insert_val (node_t *tree, int value){

    if(NULL == tree->val){
    tree->val = value;   // make the root
    tree->leftchild = NULL;
    tree->rightchild = NULL;
    }

    else if(value < tree->val){
        if (NULL == tree->leftchild){
            tree->leftchild = (node_t*)malloc(sizeof(node_t));
            tree->leftchild->val = value;
            tree->leftchild->leftchild = NULL;
            tree->leftchild->rightchild = NULL;
            insert_val(tree->leftchild, value);
        }
        else{
            insert_val(tree->leftchild, value);
        }
    }

        else if(value > tree->val){
        if (NULL == tree->rightchild){
            tree->rightchild = (node_t*)malloc(sizeof(node_t));
            tree->rightchild->val = value;
            tree->rightchild->leftchild = NULL;
            tree->rightchild->rightchild = NULL;
            insert_val(tree->rightchild, value);
        }
        else{
            insert_val(tree->rightchild, value);
        }
    }

}

int search_val (node_t *tree, int value){

    if (value == tree->val){
        return tree->val;
    }

    else if (value < tree->val){
        if (NULL == tree->leftchild){
            return -1;
        }
        else{
            search_val(tree->leftchild, value);
        }
    }

    else if (value > tree->val){
        if (NULL == tree->rightchild){
            return -1;
        }
        else{
            search_val(tree->rightchild, value);
        }
    }

}

void pre_order_traversal(node_t *tree) {   // print in this order: root, left side , right side

   if(tree != NULL) {
      printf("%d ",tree->val);
      pre_order_traversal(tree->leftchild);
      pre_order_traversal(tree->rightchild);
   }

}

void inorder_traversal(node_t *tree) {   // left side, root, right side

   if(tree != NULL) {
      inorder_traversal(tree->leftchild);
      printf("%d ",tree->val);
      inorder_traversal(tree->rightchild);
   }

}

void post_order_traversal(node_t *tree) {   // left side, right side, root

   if(tree != NULL) {
      post_order_traversal(tree->leftchild);
      post_order_traversal(tree->rightchild);
      printf("%d ",tree->val);
   }

}
