class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        stack<int> st;
        queue<int> q;
        for(int i=sandwiches.size()-1; i>=0; i--)
            st.push(sandwiches[i]);
        for(int i=0; i<students.size(); i++)
            q.push(students[i]);
        
        int cycle = 0;
        while(!q.empty() && cycle < q.size()){
            if(q.front() == st.top()){
                q.pop();
                st.pop();
                cycle = 0;
            }else{
                q.push(q.front());
                q.pop();
                cycle++;
            }
        }
    return q.size();;
    }
};