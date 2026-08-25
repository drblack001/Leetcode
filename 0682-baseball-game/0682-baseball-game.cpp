class Solution { 
public: 
    int calPoints(vector<string>& operations) { 
        
        stack<string> st; 
        
        for(int i = 0; i < operations.size(); i++){ 
            
            if(operations[i] == "C"){ 
                st.pop(); 
            } 
            
            else if(operations[i] == "D"){ 
                int a = stoi(st.top()); 
                st.push(to_string(2 * a)); 
            } 
            
            else if(operations[i] == "+"){ 
                int a = stoi(st.top()); 
                st.pop(); 
                
                int b = stoi(st.top()); 
                
                st.push(to_string(a)); 
                st.push(to_string(a + b)); 
            }
            
            else{ 
                st.push(operations[i]); 
            } 
        } 
        
        int sum = 0;
        
        while(!st.empty()){
            sum += stoi(st.top());
            st.pop();
        }
        
        return sum;
    } 
};