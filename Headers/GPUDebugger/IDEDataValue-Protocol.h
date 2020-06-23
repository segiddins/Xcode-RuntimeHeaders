//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GPUDebugger/NSObject-Protocol.h>

@class IDEStackFrame, NSArray, NSString;

@protocol IDEDataValue <NSObject>
@property(nonatomic, readonly) BOOL isMemoryFault;
@property(nonatomic, readonly) BOOL childValuesCountValid;
@property(nonatomic, readonly) NSArray *childValues;
@property(nonatomic, readonly) BOOL hasChildValues;
@property(nonatomic, readonly) BOOL inScope;
@property(nonatomic, readonly) BOOL itemDescriptionHasChanged;
@property(nonatomic, readonly) NSString *itemDescription;
@property(nonatomic, readonly) BOOL typeHasChanged;
@property(nonatomic, readonly) NSString *type;
@property(nonatomic, readonly) NSString *primitiveLogicalValue;
@property(nonatomic, readonly) BOOL logicalValueHasChanged;
@property(nonatomic, readonly) NSString *logicalValue;
@property(nonatomic, readonly) BOOL valueHasChanged;
@property(nonatomic, readonly) BOOL isValueEditable;
@property(nonatomic, readonly) NSString *pointeeAddress;
@property(nonatomic, readonly) NSString *address;
@property(nonatomic, copy) NSString *value;
@property(nonatomic, readonly) NSString *name;
@property(nonatomic, readonly) IDEStackFrame *stackFrame;
@end

