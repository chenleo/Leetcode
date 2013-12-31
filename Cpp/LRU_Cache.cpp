//should be carefully reviewed
//for list & unordered_map

class LRUCache{
public:
    LRUCache(int capacity) {
        this->capacity = capacity;
    }
    
    int get(int key) {
        if(hashTable.find(key) == hashTable.end())
            return -1;
        else {
            cashe.splice(cashe.begin(), cashe, hashTable[key]);
            hashTable[key] = cashe.begin();
            return hashTable[key]->val;
        }
    }
    
    void set(int key, int value) {
        if (get(key) != -1)
            hashTable[key]->val = value;
        else {
            cashe.push_front(CasheNode(key, value));
            hashTable[key] = cashe.begin();
            if(cashe.size() > capacity) {
                hashTable.erase(cashe.back().key);
                cashe.pop_back();
            }
        }
    }
    
private:
    struct CasheNode{
        int key;
        int val;
        CasheNode(int k, int v):key(k),val(v) {}
    };
    list<CasheNode> cashe;
    unordered_map<int, list<CasheNode>::iterator> hashTable;
    int capacity;
};
