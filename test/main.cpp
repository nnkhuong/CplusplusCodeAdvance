/*
 * main.cpp
 *
 *  Created on: Jul 19, 2015
 *      Author: khuong
 */



#include<iostream>
#include<gtest/gtest.h>

int main(int args, char *argv[])
{
	::testing::InitGoogleTest(&args, argv);
	return RUN_ALL_TESTS();
}
