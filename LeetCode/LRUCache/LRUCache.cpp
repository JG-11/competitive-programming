#include <iostream>
#include <unordered_map>

using namespace std;

class Node {
	public:
		int key;
		int val;
		Node* prev;
		Node* next;
};

class LRUCache {
	public:
		//Hashtable backs up the doubly linked list for O(1) access to cache items
		unordered_map<int, Node*> cache;//Hashtable and the actual list that represents the cache
		Node* head;
		Node* tail;
		
		int totalItemsInCache;
		int maxCapacity;
		
		LRUCache(int capacity){
			this->totalItemsInCache = 0;
			this->maxCapacity = capacity;
			
			head = new Node();
			tail = new Node();
			
			/*	We have a pseudo head and pseudo tail to mark the boundary,
			 * 	so that we don't need to check the NULL node during the update.
			 */ 
			head->next = tail;
			tail->next = head;
		}
		
		
		int get(int key){
			Node* node = cache[key];
			
			if(node == NULL){
				return -1;
			}
			
			moveToHead(node);
			
			return node->val;
		}
		
		
		void put(int key, int value){
			Node* node = cache[key];
			
			if(node == NULL){
				Node* newNode = new Node();
				newNode->key = key;
				newNode->val = value;
				
				addToFront(newNode);//Here we set its prev and next pointers
				
				cache[key] = newNode;
				
				totalItemsInCache++;
				
				if(totalItemsInCache > maxCapacity){
					removeLRUEntry();
				}
			} else {
				node->val = value;
				moveToHead(node);
			}
		}
		
	private:
		void moveToHead(Node* node){
			removeFromList(node);
			addToFront(node);
		}
		
		void removeFromList(Node* node){
			Node* savedPrevious = node->prev;
			Node* savedNext = node->next;
			
			savedPrevious->next = savedNext;
			savedNext->prev = savedPrevious;
		}
		
		void addToFront(Node* node){
			//Point the received node to the right things
			node->prev = head;
			node->next = head->next;
			
			//Fix up the original head and head's next
			head->next->prev = node;
			head->next = node;
		}
		
		void removeLRUEntry(){
			Node* tail = popTail();
			
			cache.erase(tail->key);
			
			totalItemsInCache--;
		}
		
		Node* popTail(){
			Node* tailItem = tail->prev;
			
			removeFromList(tailItem);
			
			return tailItem;
		}
};



int main(void){
	
	LRUCache* cache = new LRUCache(2);
	
	cache->put(1, 1);
	cache->put(2, 2);
	
	int r;
	
	r = cache->get(1);
	
	cout << "cache->get(1): " << r << endl;
	
	cache->put(3, 3);
	
	r = cache->get(2);
	
	cout << "cache->get(2): " << r << endl;
	
	cache->put(4, 4);
	
	r = cache->get(1);
	
	cout << "cache->get(1): " << r << endl;
	
	r = cache->get(3);
	
	cout << "cache->get(3): " << r << endl;
	
	r = cache->get(4);
	
	cout << "cache->get(4): " << r << endl;
	
	return 0;
}
