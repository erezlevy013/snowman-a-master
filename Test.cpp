/**
 * An example of how to write unit tests.
 * Use this as a basis to build a more complete Test.cpp file.
 * 
 * IMPORTANT: Please write more tests - the tests here are only for example and are not complete.
 *
 * AUTHORS: <Please write your names here>
 * 
 * Date: 2021-02
 */

#include "doctest.h"
#include "snowman.hpp"
using namespace ariel;

#include <string>
#include <algorithm>
using namespace std;

/**
 * Returns the input string without the whitespace characters: space, newline and tab.
 * Requires std=c++2a.
 */
string nospaces(string input) {
	std::erase(input, ' ');
	std::erase(input, '\t');
	std::erase(input, '\n');
	std::erase(input, '\r');
	return input;
}


TEST_CASE("Good snowman code") {
    CHECK(nospaces(snowman(11111111)) == nospaces("_===_\n(.,.)\n( : )\n( : )"));
    CHECK(nospaces(snowman(12111112)) == nospaces("_===_\n(...)\n( : )\n( : )"));
    CHECK(nospaces(snowman(13111113)) == nospaces("_===_\n(._.)\n( : )\n( : )"));
    CHECK(nospaces(snowman(14111114)) == nospaces("_===_\n(. .)\n( : )\n( : )"));
    CHECK(nospaces(snowman(11111121)) == nospaces("_===_\n(.,.)\n( : )\n( : )"));
    CHECK(nospaces(snowman(12211131)) == nospaces("_===_\n(o..)\n( : )\n( : )"));
    CHECK(nospaces(snowman(13311141)) == nospaces("_===_\n(O_.)\n( : )\n( : )"));
    CHECK(nospaces(snowman(14414411)) == nospaces("_===_\n(- .)\n( : )\n( : )"));
    CHECK(nospaces(snowman(21114411)) == nospaces(" ___ \n.....\n(.,.)\n( : )\n( : )"));
    CHECK(nospaces(snowman(22214411)) == nospaces(" ___ \n.....\n(o..)\n( : )\n( : )"));
    CHECK(nospaces(snowman(23314411)) == nospaces(" ___ \n.....\n(O_.)\n( : )\n( : )"));
    CHECK(nospaces(snowman(24411411)) == nospaces(" ___ \n.....\n(- .)\n<( : )\n( : )"));
    CHECK(nospaces(snowman(21112411)) == nospaces(" ___ \n.....\n'\'(.,.)\n( : )\n( : )"));
    CHECK(nospaces(snowman(22213411)) == nospaces(" ___ \n.....\n(o..)\n/( : )\n( : )"));
    CHECK(nospaces(snowman(23314411)) == nospaces(" ___ \n.....\n(O_.)\n( : )\n( : )"));
    CHECK(nospaces(snowman(24421411)) == nospaces(" ___ \n.....\n(- o)\n<( : )\n( : )"));
    CHECK(nospaces(snowman(31132411)) == nospaces("  _  \n /_'\' \n'\'(.,O)\n( : )\n( : )"));
    CHECK(nospaces(snowman(32243411)) == nospaces("  _  \n /_'\' \n(o.-)\n/( : )\n( : )"));
    CHECK(nospaces(snowman(33314411)) == nospaces("  _  \n /_'\' \n(O_.)\n( : )\n( : )"));
    CHECK(nospaces(snowman(34421411)) == nospaces("  _  \n /_'\' \n(- o)\n<( : )\n( : )"));
    CHECK(nospaces(snowman(31132411)) == nospaces("  _  \n /_'\' \n'\'(.,O)\n( : )\n( : )"));
    CHECK(nospaces(snowman(32243411)) == nospaces("  _  \n /_'\' \n(o.-)\n/( : )\n( : )"));
    CHECK(nospaces(snowman(33314411)) == nospaces("  _  \n /_'\' \n(O_.)\n( : )\n( : )"));
    CHECK(nospaces(snowman(34421411)) == nospaces("  _  \n /_'\' \n(- o)\n<( : )\n( : )"));
    CHECK(nospaces(snowman(41132411)) == nospaces(" ___ \n(_*_)\n'\'(.,O)\n( : )\n( : )"));
    CHECK(nospaces(snowman(42243411)) == nospaces(" ___ \n(_*_)\n(o.-)\n/( : )\n( : )"));
    CHECK(nospaces(snowman(43314411)) == nospaces(" ___ \n(_*_)\n(O_.)\n( : )\n( : )"));
    CHECK(nospaces(snowman(44421411)) == nospaces(" ___ \n(_*_)\n(- o)\n<( : )\n( : )"));
    CHECK(nospaces(snowman(41132411)) == nospaces(" ___ \n(_*_)\n'\'(.,O)\n( : )\n( : )"));
    CHECK(nospaces(snowman(42243411)) == nospaces(" ___ \n(_*_)\n(o.-)\n/( : )\n( : )"));
    CHECK(nospaces(snowman(43314411)) == nospaces(" ___ \n(_*_)\n(O_.)\n( : )\n( : )"));
    CHECK(nospaces(snowman(44421411)) == nospaces(" ___ \n(_*_)\n(- o)\n<( : )\n( : )"));
    /* Add more checks here */
}

TEST_CASE("Bad snowman code") {
    CHECK_THROWS(snowman(111111111));
    CHECK_THROWS(snowman(6));
    CHECK_THROWS(snowman(02515641));
    CHECK_THROWS(snowman(-4444444));
    CHECK_THROWS(snowman(14141-414));
    CHECK_THROWS(snowman(100000));
    CHECK_THROWS(snowman(11152000));
    CHECK_THROWS(snowman(111));
    CHECK_THROWS(snowman(6566));
    CHECK_THROWS(snowman(12121));
    CHECK_THROWS(snowman(111111));

    
    /* Add more checks here */
}


/* Add more test cases here */
