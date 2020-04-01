//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GPUDebugger/NSObject-Protocol.h>

@class NSArray, NSNumber, NSString;
@protocol DYPDependencyGraphNode;

@protocol DYPDependencyGraphNode <NSObject>
@property(readonly, nonatomic) unsigned long long dispatchCount;
@property(readonly, nonatomic) unsigned long long drawCount;
@property(readonly, nonatomic) struct _NSRange fileFunctionIndexRange;
@property(readonly, nonatomic) int fileFunctionIndexEnd;
@property(readonly, nonatomic) int fileFunctionIndexBegin;
@property(readonly, nonatomic) struct _NSRange functionIndexRange;
@property(readonly, nonatomic) int functionIndexEnd;
@property(readonly, nonatomic) int functionIndexBegin;
@property(readonly, nonatomic) NSString *label;
@property(readonly, nonatomic) NSArray *children;
@property(readonly, nonatomic) id <DYPDependencyGraphNode> parent;
@property(readonly, nonatomic) unsigned long long type;
- (void)enumerateNodesDFS:(void (^)(id <DYPDependencyGraphNode>, char *))arg1;
- (double)encoderTime;
- (NSNumber *)vertexCount;
@end

