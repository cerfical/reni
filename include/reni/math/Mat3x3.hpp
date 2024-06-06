#pragma once

#include "Mat2x2.hpp"
#include "MatBase.hpp"
#include "Vec3.hpp"
#include "mat_ops.hpp"

#include <array>

namespace reni {

    struct Mat3x3 : public math::MatBase<Mat3x3, Mat2x2, Vec3> {

        friend bool operator==(const Mat3x3&, const Mat3x3&) noexcept = default;

        static inline constexpr int Order = 3;


        static Mat3x3 translation(float dx, float dy) noexcept {
            return {
                { 1.0f, 0.0f, 0.0f },
                { 0.0f, 1.0f, 0.0f },
                {   dx,   dy, 1.0f }
            };
        }


        Mat3x3() noexcept = default;

        Mat3x3(Vec3 r1, Vec3 r2, Vec3 r3) noexcept
            : rows{ r1, r2, r3 } {}


        const Vec3& operator[](int i) const noexcept {
            return const_cast<Mat3x3&>(*this)[i];
        }

        Vec3& operator[](int i) noexcept {
            return rows[i];
        }


        std::array<Vec3, Order> rows;
    };

}
