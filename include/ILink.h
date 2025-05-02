#pragma once

#include <string>

/**
 * @brief Interface for a link sending messages.
 */
class ILink {
public:
    /**
     * @brief Send a message.
     * @return Indicates of whether the transmission has succeeded.
     */
    virtual bool send(const std::string &message) = 0;
};
