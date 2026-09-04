class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        // unordered_map<int, int> mp;
        // int count1=0;

        // for(int i=0;i<students.size();i++){
        //     mp[students[i]]++;
        // }

        // for(int i=0;i<sandwiches.size();i++){
        //     mp[sandwiches[i]]++;
        // }
        queue<int> q1 ;
        queue<int> q2;
        
        for(int i=0;i<students.size();i++){
            q1.push(students[i]);
        }

        for(int i=0;i<sandwiches.size();i++){
            q2.push(sandwiches[i]);
        }

        int count =0;
        while(!q1.empty()){
            if(q1.front()==q2.front()){
                q1.pop();
                q2.pop();
                count=0;
            }
            else{
                int a = q1.front();
                q1.pop();
                q1.push(a);
                count++;

                if(count == sandwiches.size()){
                    break;
                }
            }
        }

        return q1.size();
    }
};