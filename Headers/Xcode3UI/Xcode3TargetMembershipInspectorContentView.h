//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTStructuredLayoutKit/DVTLayoutView_ML.h>

#import <Xcode3UI/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, DVTTableView, NSString, Xcode3TargetMembershipInspector;

@interface Xcode3TargetMembershipInspectorContentView : DVTLayoutView_ML <DVTInvalidation>
{
    Xcode3TargetMembershipInspector *_inspector;
    DVTTableView *_targetMembershipsTableView;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)setShowRoleColumn:(BOOL)arg1;
- (void)layoutBottomUp;
- (void)primitiveInvalidate;
- (void)awakeFromNib;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

