#pragma once

#include "Point.h"

#include <string_view>

class GeodDistanceCalculator
{
public:
    [[nodiscard]] static constexpr double distance(const From& from, const To& to)
    {
#ifndef _WIN32
        static_cast<void>(to);
        static_cast<void>(from);
        return -1;
#else
        static_cast<void>(to);
        static_cast<void>(from);
        return -1;
#endif
    }

    [[nodiscard]] static constexpr std::string_view name()  { return m_name; };

private:
    static constexpr std::string_view m_name = "Geod";
};
