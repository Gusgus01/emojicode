//
//  EmojicodeInstructions.h
//  Emojicode
//
//  Created by Theo Weidmann on 26/11/2016.
//  Copyright © 2016 Theo Weidmann. All rights reserved.
//

#ifndef EmojicodeInstructions_h
#define EmojicodeInstructions_h

/// A number identifying the set of byte code instructions and layout in use
const int kByteCodeVersion = 6;

enum Instructions {
    INS_DISPATCH_METHOD = 0x1,
    INS_DISPATCH_TYPE_METHOD = 0x2,
    INS_DISPATCH_PROTOCOL = 0x3,
    INS_DISPATCH_SUPER = 0x4,
    INS_CALL_CONTEXTED_FUNCTION = 0x5,
    INS_CALL_FUNCTION = 0x6,
    INS_INIT_VT = 0x7,
    INS_SUPER_INITIALIZER = 0x8,
    INS_NEW_OBJECT = 0x9,

    INS_JUMP_FORWARD = 0x10,
    INS_JUMP_FORWARD_IF = 0x11,
    INS_JUMP_BACKWARD_IF = 0x12,
    INS_JUMP_FORWARD_IF_NOT = 0x13,
    INS_JUMP_BACKWARD_IF_NOT = 0x14,
    INS_RETURN_WITHOUT_VALUE = 0x15,
    INS_RETURN = 0x16,
    INS_ERROR = 0x17,
    INS_TRANSFER_CONTROL_TO_NATIVE = 0x18,

    INS_THIS = 0x19,
    INS_SAME_OBJECT = 0x1A,

    INS_PRODUCE_TO_AND_GET_VT_REFERENCE = 0x20,
    INS_PRODUCE_WITH_STACK_DESTINATION = 0x21,
    INS_PRODUCE_WITH_OBJECT_DESTINATION = 0x22,
    INS_PRODUCE_WITH_VT_DESTINATION = 0x23,
    INS_CONDITIONAL_PRODUCE_BOX = 0x24,
    INS_CONDITIONAL_PRODUCE_SIMPLE_OPTIONAL = 0x25,

    INS_COPY_SINGLE_STACK = 0x26,
    INS_COPY_WITH_SIZE_STACK = 0x27,
    INS_COPY_SINGLE_OBJECT = 0x28,
    INS_COPY_WITH_SIZE_OBJECT = 0x29,
    INS_COPY_SINGLE_VT = 0x2A,
    INS_COPY_WITH_SIZE_VT = 0x2B,
    INS_COPY_FROM_REFERENCE = 0x2C,

    INS_INCREMENT = 0x2D,
    INS_DECREMENT = 0x2E,

    INS_SIMPLE_OPTIONAL_PRODUCE = 0x30,
    INS_BOX_PRODUCE = 0x31,
    INS_UNBOX = 0x32,
    INS_BOX_TO_SIMPLE_OPTIONAL_PRODUCE = 0x33,
    INS_SIMPLE_OPTIONAL_TO_BOX = 0x34,
    INS_SIMPLE_OPTIONAL_TO_BOX_REMOTE = 0x35,
    INS_BOX_PRODUCE_REMOTE = 0x36,
    INS_UNBOX_REMOTE = 0x37,
    INS_BOX_TO_SIMPLE_OPTIONAL_PRODUCE_REMOTE = 0x38,

    INS_GET_VT_REFERENCE_STACK = 0x40,
    INS_GET_VT_REFERENCE_OBJECT = 0x41,
    INS_GET_VT_REFERENCE_VT = 0x42,
    INS_GET_CLASS_FROM_INSTANCE = 0x43,
    INS_GET_CLASS_FROM_INDEX = 0x44,
    INS_GET_STRING_POOL = 0x45,
    INS_GET_TRUE = 0x46,
    INS_GET_FALSE = 0x47,
    INS_GET_32_INTEGER = 0x48,
    INS_GET_64_INTEGER = 0x49,
    INS_GET_DOUBLE = 0x4A,
    INS_GET_SYMBOL = 0x4B,
    INS_GET_NOTHINGNESS = 0x4C,

    INS_EQUAL_PRIMITIVE = 0x50,
    INS_EQUAL_SYMBOL = 0x51,
    INS_SUBTRACT_INTEGER = 0x52,
    INS_ADD_INTEGER = 0x53,
    INS_MULTIPLY_INTEGER = 0x54,
    INS_DIVIDE_INTEGER = 0x55,
    INS_REMAINDER_INTEGER = 0x56,
    INS_BINARY_AND_INTEGER = 0x57,
    INS_BINARY_OR_INTEGER = 0x58,
    INS_BINARY_XOR_INTEGER = 0x59,
    INS_BINARY_NOT_INTEGER = 0x5A,
    INS_SHIFT_LEFT_INTEGER = 0x5B,
    INS_SHIFT_RIGHT_INTEGER = 0x5C,
    INS_LESS_INTEGER = 0x5D,
    INS_GREATER_INTEGER = 0x5E,
    INS_GREATER_OR_EQUAL_INTEGER = 0x5F,
    INS_LESS_OR_EQUAL_INTEGER = 0x60,

    INS_INVERT_BOOLEAN = 0x61,
    INS_OR_BOOLEAN = 0x62,
    INS_AND_BOOLEAN = 0x63,

    INS_EQUAL_DOUBLE = 0x64,
    INS_SUBTRACT_DOUBLE = 0x65,
    INS_ADD_DOUBLE = 0x66,
    INS_MULTIPLY_DOUBLE = 0x67,
    INS_DIVIDE_DOUBLE = 0x68,
    INS_LESS_DOUBLE = 0x69,
    INS_GREATER_DOUBLE = 0x6A,
    INS_LESS_OR_EQUAL_DOUBLE = 0x6B,
    INS_GREATER_OR_EQUAL_DOUBLE = 0x6C,
    INS_REMAINDER_DOUBLE = 0x6D,
    INS_INT_TO_DOUBLE = 0x6E,

    INS_UNWRAP_SIMPLE_OPTIONAL = 0x70,
    INS_UNWRAP_BOX_OPTIONAL = 0x71,
    INS_IS_NOTHINGNESS = 0x72,
    INS_ERROR_CHECK_SIMPLE_OPTIONAL = 0x73,
    INS_ERROR_CHECK_BOX_OPTIONAL = 0x74,
    INS_IS_ERROR = 0x75,

    // Know it’s an object instance and want to cast it to a subclass
    INS_DOWNCAST_TO_CLASS = 0x80,
    INS_CAST_TO_PROTOCOL = 0x81,
    INS_CAST_TO_CLASS = 0x82,
    INS_CAST_TO_VALUE_TYPE = 0x83,

    INS_EXECUTE_CALLABLE = 0x90,
    INS_CLOSURE = 0x91,
    INS_CAPTURE_METHOD = 0x92,
    INS_CAPTURE_TYPE_METHOD = 0x93,
    INS_CAPTURE_CONTEXTED_FUNCTION = 0x94,
    INS_CLOSURE_BOX = 0x95,

    INS_OPT_DICTIONARY_LITERAL = 0xA0,
    INS_OPT_LIST_LITERAL = 0xA1,
    INS_OPT_STRING_CONCATENATE_LITERAL = 0xA2,
};

#endif /* EmojicodeInstructions_h */
