//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSSet, NSString;

@interface IDEBuildPlan : NSObject
{
    NSString *_debugName;
    NSMutableArray *_bucketList;
    BOOL _isImmutable;
    NSSet *_productArtifactNodes;
}

@property(readonly) NSString *debugName; // @synthesize debugName=_debugName;
@property(copy) NSSet *productArtifactNodes; // @synthesize productArtifactNodes=_productArtifactNodes;
- (void).cxx_destruct;
- (void)writeDebugRepresentationToFileAtPath:(id)arg1 format:(long long)arg2 basePath:(id)arg3;
- (id)description;
- (void)makeImmutable;
- (BOOL)isImmutable;
- (void)addBucket:(id)arg1;
@property(readonly) NSArray *bucketList;
- (id)initWithDebugName:(id)arg1;

@end

