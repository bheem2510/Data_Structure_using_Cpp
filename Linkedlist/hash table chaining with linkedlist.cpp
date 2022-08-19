#include <bits/stdc++.h>
const int T_S = 200;
using namespace std;
struct HashTableEntry {
   int d, k;
   HashTableEntry *n;
   HashTableEntry *p;
};
class HashMapTable {
   public:
      HashTableEntry **ht, **top;
      HashMapTable() {
         ht = new HashTableEntry*[T_S];
         top = new HashTableEntry*[T_S];
         for (int i = 0; i < T_S; i++) {
         ht[i] = NULL;
         top[i] = NULL;
      }
}
int HashFunc(int key) {
   return key % T_S;
}
void insert(int k, int v) {
   int hash_v= HashFunc(k);
   HashTableEntry *en = ht[hash_v];
   if (en == NULL) {
      en = new HashTableEntry;
      en->d = v;
      en->k = k;
      en->n = NULL;
      en->p = NULL;
      ht[hash_v] = en;
      top[hash_v] = en;
   } else {
      while (en != NULL)
      en = en->n;
      en = new HashTableEntry;
      en->d = v;
      en->k = k;
      en->n = NULL;
      en->p = top[hash_v];
      top[hash_v]->n = en;
      top[hash_v] = en;
   }
}
void remove(int k) {
   int hash_v = HashFunc(k);
   HashTableEntry *en = ht[hash_v];
   if (en->k != k || en == NULL) {
      cout<<"No Element found at key: "<<k<<endl;
      return;
   }
   while (en != NULL) {
      if (en->n == NULL) {
         if (en->p == NULL) {
            ht[hash_v] = NULL;
            top[hash_v] = NULL;
            delete en;
            break;
         } else {
            top[hash_v] = en->p;
            top[hash_v]->n = NULL;
            delete en;
            en = top[hash_v];
         }
      }
      en = en->n;
   }
}
void SearchKey(int k) {
   int hash_v = HashFunc(k);
   bool flag = false;
   HashTableEntry* en = ht[hash_v];
   if (en != NULL) {
      while (en != NULL) {
         if (en->k == k) {
            flag = true;
         }
         if (flag) {
            cout<<"Element found at key "<<k<<": ";
            cout<<en->d<<endl;
         }
         en = en->n;
      }
   }
   if (!flag)
      cout<<"No Element found at key "<<k<<endl;
}
~HashMapTable() {
   delete [] ht;
}
int main() {
   HashMapTable hash;
   int k, v;
   int c;
   while (1) {
      cout<<"1.Insert element into the table"<<endl;
      cout<<"2.Search element from the key"<<endl;
      cout<<"3.Delete element at a key"<<endl;
      cout<<"4.Exit"<<endl;
      cout<<"Enter your choice: ";
      cin>>c;
      switch(c) {
         case 1:
            cout<<"Enter element to be inserted: ";
            cin>>v;
            cout<<"Enter key at which element to be inserted: ";
            cin>>k;
            hash.insert(k, v);
         break;
         case 2:
            cout<<"Enter key of the element to be searched: ";
            cin>>k;
            hash.SearchKey(k);
         break;
         case 3:
            cout<<"Enter key of the element to be deleted: ";
            cin>>k;
            hash.remove(k);
         break;
         case 4:
            exit(1);
         default:
            cout<<"\nEnter correct option\n";
      }
   }
   return 0;
}
