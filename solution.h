
#ifndef SOLUTION_H
#define SOLUTION_H

#include "node.h"
#include <vector>
#include <queue>
#include <unordered_map>
#include <string>

using namespace std;
namespace sol734
{
  class Solution
  {
  private:
  public:
    bool isSimilar(vector<string> &ws1, vector<string> &ws2, vector<pair<string, string>> pairs);
  };
}
#endif