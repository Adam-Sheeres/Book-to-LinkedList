/*
name: Adam SHeeres-Paulicpulle
email: asheeres@uoguelph.ca
student ID: 1036569
*/
struct node_struct {
  void *data;
  struct node_struct *next;
};

struct node_struct *txt2words(FILE *fp);
struct node_struct *search(struct node_struct *list, char *target, int (*compar)(const void*, const void*));
struct node_struct *copy(struct node_struct *start, struct node_struct *end);
/*will construct a copy of a list. start at START, and end at end or the node that matches end*/
struct node_struct *sort(struct node_struct *list, int (*compar)(const void *, const void *));
void ftext(FILE *fp, struct node_struct *list);
void remove_repeats(struct node_struct *list, int (*compare)(const void *, const void*));
void free_list(struct node_struct *list, int free_data);
int length(struct node_struct *list);
