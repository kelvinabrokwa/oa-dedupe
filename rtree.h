/**
 * R Tree implementation for address point geometries
 */

#include <string>


class RTree {

protected:
  struct node {
    double coordinates[4];
    std::string *data;
  };

private:
  node *root;
  double buffer;
  void insert(*node) {}

public:
  RTree () {
    double buffer = 1.0;
  }
  RTree (double buff) {
    double buffer = buff;
  }

  void insert(double coords[2], std::string *address) {
    node new_point;
    new_point.coordinates[0] = coords[0] - buffer;
    new_point.coordinates[1] = coords[1] - buffer;
    new_point.coordinates[2] = coords[0] + buffer;
    new_point.coordinates[3] = coords[1] + buffer;
    new_point.data = address;
    insert(*new_point);
  }

  bool collides(double point[2]) {
    return false;
  }

};
