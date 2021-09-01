#include "GeodDistanceCalculator.h"
#include "Point.h"
#include "ReallySimpleDistanceCalculator.h"
#include "SimpleDistanceCalculator.h"
#include "SphereDistanceCalculator.h"

#include <fmt/format.h>

const auto ReallySimple = ReallySimpleDistanceCalculator();
const auto Simple = SimpleDistanceCalculator();
const auto Sphere = SphereDistanceCalculator();
const auto Geod = GeodDistanceCalculator();

template<typename... Args> void printer(Point& p1, Point& p2, Args&&... args)
{
    fmt::print("Distance {0} <--> {1}\n", p1.name(), p2.name());
    (fmt::print("{0}: {1} km\n", args.name(), args.distance(p1, p2)), ...);
    fmt::print("\n");
}

int main()
{
    Point rue1(49.9917, 8.41321, "Ruesselsheim Station");
    Point rue2(50.0049, 8.42182, "Ruesselsheim Opel bridge");
    printer(rue1, rue2, ReallySimple, Simple, Sphere, Geod);

    Point berlin(52.5164, 13.3777, "Berlin Brandenburg Gate");
    Point lissabon(38.692668, -9.177944, "Lisbon Tagus bridge");
    printer(berlin, lissabon, ReallySimple, Simple, Sphere, Geod);
}
