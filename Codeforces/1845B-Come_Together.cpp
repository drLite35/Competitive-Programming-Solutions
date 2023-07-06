#include <iostream>
#include <cmath>

int calculateDistance(int ax, int ay, int bx, int by, int cx, int cy) {
    int ans = 1;
    
    if (bx < ax && cx < ax) {
        ans += std::min(std::abs(bx - ax), std::abs(cx - ax));
    } else if (bx > ax && cx > ax) {
        ans += std::min(std::abs(bx - ax), std::abs(cx - ax));
    }
    
    if (by < ay && cy < ay) {
        ans += std::min(std::abs(by - ay), std::abs(cy - ay));
    } else if (by > ay && cy > ay) {
        ans += std::min(std::abs(by - ay), std::abs(cy - ay));
    }
    
    return ans;
}



int main() {
    int t;
    std::cin >> t;

    for (int i = 0; i < t; i++) {
        int ax, ay, bx, by, cx, cy;
        std::cin >> ax >> ay >> bx >> by >> cx >> cy;
        int ans = calculateDistance(ax, ay, bx, by, cx, cy);
        std::cout << ans << std::endl;
    }

    return 0;
}




