#include <stdio.h>
#include "linkedlist.h"
//
//
//int main() {
//    LinkedList list;
//    createList(&list);
//    int value;
//    
//    // 1) Masukkan bilangan pertama dari input user {insert first}
//    printf("Masukkan bilangan pertama: ");
//    scanf("%d", &value);
//    insertAtFirst(&list, value);
//    printList(list);
//    
//    // 2) Masukkan bilangan kedua dari input user {insert last}
//    printf("Masukkan bilangan kedua: ");
//    scanf("%d", &value);
//    insertAtLast(&list, value);
//    printList(list);
//    
//    // 3) Masukkan bilangan ketiga di antara dua bilangan sebelumnya {insert after}
//    printf("Masukkan bilangan ketiga: ");
//    scanf("%d", &value);
//    Node* temp = list.first;
//    if (temp != NULL) {
//        Node* newNode = (Node*)malloc(sizeof(Node));
//        newNode->data = value;
//        newNode->next = temp->next;
//        temp->next = newNode;
//    }
//    printList(list);
//    
//    // 4) Masukkan bilangan keempat di awal list {insert first}
//    printf("Masukkan bilangan keempat: ");
//    scanf("%d", &value);
//    insertAtFirst(&list, value);
//    printList(list);
//    
//    // 5) Masukkan bilangan kelima di akhir list {insert last}
//    printf("Masukkan bilangan kelima: ");
//    scanf("%d", &value);
//    insertAtLast(&list, value);
//    printList(list);
//    
//    // 6) Hapus elemen terakhir {delete last}
//    deleteAtLast(&list);
//    printList(list);
//    
//    // 7) Hapus bilangan tertentu {delete by value}
//    printf("Masukkan bilangan yang ingin dihapus: ");
//    scanf("%d", &value);
//    deleteByValue(&list, value);
//    printList(list);
//    
//    // 8) Hapus elemen pertama {delete first}
//    deleteAtFirst(&list);
//    printList(list);
//    
//    // 9) Hapus semua elemen dalam list
//    while (list.first != NULL) {
//        deleteAtFirst(&list);
//    }
//    printList(list);
//    
//    return 0;
//}

int main() {
    LinkedList list;
    createList(&list);

    insertAtFirst(&list, 7);
    printList(list);

    insertAtLast(&list, 11);
    printList(list);

    insertAfterBetween(&list, 7, 9);
    printList(list);

    insertAtFirst(&list, 5);
    printList(list);

    insertAtLast(&list, 13);
    printList(list);

    deleteAtLast(&list);
    printList(list);

    deleteByValue(&list, 7);
    printList(list);

    deleteAtFirst(&list);
    printList(list);

    while (list.first != NULL) {
        deleteAtFirst(&list);
    }
    printList(list);

    return 0;
}
