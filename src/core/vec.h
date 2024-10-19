/**
 * @file: vec
 * @brief: 2 dimensional mathematical vectors
 * @author: jimmy
 * @date: 10/19/2024 at 5:51 PM
 */

#ifndef GAMEWORK_VEC_H
#define GAMEWORK_VEC_H

#include <cmath>

template <typename T>
struct vec {
    T x, y;

    vec<T>() : x(0), y(0) {}
    vec<T>(T x, T y) : x(x), y(y) {};

    bool operator==(const vec<T> &other) {
        return (x == other.x) && (y == other.y);
    }

    vec<T> operator+(const vec<T> &other) {
        return {
            x + other.x,
            y + other.y
        };
    }

    vec<T> &operator+=(vec<T> &other) {
        x += other.x;
        y += other.y;
        return *this;
    }

    vec<T> operator-(const vec<T> &other) {
        return {
                x - other.x,
                y - other.y
        };
    }

    vec<T> &operator-=(vec<T> &other) {
        x -= other.x;
        y -= other.y;
        return *this;
    }

    vec<T> operator*(const vec<T> &other) {
        return {
                x * other.x,
                y * other.y
        };
    }

    /** Scalar multiplication */
    vec<T> operator*(const T &n) {
        return {
                x * n,
                y * n
        };
    }

    vec<T> &operator*=(vec<T> &other) {
        x *= other.x;
        y *= other.y;
        return *this;
    }

    vec<T> operator/(const vec<T> &other) {
        return {
                x / other.x,
                y / other.y
        };
    }

    /** Scalar division */
    vec<T> operator/(const T &n) {
        return {
                x / n,
                y / n
        };
    }

    vec<T> &operator/=(vec<T> &other) {
        x /= other.x;
        y /= other.y;
        return *this;
    }

    vec<T> normalized() {
        return *this / hypotf(x, y);
    }
};

using v2f = vec<float>;
using v2i = vec<int>;

#endif //GAMEWORK_VEC_H
