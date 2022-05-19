class User{
    protected:
       char name[20];
       char address[80];
       char NIC[10];
       char email[30];
       char password[8];
    public:
      User();
      User(const char uName[], const char uAddress[], const char uNIC[], const char uEmail[], const char uPassword[]);
      void AddUserDetails(const char uName[],const char uAddress[],const char uNIC[]);
      void Register(const char uEmail[], const char uPassword[]);
      void displayDetails();
      ~User();
};