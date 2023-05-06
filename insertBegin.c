#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    struct Node *prev ;
    int data ;
    struct Node *next ;
}Node ;

Node *fillEmpty (Node *userNode , int userData){
    Node *nodefill = (struct Node *) malloc(sizeof(Node)) ;
    nodefill->data = userData ;
    nodefill->next = NULL ;
    nodefill->prev = NULL ;
    return nodefill;
}

Node *addingData (Node *UserNode , int Userdata){
    Node *New_Node = (struct Node *) malloc(sizeof(Node)) ;
    New_Node->data = Userdata ;
    New_Node->next = NULL ;
    New_Node->prev = NULL ;
    if (UserNode == NULL)
        return fillEmpty(UserNode , Userdata) ;
    else {
       New_Node->next = UserNode ;
       UserNode->prev = New_Node ;
       return New_Node ;
    }
}
int main () {
    Node *Head = NULL ;
    Node *Counting = Head ;
    int n ;
    printf("How Many Num in your list ? ") ;
    scanf("%d",&n) ;
    for (size_t i = 0; i < n; i++)
    {
        Counting = addingData(Counting,i) ;
    }
    Head = Counting ;
    while (Counting != NULL)
    {
        printf("%d ",Counting->data) ;
        Counting = Counting->next ;
    }
    
    
}