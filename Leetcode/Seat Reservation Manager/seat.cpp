#include <queue>
#include <vector>

class SeatManager {
public:
    std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap;

    SeatManager(int n) {
        for (int i = 1; i <= n; i++) {
            minHeap.push(i);
        }
    }

    int reserve() {
        int x = minHeap.top();
        minHeap.pop();
        return x;
    }

    void unreserve(int seatNumber) {
        minHeap.push(seatNumber);
    }
};
