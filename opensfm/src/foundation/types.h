#pragma once

#include <Eigen/Eigen>

template< class T >
using Vec3T = Eigen::Matrix<T, 3, 1>;
using Vec3d = Vec3T<double>;
template< class T >
using Vec2T = Eigen::Matrix<T, 2, 1>;
using Vec2d = Vec2T<double>;
template< class T >
using VecXT = Eigen::Matrix<T, -1, 1>;
using VecXd = VecXT<double>;
template< class T, int N >
using VecNXT = Eigen::Matrix<T, N, 1>;
template< int N >
using VecNXd = VecNXT<double, N>;

template< class T >
using Mat2T = Eigen::Matrix<T, 2, 2>;
using Mat2d = Mat2T<double>;

template< class T >
using MatXT = Eigen::Matrix<T, -1, -1>;
using MatXd = MatXT<double>;