//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DebuggerLLDB/DBGLLDBDataValue.h>

@interface DBGLLDBChildPlaceholderDataValue : DBGLLDBDataValue
{
    DBGLLDBDataValue *_parentDataValue;
    unsigned long long _childIndex;
    BOOL _hasFaulted;
}

- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (id)value;
- (id)_initWithParentDataValue:(id)arg1 childIndex:(unsigned long long)arg2;

@end

