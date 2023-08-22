#pragma once
#include <numbers>
#include <string_view>
#include <utility>

class Point
{
public:
    constexpr Point(double lat, double lon, std::string_view name = "") : m_lat(lat), m_lon(lon), m_name(name){};
    [[nodiscard]] constexpr double lat() const { return m_lat; };
    [[nodiscard]] constexpr double lon() const { return m_lon; };

    [[nodiscard]] constexpr std::string_view name() const { return m_name; }

private:
    double m_lat;
    double m_lon;
    std::string_view m_name;
};

struct From: public Point
{
    using Point::Point;
};

struct To: public Point
{
    using Point::Point;
};

/*
 * Degrees to radians = PI / 180
 */
constexpr double DEG_TO_RAD = std::numbers::pi / 180.0;
