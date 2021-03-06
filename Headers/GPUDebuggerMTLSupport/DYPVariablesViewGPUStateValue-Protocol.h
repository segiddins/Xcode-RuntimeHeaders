//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GPUDebuggerMTLSupport/NSObject-Protocol.h>

@class NSArray, NSString;
@protocol DYPStateMirror, DYPVariablesViewGPUStateValue;

@protocol DYPVariablesViewGPUStateValue <NSObject>
@property(retain) id <DYPStateMirror> stateMirror;
@property unsigned int functionIndex;
@property unsigned long long objectID;
@property BOOL sortAlwaysEnd;
@property BOOL itemDescriptionHasChanged;
@property BOOL childValuesCountValid;
@property(copy) NSArray *childValues;
- (long long)compareName:(id <DYPVariablesViewGPUStateValue>)arg1;
- (void)addChildValue:(id <DYPVariablesViewGPUStateValue>)arg1;
- (void)addChildValues:(NSArray *)arg1;
- (void)setStateValue:(NSString *)arg1 withName:(NSString *)arg2 withType:(NSString *)arg3 withItemDescription:(NSString *)arg4 withChanged:(BOOL)arg5;
@end

