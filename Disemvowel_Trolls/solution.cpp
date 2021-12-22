# include <string>
// Dec 22 19:17
std::string disemvowel(const std::string& str) {
  std::string vowels = "aeiouAEIOU";
  std::string newstr = "";
  
   for (auto s : str) {
       if (!(vowels.find(s) <= 9)) {
         newstr.push_back(s);
       }
  }
  return newstr;
}
