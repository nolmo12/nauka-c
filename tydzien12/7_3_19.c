void usunw2(struct element* Lista, struct element * elem)
{
  struct element * wsk=elem->next;
  elem->next=wsk->next;
  free(wsk);
}
