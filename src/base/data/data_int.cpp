//
// Created by user on 2019-07-17.
//

#include "data_int.h"

namespace base {

DataInt::DataInt(int _val)
  : val(_val),
    _type(DataType::INTEGER) {}

DataInt::~DataInt() = default;;

int DataInt::hash() {
    return val;
}

int DataInt::value() {
    return val;
}

DataType DataInt::type() {
    return INTEGER;
}

const char *DataInt::str() {
    return std::to_string(val).c_str();
}

}  // end of namespace base
