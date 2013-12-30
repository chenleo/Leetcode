class Solution {
public:
    int evalRPN(vector<string> &tokens) {
        
        //int result;
        vector<int> container;
        
        int reference;
        int target;
        for (int i = 0; i < tokens.size(); i++) {
            if (tokens[i].size() == 1) {
            switch (tokens[i].front()) {
                case '+':
                {
                    target = container.back();
                    container.pop_back();
                    reference = container.back();
                    container.pop_back();
                    container.push_back(reference + target);
                    break;
                }
                case '-':
                {
                    target = container.back();
                    container.pop_back();
                    reference = container.back();
                    container.pop_back();
                    container.push_back(reference - target);
                    break;
                }
                case '*':
                {
                    target = container.back();
                    container.pop_back();
                    reference = container.back();
                    container.pop_back();
                    container.push_back(target *reference );
                    break;
                }
                case '/':
                {
                    target = container.back();
                    container.pop_back();
                    reference = container.back();
                    container.pop_back();
                    container.push_back(reference / target);
                    break;
                }
                
                default:
                    {
                       container.push_back(stoi(tokens[i]));
                       //tokens.pop_back();
                       break;
                    }
            }
            }
            else {
                container.push_back(stoi(tokens[i]));
                       //tokens.pop_back();
            }
        }
        return container[0];
        
    }
};
