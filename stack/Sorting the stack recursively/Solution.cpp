
void solve(stack<int> &s, int x){

	if(s.empty() || s.top()<x){
		s.push(x);
		return;
	}
	int top=s.top();
	s.pop();

	solve(s,x);
	s.push(top);
}

stack<int> sortStack(stack<int> &s)
{
	if(s.empty()){
		return s;
	}
	int top=s.top();
	s.pop();

	sortStack(s);

	solve(s,top);

	return s;
}