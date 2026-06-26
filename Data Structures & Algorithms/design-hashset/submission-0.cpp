class MyHashSet {
private:
    // Size is 1000001 to safely cover keys from 0 to 1000000
    std::vector<bool> container;

public:
    MyHashSet() : container(1000001, false) {}
    
    void add(int key) {
        container[key] = true;
    }
    
    void remove(int key) {
        container[key] = false;
    }
    
    bool contains(int key) {
        return container[key];
    }
};