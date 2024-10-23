/**
 * @file: metadata
 * @brief: Lorem ipsem dolor sit amet
 * @author: jimmy
 * @date: 10/19/2024 at 9:14 PM
 */

#ifndef GAMEWORK_METADATA_H
#define GAMEWORK_METADATA_H

#include <string>

namespace gamework {

constexpr const char *WINDOWS   = "Windows";
constexpr const char *MAC       = "Mac";
constexpr const char *LINUX     = "Linux";
constexpr const char *OTHER     = "Other";

/** Metadata for this gamework program */
struct metadata {
    std::string app_name;
    std::string build_date;
    std::string platform;
    uint8_t version_major;
    uint8_t version_minor;

    metadata(std::string app_name, uint8_t major, uint8_t minor);
};

}

#endif //GAMEWORK_METADATA_H
