/*
    Day0: Hello_World
    #include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    // Declare a variable named 'input_string' to hold our input.
    string input_string;

    // Read a full line of input from stdin (cin) and save it to our variable, input_string.
    getline(cin, input_string);

    // Print a string literal saying "Hello, World." to stdout using cout.
    cout << "Hello, World." << endl;

    // TODO: Write a line of code here that prints the contents of input_string to stdout.
    cout << input_string;
    return 0;
}

 */

/*
    Day1: Data_types
    #include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";


    // Declare second integer, double, and String variables.
    int se_int;
    float se_fl;
    string se_str;
    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    cin >> se_int >> se_fl;
    cin.ignore();
    getline(cin, se_str);
    // Print the sum of both integer variables on a new line.
    cout << i + se_int << "\n";
    // Print the sum of the double variables on a new line.
    cout << fixed << setprecision(1) << (d+se_fl)*1.0 << "\n";
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout << s << se_str;
    return 0;
}
 */

/*
    Day2:Operators
    #include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);


 * Complete the 'solve' function below.
 *
 * The function accepts following parameters:
 *  1. DOUBLE meal_cost
 *  2. INTEGER tip_percent
 *  3. INTEGER tax_percent


void solve(double meal_cost, int tip_percent, int tax_percent) {
    double tip = meal_cost*tip_percent/100*1.0;
    double tax = meal_cost*tax_percent/100*1.0;
    double res = meal_cost+tip+tax;

    res = round(res);
    cout << res;
}

int main()
{
    string meal_cost_temp;
    getline(cin, meal_cost_temp);

    double meal_cost = stod(ltrim(rtrim(meal_cost_temp)));

    string tip_percent_temp;
    getline(cin, tip_percent_temp);

    int tip_percent = stoi(ltrim(rtrim(tip_percent_temp)));

    string tax_percent_temp;
    getline(cin, tax_percent_temp);

    int tax_percent = stoi(ltrim(rtrim(tax_percent_temp)));

    solve(meal_cost, tip_percent, tax_percent);

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
            s.begin(),
            find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
            find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
            s.end()
    );

    return s;
}

*/

/*
    Day3:Intro to Conditional Statement
    #include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



int main()
{
    string N_temp;
    getline(cin, N_temp);

    int N = stoi(ltrim(rtrim(N_temp)));

    if (N%2 == 1) cout << "Weird";
    else
    {
        if ((2 <= N && N <= 5) || N > 20) cout << "Not Weird";
        else cout << "Weird";
    }

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
 */

/*
    Day4:Class and Instances
    using namespace std;
#include <iostream>

class Person{
    public:
        int age;
        Person(int initialAge);
        void amIOld();
        void yearPasses();
    };

    Person::Person(int initialAge){
        // Add some more code to run some checks on initialAge
        if (initialAge < 0)
        {
            initialAge = 0;
            cout << "Age is not valid, setting age to 0." << "\n";
        }
        age = initialAge;
    }

    void Person::amIOld(){
        // Do some computations in here and print out the correct statement to the console
        if (age < 13) cout << "You are young." << "\n";
        else if (age >= 18) cout << "You are old." << "\n";
        else cout << "You are a teenager." << "\n";
    }

    void Person::yearPasses(){
        // Increment the age of the person in here
        age++;
    }

int main(){
    int t;
	int age;
    cin >> t;
    for(int i=0; i < t; i++) {
    	cin >> age;
        Person p(age);
        p.amIOld();
        for(int j=0; j < 3; j++) {
        	p.yearPasses();
        }
        p.amIOld();

		cout << '\n';
    }

    return 0;
}
 */

/*
    Day5: Loops
    #include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    for (int i = 1; i <= 10; i++)
    {
        cout << n << " x " << i << " = " << n*i << "\n";
    }

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
 */

/*
    Day6: Lets review
    #include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    int t;
    string s;
    cin >> t;

    for (int j = 1; j <= t; j++)
    {
        cin >> s;
        s = s;
        int n = s.size();

        for (int i = 0; i < n; i = i + 2) cout << s[i];
        cout << " ";
        for (int i = 1; i < n; i = i + 2) cout << s[i];

        cout << "\n";
    }

    return 0;
}
 */

/*
    Day7: Arrays
    #include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);



int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split(rtrim(arr_temp_temp));

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    for (int i = n - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
 */

/*
    Day8: Dictionaries and Maps
    #include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

map <string, string> mp;

int main() {
    int n;
    cin >> n;

    string x, y;

    for (int i = 1; i <= n; i++)
    {
        cin >> x >> y;
        mp[x] = y;
    }

    while(cin >> x)
    {
        if  (mp.find(x) != mp.end()) cout << x << "=" << mp[x];
        else cout << "Not found";

        cout << "\n";

    }
    return 0;
}
 */

/*
    Day9:
    #include <bits/stdc++.h>

using namespace std;



int factorial(int n) {
    if (n == 1) return 1;
    else return n*factorial(n-1);
}

int main()
{
    int n;
    cin >> n;
    cout << factorial(n);

    return 0;
}
 */

/*
    Day10: Binary_num
    #include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector <int> v;

int main()
{
    int n, res = 0, cnt = 0;
    cin >> n;

    while (n > 0)
    {
        v.push_back(n%2);
        n = n/2;
    }

    n = v.size();

    if (v[0] == 1)
    {
        res = 1;
        cnt = 1;
    }

    for (int i = 1; i < n; i++)
    {
        if (v[i] == 1) cnt++;
        else
        {
            res = max(res, cnt);
            cnt = 0;
        }
        res = max(res, cnt);
    }

    cout << res;

    return 0;
}
 */

/*
    Day11: 2D Arrays
    #include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);



int main()
{

    vector<vector<int>> arr(6);

    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        string arr_row_temp_temp;
        getline(cin, arr_row_temp_temp);

        vector<string> arr_row_temp = split(rtrim(arr_row_temp_temp));

        for (int j = 0; j < 6; j++) {
            int arr_row_item = stoi(arr_row_temp[j]);

            arr[i][j] = arr_row_item;
        }
    }

    int res = 0, cnt = -1e9;

    for (int i = 0; i <= 3; i++)
    {
        for (int j = 0; j <= 3; j++)
        {
            res = 0;
            for (int k = j; k <= j + 2; k++) res = res + arr[i][k];
            res = res + arr[i+1][j+1];
            for (int k = j; k <= j + 2; k++) res = res + arr[i+2][k];

            cnt = max(cnt, res);
        }
    }

    cout << cnt;

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
 */

/*
    Day15: #include <iostream>
#include <cstddef>
using namespace std;
class Node
{
    public:
        int data;
        Node *next;
        Node(int d){
            data=d;
            next=NULL;
        }
};
class Solution{
    public:

      Node* insert(Node *head,int data)
      {
          Node *new_Node = new Node(data);

          if (head == NULL) return new_Node;

          Node *temp = head;
          while(temp -> next != NULL)
          {
              temp = temp -> next;
          }

          temp -> next = new_Node;
          return head;
      }

      void display(Node *head)
      {
          Node *start=head;
          while(start)
          {
              cout<<start->data<<" ";
              start=start->next;
          }
      }
};
int main()
{
	Node* head=NULL;
  	Solution mylist;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        head=mylist.insert(head,data);
    }
	mylist.display(head);

}
 */

/*
  Day16: Exceptions
  #include <bits/stdc++.h>

using namespace std;



int main()
{
    string S;
    getline(cin, S);

    try {
        cout << stoi(S);
    } catch (invalid_argument) {
        cout << "Bad String";
    }

    return 0;
}
 */

/*
  Day17: More Exception
  #include <cmath>
#include <iostream>
#include <exception>
#include <stdexcept>
using namespace std;

//Write your code here
class Calculator
{
    public:
        int power(int n, int p)
        {
            if (n < 0 || p < 0) throw invalid_argument("n and p should be non-negative");
            else return pow(n, p);
        }

};

int main()
{
    Calculator myCalculator=Calculator();
    int T,n,p;
    cin>>T;
    while(T-->0){
      if(scanf("%d %d",&n,&p)==2){
         try{
               int ans=myCalculator.power(n,p);
               cout<<ans<<endl;
         }
         catch(exception& e){
             cout<<e.what()<<endl;
         }
      }
    }

}
 */

/*
    Day20: Sorting
    #include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);



int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string a_temp_temp;
    getline(cin, a_temp_temp);

    vector<string> a_temp = split(rtrim(a_temp_temp));

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        int a_item = stoi(a_temp[i]);

        a[i] = a_item;
    }

    // Write your code here
    int numberOfSwaps = 0;

    for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - 1; j++) {
        // Swap adjacent elements if they are in decreasing order
        if (a[j] > a[j + 1]) {
            swap(a[j], a[j + 1]);
            numberOfSwaps++;
        }
    }

    // If no elements were swapped during a traversal, array is sorted
    if (numberOfSwaps == 0) {
        break;
    }
}

    cout << "Array is sorted in " << numberOfSwaps << " swaps." << "\n";
    cout << "First Element: " << a[0] << "\n";
    cout << "Last Element: " << a[n-1];

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
 */

/*
    Day24: More linked list
    #include <cstddef>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Node
{
    public:
        int data;
        Node *next;
        Node(int d){
            data=d;
            next=NULL;
        }
};
class Solution{
    public:

          Node* removeDuplicates(Node *head)
          {
            //Write your code here
            Node *cur = head;

            while(cur)
            {
                if (cur -> next != NULL)
                {
                    Node *new_Node = cur->next;
                    if(cur -> data == new_Node->data)
                    {
                        cur->next = new_Node->next;
                        new_Node->next = NULL;
                        delete new_Node;
                        continue;
                    }
                }
                cur = cur->next;
            }
            return head;
          }

          Node* insert(Node *head,int data)
          {
               Node* p=new Node(data);
               if(head==NULL){
                   head=p;

               }
               else if(head->next==NULL){
                   head->next=p;

               }
               else{
                   Node *start=head;
                   while(start->next!=NULL){
                       start=start->next;
                   }
                   start->next=p;

               }
                    return head;


          }
          void display(Node *head)
          {
                  Node *start=head;
                    while(start)
                    {
                        cout<<start->data<<" ";
                        start=start->next;
                    }
           }
};

int main()
{
	Node* head=NULL;
  	Solution mylist;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        head=mylist.insert(head,data);
    }
    head=mylist.removeDuplicates(head);

	mylist.display(head);

}
 */

/*
    Day26: Nested_logic
    #include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

int d1, m1, y1, d2, m2, y2, res = 0;

cin >> d1 >> m1 >> y1;
cin.ignore();
cin >> d2 >> m2 >> y2;
cin.ignore();

if(y1 > y2) res = 10000;
else if (y1 == y2 && m1 > m2) res = 500*(m1 - m2);
else if (y1 == y2 && m1 == m2 && d1 > d2) res = 15*(d1 - d2);

cout << res;
return 0;
}
 */

/*
    Day29: Bitwise AND
    #include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);


int bitwiseAnd(int N, int K) {
    int res = 0, tem = 0;

    for (int i = 1; i <= N; i++)
    {
        for (int j = i + 1; j <= N; j++)
        {
            tem = i & j;
            if (tem < K) res = max(tem, res);
        }
    }

    return res;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string t_temp;
    getline(cin, t_temp);

    int t = stoi(ltrim(rtrim(t_temp)));

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string first_multiple_input_temp;
        getline(cin, first_multiple_input_temp);

        vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

        int count = stoi(first_multiple_input[0]);

        int lim = stoi(first_multiple_input[1]);

        int res = bitwiseAnd(count, lim);

        fout << res << "\n";
    }

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
            s.begin(),
            find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
            find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
            s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
 */