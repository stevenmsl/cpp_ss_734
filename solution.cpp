#include "solution.h"
#include "util.h"
#include <unordered_set>
#include <algorithm>
#include <iterator>
#include <unordered_map>
#include <set>
#include <cstring>
using namespace sol734;
using namespace std;

/*takeaways
  - we re-construct the pairs of similar words into a set
    "great-fine",
    "acting-drama"
    "skills-talent"
  - let we grab a pair of words one from ws1 the other ws2
    we can then assemble the string in these two ways
    w1+"-"+w2 and w2+"-"+w1 to see if none of them
    is in the set to determine if ws1 and ws2 are not
    similar to each other

*/

bool Solution::isSimilar(vector<string> &ws1, vector<string> &ws2,
                         vector<pair<string, string>> pairs)
{
  if (ws1.size() != ws2.size())
    return false;
  /*the set includes the similar words in the format of
    w1-w2
  */
  auto sws = unordered_set<string>();
  for (auto &[w1, w2] : pairs)
    sws.insert(w1 + '-' + w2);

  for (auto i = 0; i < ws1.size(); i++)
    if (ws1[i] != ws2[i] &&
        !sws.count(ws1[i] + '-' + ws2[i]) &&
        !sws.count(ws2[i] + '-' + ws1[i]))
      return false;

  return true;
}