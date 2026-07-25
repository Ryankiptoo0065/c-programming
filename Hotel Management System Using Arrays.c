#include <iostream>
#include <cstdlib>()
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    // --- 1D Array: Weekly Revenue Tracker ---
    double revenue[7];
    double totalRevenue = 0, averageRevenue;

    cout << "--- Weekly Revenue Tracker ---" << endl;
    for (int i = 0; i < 7; i++) {
        cout << "Enter revenue for day " << (i + 1) << ": ";
        cin >> revenue[i];
        totalRevenue += revenue[i];
    }
    averageRevenue = totalRevenue / 7;

    cout << "\nTotal Weekly Revenue: " << totalRevenue << endl;
    cout << "Average Daily Revenue: " << averageRevenue << endl;

    // --- 2D Array: Room Occupancy (One Branch) ---
    int occupancy[5][10];
    cout << "\n--- Room Occupancy (One Branch) ---" << endl;

    for (int floor = 0; floor < 5; floor++) {
        int occupied = 0, vacant = 0;
        for (int room = 0; room < 10; room++) {
            occupancy[floor][room] = rand() % 2;
            if (occupancy[floor][room] == 1)
                occupied++;
            else
                vacant++;
        }
        cout << "Floor " << (floor + 1) << ": Occupied = " << occupied
             << ", Vacant = " << vacant << endl;
    }

    // --- 3D Array: Multiple Branches ---
    int chain[3][5][10];
    int totalOccupied = 0;

    cout << "\n--- Occupancy Across All Branches ---" << endl;
    for (int branch = 0; branch < 3; branch++) {
        for (int floor = 0; floor < 5; floor++) {
            for (int room = 0; room < 10; room++) {
                chain[branch][floor][room] = rand() % 2;
                if (chain[branch][floor][room] == 1)
                    totalOccupied++;
            }
        }
    }

    cout << "Total Occupied Rooms Across All Branches: " << totalOccupied << endl;

    return 0;
}
