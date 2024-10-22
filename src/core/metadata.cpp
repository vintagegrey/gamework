//
// Created by jimmy on 10/19/2024.
//
#include "metadata.h"
#include <utility>
#include <ctime>
#include <iomanip>
#include <sstream>

namespace gamework {

metadata::metadata(std::string app_name, uint8_t major, uint8_t minor)
: app_name(std::move(app_name)), version_major(major), version_minor(minor) {
#if _WIN32
    platform = WINDOWS;
#elif __APPLE__
    platform = MAC;
#elif __linux__
    platform = LINUX;
#else
    platform = OTHER;
#endif

    auto t = std::time(nullptr);
    auto tm = *std::localtime(&t);
    std::stringstream ss;
    ss << std::put_time(&tm, "%m-%d-%y %H:%M:%S");
    build_date = ss.str();
}

}