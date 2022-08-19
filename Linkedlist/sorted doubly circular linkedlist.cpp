#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
struct nod {
   int info;
   struct nod *n;
   struct nod *p;
}*start, *last;
int count = 0;
class circulardoublylist {
   public:
      nod *create_node(int);
      void insert_begin();
      void insert_end();
      void insert_pos();
      void delete_pos();
      void sort();
      void display();
      void reverse();
      circulardoublylist() {
         start = NULL;
         last = NULL;
      }
};
int main() {
   int c;
   circulardoublylist cdl;
   while (1) {
      cout<<"1.Insert at Beginning"<<endl;
      cout<<"2.Insert at End"<<endl;
      cout<<"3.Insert at Position"<<endl;
      cout<<"4.Delete at Position"<<endl;
      cout<<"5.sort the list"<<endl;
      cout<<"6.Display List"<<endl;
      cout<<"7.Reverse List"<<endl;
      cout<<"8.Exit"<<endl;
      cout<<"Enter your choice : ";
      cin>>c;
      switch(c) {
         case 1:
            cdl.insert_begin();
         break;
         case 2:
            cdl.insert_end();
         break;
         case 3:
            cdl.insert_pos();
         break;
         case 4:
            cdl.delete_pos();
         break;
         case 5:
            cdl.sort();
         break;
         case 6:
            cdl.display();
         break;
         case 7:
            cdl.reverse();
         break;
         case 8:
            exit(1);
         default:
            cout<<"Wrong choice"<<endl;
      }
   }
   return 0;
}
nod* circulardoublylist::create_node(int v) {
   count++;
   struct nod *t;
   t = new(struct nod);
   t->info = v;
   t->n = NULL;
   t->p = NULL;
   return t;
}
void circulardoublylist::insert_begin() {
   int v;
   cout<<endl<<"Enter the element to be inserted: ";
   cin>>v;
   struct nod *t;
   t = create_node(v);
   if (start == last && start == NULL) {
      cout<<"Element inserted in empty list"<<endl;
      start = last = t;
      start->n = last->n = NULL;
      start->p = last->p = NULL;
   } else {
      t->n = start;
      start->p = t;
      start = t;
      start->p = last;
      last->n = start;
      cout<<"Element inserted"<<endl;
   }
}
void circulardoublylist::insert_end() {
   int v;
   cout<<endl<<"Enter the element to be inserted: ";
   cin>>v;
   struct nod *t;
   t = create_node(v);
   if (start == last && start == NULL) {
      cout<<"Element inserted in empty list"<<endl;
      start = last = t;
      start->n= last->n = NULL;
      start->p = last->p= NULL;
   } else {
      last->n= t;
      t->p= last;
      last = t;
      start->p = last;
      last->n= start;
   }
}
void circulardoublylist::insert_pos() {
   int v, pos, i;
   cout<<endl<<"Enter the element to be inserted: ";
   cin>>v;
   cout<<endl<<"Enter the position of element inserted: ";
   cin>>pos;
   struct nod *t, *s, *ptr;
   t = create_node(v);
   if (start == last && start == NULL) {
      if (pos == 1) {
         start = last = t;
         start->n = last->n = NULL;
         start->p = last->p = NULL;
      } else {
         cout<<"Position out of range"<<endl;
         count--;
         return;
      }
   } else {
      if (count < pos) {
         cout<<"Position out of range"<<endl;
         count--;
         return;
      }
      s = start;
      for (i = 1;i <= count;i++) {
         ptr = s;
         s = s->n;
         if (i == pos - 1) {
            ptr->n = t;
            t->p= ptr;
            t->n= s;
            s->p = t;
            cout<<"Element inserted"<<endl;
            break;
         }
      }
   }
}
void circulardoublylist::delete_pos() {
   int pos, i;
   nod *ptr, *s;
   if (start == last && start == NULL) {
      cout<<"List is empty, nothing to delete"<<endl;
      return;
   }
   cout<<endl<<"Enter the position of element to be deleted: ";
   cin>>pos;
   if (count < pos) {
      cout<<"Position out of range"<<endl;
      return;
   }
   s = start;
   if(pos == 1) {
      count--;
      last->n = s->n;
      s->n->p = last;
      start = s->n;
      free(s);
      cout<<"Element Deleted"<<endl;
      return;
   }
   for (i = 0;i < pos - 1;i++ ) {
      s = s->n;
      ptr = s->p;
   }
   ptr->n = s->n;
   s->n->p = ptr;
   if (pos == count) {
      last = ptr;
   }
   count--;
   free(s);
   cout<<"Element Deleted"<<endl;
}
void circulardoublylist::sort() {
   struct nod *t, *s;
   int v, i;
   if (start == last && start == NULL) {
      cout<<"The List is empty, nothing to sort"<<endl;
      return;
   }
   s = start;
   for (i = 0;i < count;i++) {
      t= s->n;
      while (t != start) {
         if (s->info > t->info) {
            v = s->info;
            s->info = t->info;
            t->info = v;
         }
         t = t->n;
      }
      s = s->n;
   }
   cout<<"List sorted"<<endl;
}
void circulardoublylist::display() {
   int i;
   struct nod *s;
   if (start == last && start == NULL) {
      cout<<"The List is empty, nothing to display"<<endl;
      return;
   }
   s = start;
   for (i = 0;i < count-1;i++) {
      cout<<s->info<<"<->";
      s = s->n;
   }
   cout<<s->info<<endl;
}
void circulardoublylist::reverse() {
   if (start == last && start == NULL) {
      cout<<"The List is empty, nothing to reverse"<<endl;
      return;
   }
   struct nod *p1, *p2;
   p1 = start;
   p2 = p1->n;
   p1->n = NULL;
   p1->p= p2;
   while (p2 != start) {
      p2->p = p2->n;
      p2->n = p1;
      p1 = p2;
      p2 = p2->p;
   }
   last = start;
   start = p1;
   cout<<"List Reversed"<<endl;
}
