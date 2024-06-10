#pragma once

#include <iosfwd>

namespace reni {

    enum class Keys;
    enum class MouseButtons;
    enum class LogKind;

    struct Size2;
    struct Point2;
    struct Color;

    struct Vec4;
    struct Vec3;
    struct Vec2;

    struct Mat4x4;
    struct Mat3x3;
    struct Mat2x2;


    std::ostream& operator<<(std::ostream& out, Keys k);

    std::ostream& operator<<(std::ostream& out, MouseButtons b);

    std::ostream& operator<<(std::ostream& out, LogKind k);


    std::ostream& operator<<(std::ostream& out, Size2 s);

    std::ostream& operator<<(std::ostream& out, Point2 p);

    std::ostream& operator<<(std::ostream& out, Color c);


    std::ostream& operator<<(std::ostream& out, Vec2 v);

    std::ostream& operator<<(std::ostream& out, Vec3 v);

    std::ostream& operator<<(std::ostream& out, Vec4 v);


    std::ostream& operator<<(std::ostream& out, const Mat4x4& m);

    std::ostream& operator<<(std::ostream& out, const Mat3x3& m);

    std::ostream& operator<<(std::ostream& out, const Mat2x2& m);

}
