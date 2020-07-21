#include <cstdint>

constexpr int port = 1998; //! default XOT communication port

/**
 * The communication using XOT protocol is defined by a stack of protocols defined
 * by a superset of protocols and it has the following format
 * 
 * +---------------+
 * |  IP           |
 * +---------------+
 * |  TCP header   |
 * +---------------+
 * |  XOT header   |
 * +---------------+
 * |  X.25 header  |
 * +---------------+
 * 
 */

struct header {
    //! version of XOT protocol (it must be defined as 0)
    uint16_t version;
    //! a valid X.25 package length
    uint16_t length;
};