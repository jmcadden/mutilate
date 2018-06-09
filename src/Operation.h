// -*- c++-mode -*-
#ifndef OPERATION_H
#define OPERATION_H

#include <event2/http.h>
#include <string>

using namespace std;

class Operation {
public:
  double start_time, end_time;

  enum type_enum {
    GET, POST, PUT, DELETE, PATCH
  };

  evhttp_cmd_type type;

  string key;
  // string value;

  double time() const { return (end_time - start_time) * 1000000; }
};


#endif // OPERATION_H
