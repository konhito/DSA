#include<bits/stdc++.h>
using namespace std;


// Weekly 411 question 

//A
// int main(){
//     string s = "10101";
//     int k = 1;
//     int n = s.size();
//     int ans = 0;
//     for(int i = 0;i<n;i++){
//         int zero = 0;
//         int one = 0;
//         for(int j = i;j<n;j++){
//             if(s[j] == '1'){
//                 one++;
//             }else{
//                 zero++;
//             }
//             if(one <= k || zero <= k){
//                 ans++;
//             }
//         }
//     }
//         cout << ans;
// }
// #include <bits/stdc++.h>

// using namespace std;
// using vi = vector<int>;

// void solve() {
//     int n;
//     cin >> n;
//    bool c = false;
    
//     unordered_map<int,int> mpp;
//     for(int i =0;i<2*n;i++){
//         int a;
//         cin >> a;
//         mpp[a]++;
//         if(mpp[i] == 2){
//             c = true;
//             break;
//         }
//     }
//     if(!c) cout << "Yes";
//     else cout  << "No";
    
   
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(0);

//     int t;
//     cin >> t;
//     while (t--) solve();

//     return 0;
// }
// 
// #include <bits/stdc++.h>

// using namespace std;
// using vi = vector < int > ;

// string swapstr(int start, int end, string s) {
//     for (int i = 0; i < end; i += 2) {
//         char temp  ;
//        temp = s[i];
        
//         s[i] = s[i + 1];
//         s[i + 1] = temp;
//     }
//     return s;

// }
// void solve() {

//     int n;
//     string s, s1;
//     cin >> n >> s;
//     if (s.size() % 2 == 0) s1 = swapstr(0, s.size(), s);
//     else s1 = swapstr(0, s.size() - 1, s);
  
//     for(int i = 0;i<s1.size();i++){
//         s1[i] = 'z' - s1[i] + 'a';
//     }
//     cout << s1 << endl;

// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(0);

//     int t;
//     cin >> t;
//     while (t--) solve();

//     return 0;
// }
// #include <bits/stdc++.h>

// using namespace std;
// using vi = vector<int>;

// void solve() {
//     int lim,bob;
//     int cntlim = 1,cntbob = 2;
//     cin >> lim >> bob;
//     while(lim || bob){
//         if(lim -= cntlim < 0) cout << "bob";
//         cntlim+=2;
//         if(bob -= cntbob < 0) cout << "bob";
//         cntbob+=2;
//     }
    
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(0);

//     int t;
//     cin >> t;
//     while (t--) solve();

//     return 0;
// }
// #include <bits/stdc++.h>

// using namespace std;
// using vi = vector<int>;

// void solve() {
//     // int p1,p2,p3;
//     // cin >> p1 >> p2 >>p3;
//     bool c = true;
//     for(int i = 0;i<3;i++){
//         int a;
//         cin >> a;
//         if(a > 50){
//             c = false;
//             if(i == 0 ) cout << "A" << endl;
//             else if(i == 1 ) cout << "B" << endl;
//             else{
//                 cout << "C" << endl;
//             }
         
//         }
//     }
//     if(c == true) cout << "NOTA" << endl;
    
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(0);

//     int t;
//     cin >> t;
//     while (t--) solve();

//     return 0;
// }


//-------------------------------------------------------------------------------
// #include <bits/stdc++.h>

// using namespace std;
// using vi = vector<int>;  

// void solve() {
//     int n;
//     cin >> n;
//     map<int, int> mpp;
//     vi v(n); 
//     for (int i = 0; i < n; i++) {
//         cin >> v[i];
//         mpp[v[i]]++;
//     }

//     int maxi = 0;
//     for (auto &pair : mpp) {                 //-> This bitch is good.
//         maxi = max(maxi, pair.second);
//     }

//     int sum = n - maxi;
//     cout << sum << endl;
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(0);

//     int t;
//     cin >> t;
//     while (t--) solve();

//     return 0;
// }

//----------------------------------------------
//#include <bits/stdc++.h>

// using namespace std;
// using vi = vector<string>;

// void solve() {
//     bool c = true;
//     int n;
//     cin >> n;
//     string s;
//     cin >> s;
//     map<char, int> mpp;
//     int maxi = 0;
//     for(int i = 0;i<n;i++){
        
//         mpp[s[i]]++;
//     }
 
//     for(auto &i : mpp){
//         if(i.second %2 !=0) c = false;
        
//     }
//     if(c) cout << "yes" << endl;
//     else cout << "no" << endl;
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(0);

//     int t;
//     cin >> t;
//     while (t--) solve();

//     return 0;
// }
