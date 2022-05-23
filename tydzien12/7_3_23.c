struct Trojka
{
  unsigned int a,b,c;
  struct trojka*next;
};
int tr(struct Trojka * e)
{
  if(e->a*e->a+e->b*e->b==e->c*e->c)
    return 1
  else
    return 0;
}
struct Trojka * pitagoras(struct Trojka*Lista)
{
  struct Trojka * pom, *pom2;
  while((Lista!=NULL)&&(tr(Lista)==0))
  {
    pom=Lista;
    Lista=Lista->next;
    free(pom);
  }
  if(Lista==NULL)
    return NULL;
  pom=Lista;
  while(pom->next!=NULL)
  {
    if(tr(pomoc->next))
    {
      pom=pom->next;
    }
    else
    {
      pom2=pom->next;
      pom->next=pom2->next;
      free(pom2);
    }
  }
  return Lista;
}
