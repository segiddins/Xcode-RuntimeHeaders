//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GPUDebugger/NSObject-Protocol.h>

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

