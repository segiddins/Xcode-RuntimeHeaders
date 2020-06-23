//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DebuggerFoundation/NSObject-Protocol.h>

@class IDEStackFrame, NSArray, NSString;

@protocol IDEDataValue <NSObject>
@property(readonly) BOOL isMemoryFault;
@property(readonly) BOOL childValuesCountValid;
@property(readonly, copy) NSArray *childValues;
@property(readonly) BOOL hasChildValues;
@property(readonly) BOOL inScope;
@property(readonly) BOOL itemDescriptionHasChanged;
@property(readonly, copy) NSString *itemDescription;
@property(readonly) BOOL typeHasChanged;
@property(readonly, copy) NSString *type;
@property(readonly, copy) NSString *primitiveLogicalValue;
@property(readonly) BOOL logicalValueHasChanged;
@property(readonly, copy) NSString *logicalValue;
@property(readonly) BOOL valueHasChanged;
@property(readonly) BOOL isValueEditable;
@property(readonly, copy) NSString *pointeeAddress;
@property(readonly, copy) NSString *address;
@property(copy) NSString *value;
@property(copy) NSString *name;
@property(readonly) IDEStackFrame *stackFrame;
@end

