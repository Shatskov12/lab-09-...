// Copyright 2020 Your Name <your_email>

#ifndef INCLUDE_PARSER_HPP_
#define INCLUDE_PARSER_HPP_
#include <iostream>
#include <string>
#include "Downloader.hpp"
#include "Queue.hpp"

struct URL {
  std::string url;
  size_t depth;
};
class Parser {
 public:
  Parser() = delete;
  static void parse();
  inline static Queue<URL> queue_url;
  inline static Queue<std::string> queue_writer;
};

#endif  // INCLUDE_PARSER_HPP_
