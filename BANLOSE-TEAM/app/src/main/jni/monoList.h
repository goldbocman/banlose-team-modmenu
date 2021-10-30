#pragma once
template <typename T>
struct monoArray
{
    void* klass;
    void* monitor;
    void* bounds;
    void *max_length;
    void* vector [32];
    void* getLength()
    {
        return max_length;
    }
    T getPointer()
    {
        return (T)vector;
    }
};

template <typename T>
struct monoList {
    void *klass;
    void *monitor;
    monoArray<T > *items;
    int size;
    int version;

    T getItems(){
        return items->getPointer();
    }

    int getSize(){
        return size;
    }

    int getVersion(){
        return version;
    }
};

template <typename K, typename V>
struct monoDictionary {
    void *klass;
    void *monitor;
    monoArray<int **> *table;
    monoArray<void **> *linkSlots;
    monoArray<K> *keys;
    monoArray<V> *values;
    int touchedSlots;
    int emptySlot;
    int size;

    K getKeys(){
        return keys->getPointer();
    }

    V getValues(){
        return values->getPointer();
    }

    void * getNumKeys(){
        return keys->getLength();
    }

    void * getNumValues(){
        return values->getLength();
    }

    int getSize(){
        return size;
    }
};
