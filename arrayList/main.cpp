#include "arraylist.h"

int main(void)
{
	// ArrayListType를 정적으로 생성하고 ArrayListType를 	
	// 가리키는 포인터를 함수의 매개변수로 전달한다.
	ArrayListType list;

	init(&list);
	insert(&list, 0, 10);	print_list(&list);	// 0번째 위치에 10 추가
	insert(&list, 0, 20);	print_list(&list);	// 0번째 위치에 20 추가
	insert(&list, 0, 30);	print_list(&list);	// 0번째 위치에 30 추가
	insert_last(&list, 40);	print_list(&list);	// 맨 끝에 40 추가
	delete_list(&list, 0);	print_list(&list);	// 0번째 항목 삭제
	return 0;
}