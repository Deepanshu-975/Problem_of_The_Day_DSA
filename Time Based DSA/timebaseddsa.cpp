class TimeMap {
private:
    unordered_map<string, map<int, string>> data;
public:
    TimeMap() {
    
    }
    
    void set(string key, string value, int timestamp) {
         // Insert the value for the key at the given timestamp
        data[key][timestamp] = value;
    }
    
    string get(string key, int timestamp) {
        if (data.find(key) == data.end()) {
            return "";
        }
         // Find the most recent value at or before the given timestamp
        auto it = data[key].upper_bound(timestamp);
        if (it == data[key].begin()) {
            return ""; // No valid timestamp found
        }

        --it; // Move iterator to the largest timestamp <= given timestamp
        return it->second;
    }
};
