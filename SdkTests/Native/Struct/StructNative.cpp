#include "StructNative.h"

STRUCTLIB_FUNC(SimpleStruct) GetSimpleStruct()
{
	return { 10, 3 };
}


STRUCTLIB_FUNC(void) ForceMarshalTo(StructWithArray, TestUnion, BitField, AsciiTest, Utf16Test)
{
	
}
