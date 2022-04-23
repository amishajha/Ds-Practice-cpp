queue<int>modifyQueue(queue<int>q,int k){

    stack<int>s;
    for(int i = 0;i<k;i++){
        int val = q.front();
        q.pop();
        s.push_back(val);
    }
    //fetch from stack and push into queue
    while(!s.empty()){
        int val = s.top();
        s.pop();
        q.push(val);

    }

    //step 3 fetch first (n-k) and push into the queue
    int t = q.size()-k;
    while(t--){
        int val = q.front();
        q.pop();
        q.push(val);

    }

    return q;


}