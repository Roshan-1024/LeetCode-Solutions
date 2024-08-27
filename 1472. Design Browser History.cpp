class BrowserHistory {
    vector<string> history;
    int i = 0;
public:
    BrowserHistory(string homepage) {
        history.push_back(homepage);
    }
    
    void visit(string url) {
        while(history.size() != i+1)    history.pop_back();
        history.push_back(url);
        i++;
    }
    
    string back(int steps) {
        if(steps <= i){
            i-=steps;
            return history[i];
        }
        i = 0;
        return history[0];
    }
    
    string forward(int steps) {
        if(steps <= history.size()-i-1){
            i += steps;
            return history[i];
        }
        i = history.size()-1;
        return history[history.size()-1];
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */