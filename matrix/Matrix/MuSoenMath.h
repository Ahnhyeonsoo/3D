#include <iostream>
#pragma once

class mat3 {
public:
    float matrix[3][3];
    mat3() {}
    mat3(float mat11, float mat12, float mat13,
        float mat21, float mat22, float mat23,
        float mat31, float mat32, float mat33) {
        matrix[0][0] = mat11; matrix[0][1] = mat12; matrix[0][2] = mat13;
        matrix[1][0] = mat21; matrix[1][1] = mat22; matrix[1][2] = mat23;
        matrix[2][0] = mat31; matrix[2][1] = mat32; matrix[2][2] = mat33;
    }
};
class vec3 {
private:
    float x;
    float y;
    float z;

public:
    vec3() {

    }

    vec3(float _x, float _y, float _z) {
        x = _x;
        y = _y;
        z = _z;
    }

    void print() {
        std::cout << "x : " << x << ",y : " << y << ",z : " << z << "\n";
    }

    vec3 calculate(mat3& mat) {
        vec3 result;
        result.x = (mat.matrix[0][0] * x) + (mat.matrix[0][1] * y) + (mat.matrix[0][2] * z);
        result.y = (mat.matrix[1][0] * x) + (mat.matrix[1][1] * y) + (mat.matrix[1][2] * z);
        result.z = (mat.matrix[2][0] * x) + (mat.matrix[2][1] * y) + (mat.matrix[2][2] * z);
        return result;
    }
};