#pragma once // pragma once zastepuje header guardy (ifndef - define - endif)

namespace l2
{

    class Vector3
    {
    private:
        static constexpr int VECTOR_SIZE = 3; // okresla ze moze byc uzyty jako const

        using internal_representation = union
        {
            struct
            {
                double x, y, z;
            };
            double buffer[VECTOR_SIZE];
        };

        static_assert(sizeof(internal_representation) == sizeof(double) * 3,
                      "Your internal_representation structure has to be properly sized!");
        static_assert(alignof(internal_representation) == alignof(double),
                      "Your vector structure has to be aligned as double!");

    public:
        internal_representation v;

        Vector3();
        Vector3(double x, double y, double z);

        double length() const;
        void mul(double a);
    };
    Vector3 vector3_add(const Vector3 &a, const Vector3 &b);
    void vector3_print(const Vector3 &a);
    static const Vector3 b1{1, 0, 0};
    static const Vector3 b2{0, 1, 0};
    static const Vector3 b3{0, 0, 1};
} // namespace l2
