// https://practice.geeksforgeeks.org/problems/check-whether-k-th-bit-is-set-or-not-1587115620/1

bool checkKthBit(int n, int k)
{
    // Initialize a mask with the kth bit set to 1
    int mask = 1 << k;

    // Perform a bitwise AND operation to check if the kth bit is set
    if (n & mask)
    {
        return true; // The kth bit is set (1)
    }
    else
    {
        return false; // The kth bit is not set (0)
    }
}