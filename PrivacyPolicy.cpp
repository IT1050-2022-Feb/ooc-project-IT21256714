// IT21260988 - Randeniya R. A. D. S. E

#include "PrivacyPolicy.h"
#include <iostream>
#include <cstring>

using namespace std;

Policy::Policy(int pid, char pdate[], char pdesc[])
{
  policyID = pid;
  strcpy(IssueDate, pdate);
  strcpy(description, pdesc);
}

void Policy::displyPolicies()
{
  cout << "Policy ID: " << policyID;
  cout << "\nIssued Date: " << IssueDate;
  cout << "\nDescription: " << description << endl;
}

void Policy::Addpolicies() {}
void Policy::UpdatePolicies() {}

Policy::~Policy()
{
  cout << "\n\nPrivacy Policy is deleted";
}