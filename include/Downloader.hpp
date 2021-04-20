// Copyright 2020 Your Name <your_email>

#ifndef INCLUDE_DOWNLOADER_HPP_
#define INCLUDE_DOWNLOADER_HPP_
#include <iostream>
#include "Downloader.hpp"
#include "Queue.hpp"
#include <string>

using std::string;

struct Page{
  string page;
  string protocol;
  string host;
  string target;
  size_t depth;
};

class Downloader {
 public:
  Downloader() = delete;
  static void DownloadPage();
  static Queue<Page> queue_pages;

 private:
  static void DownloadHttp(Page&& _page);
  static void DownloadHttps(Page&& _page);
};

#endif  // INCLUDE_DOWNLOADER_HPP_
