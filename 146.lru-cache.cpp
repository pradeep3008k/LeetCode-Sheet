/*
 * @lc app=leetcode id=146 lang=cpp
 *
 * [146] LRU Cache
 */
#include<bits/stdc++.h>
using namespace std;
// @lc code=start
class LRUCache {
    //keeping the first element at the last of list
    //first element of the list is the one that will get deleted if there is a need to remove an element
    int cap;
    list<int>l;
    unordered_map<int,pair<int,list<int>::iterator>>cache;
public:
    LRUCache(int capacity) {
        cap=capacity;
    }
    
    int get(int key) {
        auto it= cache.find(key);
        if(it==cache.end())return -1;
        //remove the element and put it in the front of cache
        l.erase(it->second.second);
        l.push_back(key);
        list<int>::iterator iter=l.end();
        iter--;
        it->second.second=iter;
        return it->second.first;
    }
    
    void put(int key, int value) {
        //check if key is present in cache or not
        auto it=cache.find(key);
        if(it==cache.end()){
            //doesn't exist in cache
            if(cap==cache.size()){
                //cache limit has reached
                int lru=l.front();
                l.pop_front();
                cache.erase(lru);
            }
            //now add this key to the back of lru
            l.push_back(key);
            list<int>::iterator iter=l.end();
            iter--;
            cache[key]={value,iter};
        }
        else{
            //key already present in the cache
            //put it at the back of list
            l.erase(it->second.second);
            l.push_back(key);
            list<int>::iterator iter=l.end();
            iter--;
            it->second.first=value; //in case the value has changed
            it->second.second=iter;
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
// @lc code=end

