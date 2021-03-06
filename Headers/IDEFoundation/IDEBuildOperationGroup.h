//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTFoundation/DVTOperationGroup.h>

#import <IDEFoundation/IDEBuildOperationProviding-Protocol.h>

@class IDEActivityLogSection, IDEBuildOperation, NSArray, NSDate, NSString;

@interface IDEBuildOperationGroup : DVTOperationGroup <IDEBuildOperationProviding>
{
    DVTOperationGroup *_buildOperations;
    IDEActivityLogSection *_buildLog;
}

- (void).cxx_destruct;
@property(readonly) IDEActivityLogSection *buildLog; // @synthesize buildLog=_buildLog;
@property(readonly) DVTOperationGroup *buildOperations; // @synthesize buildOperations=_buildOperations;
@property(readonly) NSArray *buildables;
@property(readonly, copy) NSDate *startTime;
@property(readonly) long long result;
@property(readonly) IDEBuildOperation *buildOperation;
- (id)initWithBuildOperations:(id)arg1 otherOperations:(id)arg2 buildLog:(id)arg3;
- (id)initWithBuildOperations:(id)arg1 otherOperations:(id)arg2;
- (id)initWithBuildOperations:(id)arg1 buildLog:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

