//IT21260988 - Randeniya R. A. D. S. E

class Policy{
private:
  int policyID;
  char IssueDate[20];
  char description[200];

public:
  Policy(int pid, char pdate[], char pdesc[]);
  void displyPolicies();
  void Addpolicies ();
  void UpdatePolicies ();
  ~Policy();
};