#pragma once

class Vector
{
public:
    Vector()
    {
        m_length = 10;
        m_buffer = new long[m_length]; // FIXME: Look up member initialization
        for (int i = 0; i < m_length; ++i) {
            m_buffer[i] = 11 * (i+1);
        }
    }

    friend std::ostream & operator<<(std::ostream & stream, const Vector & v)
    {
        stream << "[";
        if (v.m_length >= 1) {
            stream << v.m_buffer[0];
        }
        for(int i = 1; i < v.m_length; ++i) {
            stream << ", " << v.m_buffer[i];
        }
        stream << "]";
        return stream;
    }

private:
    long * m_buffer;
    long m_length = 0;
};
