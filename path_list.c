#include "holberton.h"
size_t print_list(const path_dir_node *h);
path_dir_node *add_node(path_dir_node **head, const char *str);
void free_list(path_dir_node *head);
/**
 * PATH is an enviroment that contains executable command in directories, this directories are separated 
  *by a colon (:) valgrind --leak-check=full --show-leak-kinds=all
 */ 
 int main(void)
 {
	char *variable, *token;

	path_dir_node *head;
	head = NULL;
	variable = _getenv("PATH");
	token = strtok(variable, ":");
	while(token != NULL)
	{
		add_node(&head, token);
		token = strtok(NULL, ":");
	}
	print_list(head);
	free_list(head);
    return (0);
 }

path_dir_node *add_node(path_dir_node **head, const char *str)
{
	int len_str = 0;
	path_dir_node *new_node;
	char *final = NULL;

	if (head == NULL)
		return (NULL);
	if (str != NULL)
	{
		final = strdup(str);
		if (final == NULL)
			return (NULL);
		while (final[len_str])
			len_str++;
	}
	new_node = malloc(sizeof(path_dir_node));
	if (new_node == NULL)
		return (NULL);
	new_node->str = final;
	new_node->len = len_str;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}

size_t print_list(const path_dir_node *h)
{
	int i = 0;

	for (i = 0; h != NULL; i++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (i);
}

/**
 *free_list - eliminate memory leaks while using lists
 *@head: pointer to the the list
  *Return: Nothing
 */
void free_list(path_dir_node *head)
{
	int i = 0;
	void *tmp;

	for (i = 0; head != NULL; i++)
	{
		tmp = head;
		free(head->str);
		head = head->next;
		free(tmp);
	}
}