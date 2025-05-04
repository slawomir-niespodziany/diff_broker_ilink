#pragma once

#include <string>

class ILink {
public:
    /**
     * Send message. Returns true on success.
     */
    virtual bool send(const std::string &message) = 0;
};
