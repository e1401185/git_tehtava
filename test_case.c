#include <gtest/gtest.h>
#include <stdio.h>
#include "string.h"

TEST(string_length,normal_strings)
{
    EXPECT_EQ(3,my_strlen((char *)"abc"));
    EXPECT_EQ(3,my_strlen((char *)"ABC"));
    EXPECT_EQ(14,my_strlen((char *)"LauriMarkkanen"));

}

TEST(string_length,special_strings)
{
    EXPECT_EQ(0,my_strlen((char *)""));
    EXPECT_EQ(6,my_strlen((char *)"åäö"));
    EXPECT_EQ(8,my_strlen((char *)"¤%&/(=?"));
    EXPECT_EQ(5,my_strlen((char *)"     "));

}
TEST(string_length,numbers)
{
    EXPECT_EQ(3,my_strlen((char *)"567"));
    EXPECT_EQ(1,my_strlen((char *)"\325"));
    EXPECT_EQ(0,my_strlen((char *)"\0"));
    EXPECT_EQ(1,my_strlen((char *)"2\0"));
    EXPECT_EQ(1,my_strlen((char *)"2\099"));
}

TEST(string_copy,normal_strings)
{

char string1[100]="";
char string2[100]="";

strcpy(string1, "abc");
mystrcpy(string1, string2);

ASSERT_STREQ(string2, string1);

}

TEST(string_compare, normal)
{
char string1[100]="";
char string2[100]="";

strcpy(string1, "abc");
strcpy(string2, "abc");

EXPECT_EQ(0, mystrcmp(string1,string2));

}

TEST(string2Upper, normal)

{
char string1[100]="";

strcpy(string1, "a");
EXPECT_EQ(str2upper(string1), 1);

strcpy(string1, "aaaAAA");
EXPECT_EQ(str2upper(string1), 3);

strcpy(string1, "aAaAaA");
EXPECT_EQ(str2upper(string1), 3);

strcpy(string1, "ABCabcd");
EXPECT_EQ(str2upper(string1), 4);

}


TEST(string2Lower, normal)
{
char string1[100]="";

strcpy(string1, "A");
EXPECT_EQ(str2lower(string1), 1);

strcpy(string1, "ABC");
EXPECT_EQ(str2lower(string1), 3);

strcpy(string1, "ABCabc");
EXPECT_EQ(str2lower(string1), 3);

}

TEST(stringduplication, normal_string)
{
	char string1[100] = "";
	char* duplicate;

	strcpy(string1, "hola amigo");
	duplicate = strdupl(string1);
	
	ASSERT_EQ(duplicate, string1);
	ASSERT_STREQ(duplicate, string1);
	
}	

