//
// Created by юрий on 12/04/2021.
//

#ifndef TEMPLATE_DOWNLOADER_HPP
#define TEMPLATE_DOWNLOADER_HPP
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
  explicit Downloader() = delete;
  static void DownloadPage();
  inline static Queue<Page> queue_pages;
 private:
  static void DownloadHttp(Page&& _page);
  static void DownloadHttps(Page&& _page);
};

#endif  // TEMPLATE_DOWNLOADER_HPP
