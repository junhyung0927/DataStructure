#include "arraylist.h"

int main(void)
{
	// ArrayListType�� �������� �����ϰ� ArrayListType�� 	
	// ����Ű�� �����͸� �Լ��� �Ű������� �����Ѵ�.
	ArrayListType list;

	init(&list);
	insert(&list, 0, 10);	print_list(&list);	// 0��° ��ġ�� 10 �߰�
	insert(&list, 0, 20);	print_list(&list);	// 0��° ��ġ�� 20 �߰�
	insert(&list, 0, 30);	print_list(&list);	// 0��° ��ġ�� 30 �߰�
	insert_last(&list, 40);	print_list(&list);	// �� ���� 40 �߰�
	delete_list(&list, 0);	print_list(&list);	// 0��° �׸� ����
	return 0;
}