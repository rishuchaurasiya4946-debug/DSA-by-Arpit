class StockSpanner {
vector<int> price;
stack<int> s;

public:
StockSpanner() {
}


int next(int p) {
    price.push_back(p);
    int i = price.size() - 1;

    while (!s.empty() && price[s.top()] <= price[i]) {
        s.pop();
    }

    int ans;

    if (s.empty()) {
        ans = i + 1;
    }
    else {
        ans = i - s.top();
    }

    s.push(i);

    return ans;
}


};
