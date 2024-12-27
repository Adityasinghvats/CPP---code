#include<bits/stdc++.h>
#include<ctime>
using namespace std;

struct Product{
    int productId;
    string name;
    string category;
};
struct Order{
    int orderId;
    int productId;
    int quantity;
    string customerId;
    time_t orderData;
};
int main(){
    vector<Product> products = {
        {101,"Light","Electronics"},
        {102,"Laptop","Electronics"},
        {103,"Grinder","Home"},
        {104,"Shoes","Apparel"},
        {105,"Curtains","Home"},
    };

    deque<string> recentCustomers = {"C001","C002","C003"};
    recentCustomers.push_back("C004");
    recentCustomers.push_back("C005");

    list<Order> orderHistory;
    orderHistory.push_back({1,101,1,recentCustomers[1],time(0)});
    orderHistory.push_back({2,104,1,recentCustomers[0],time(0)});
    orderHistory.push_back({3,105,2,recentCustomers[4],time(0)});
    orderHistory.push_back({4,102,1,recentCustomers[2],time(0)});

    set<string> categories;
    for(const auto &product:products){
        categories.insert(product.category);
    }

    map<int, int> productStock = {
        {101, 5},
        {102, 25},
        {103, 10},
        {104, 55},
        {105, 6},
    };

    multimap<string , Order> customerOrders;
    for(const auto &order:orderHistory){
        customerOrders.insert({order.customerId, order});
    }
}