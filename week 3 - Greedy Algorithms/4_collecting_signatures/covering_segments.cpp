#include <algorithm>
#include <iostream>
#include <climits>
#include <vector>

using std::vector;

struct Segment {
  int start, end;
};

// Sort with respect to Segment.end
bool sortByEnd(const Segment &lhs, const Segment &rhs) { return lhs.end < rhs.end; }

vector<int> optimal_points(vector<Segment> &segments)
 {
    std::sort(segments.begin(), segments.end(),sortByEnd);
    vector<int> points;
    int segment_size,index=0,segment_size_new=segments.size();

    while (segment_size_new>0)
    {
      segment_size=segment_size_new;
      index=0;
      points.push_back(segments[0].end);

      for (size_t i = 0; i < segment_size; ++i)
      {
        // std::cout << '\n' << "Segment Size: " << segment_size_new ;
        // std::cout << '\n' << "i: " << i;
        // std::cout << '\n' << "Segment: " << segments[index].start << " " << segments[index].end ;
        // std::cout << '\n' << "Index: " << index;
        // std::cout << '\n' << "Points.back: " << points.back() << '\n';
        if ((points.back() <= segments[index].end) and (points.back() >= segments[index].start))
          {
            segments.erase(segments.begin()+index);
            segment_size_new-=1;
          }
        else
          index+=1;
      }

  }return points;
}

int main() {
  int n;
  std::cin >> n;
  vector<Segment> segments(n);
  for (size_t i = 0; i < segments.size(); ++i) {
    std::cin >> segments[i].start >> segments[i].end;
  }
  vector<int> points = optimal_points(segments);
  std::cout << points.size() << "\n";
  for (size_t i = 0; i < points.size(); ++i) {
    std::cout << points[i] << " ";
  }
}
