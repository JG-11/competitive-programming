#include <iostream>
#include <unordered_map>

using namespace std;


class TrieNode {
	public:
		unordered_map<char, TrieNode*> child;
		bool endOfWord = false;		
}; 


class Trie {
	public:
		TrieNode* root;
		
		//We initialize our data structure
		Trie(){
			root = new TrieNode();
		}
		
		//We insert a word into the trie
		void insert(string word){
			TrieNode* current = root;
			
			for(char c : word){
				if(current->child[c] == NULL){
					current->child[c] = new TrieNode();
				}
				current = current->child[c];
			}
			
			current->endOfWord = true;		
		}
		
		//We return if the whole word is in the trie
		bool search(string word){
			TrieNode* aux = query(word);
			
			if(aux != NULL && aux->endOfWord){
				return true;
			}
			
			return false;
		}
		
		
		//We return if there is any word in the trie that starts with the given prefix
		bool startsWith(string prefix){
			TrieNode* aux = query(prefix);
			
			if(aux != NULL){
				return true;
			} 
			
			return false;
		}
		
	private:
		TrieNode* query(string &word){
			TrieNode* current = root;
			
			for(int i = 0; i < word.length() && current != NULL; i++){
				current = current->child[word[i]];
			}
			
			return current;
		}
};


int main(void){
	
	Trie* object = new Trie();
	
	string word;
	
	word = "apple";
	
	object->insert(word);
	
	cout << word << " inserted into the trie" << endl;
	
	string search;
	
	search = "orange";
	
	cout << search << " exists: " << (object->search(search) ? "true" : "false") << endl;
	
	string prefix;
	
	prefix = "app";
	
	cout << prefix << " exists: " << (object->startsWith(prefix) ? "true" : "false") << endl;
	
	return 0;
}
