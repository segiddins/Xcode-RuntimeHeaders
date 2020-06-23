//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GPUDebugger/NSObject-Protocol.h>

@class NSArray, NSNumber, NSString;
@protocol DYPDependencyGraphNode;

@protocol DYPDependencyGraphNode <NSObject>
- (BOOL)enumerateNodesDFS:(void (^)(id <DYPDependencyGraphNode>, char *))arg1;
- (double)encoderTime;
- (NSNumber *)vertexCount;
@property(nonatomic, readonly) unsigned long long dispatchCount;
@property(nonatomic, readonly) unsigned long long drawCount;
@property(nonatomic, readonly) struct _NSRange fileFunctionIndexRange;
@property(nonatomic, readonly) int fileFunctionIndexEnd;
@property(nonatomic, readonly) int fileFunctionIndexBegin;
@property(nonatomic, readonly) struct _NSRange functionIndexRange;
@property(nonatomic, readonly) int functionIndexEnd;
@property(nonatomic, readonly) int functionIndexBegin;
@property(nonatomic, readonly) NSString *label;
@property(nonatomic, readonly) NSArray *children;
@property(nonatomic, readonly) id <DYPDependencyGraphNode> parent;
@property(nonatomic, readonly) unsigned long long type;
@end

