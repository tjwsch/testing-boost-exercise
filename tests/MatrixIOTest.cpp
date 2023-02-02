#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>
#include "matrixIO.hpp"

using namespace Eigen;

BOOST_AUTO_TEST_SUITE(MatrixIOTests)

BOOST_AUTO_TEST_CASE(OpenDataDimension)
{
    int expected_rows = 3;
    int expected_cols = 3;
    MatrixXd A = matrixIO::openData("../data/m3.csv", 3);
    BOOST_TEST(A.rows() == expected_rows);
}

BOOST_AUTO_TEST_SUITE_END()
