//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DebuggerUI/NSObject-Protocol.h>

@class IBLayoutConstraint;

@protocol IBLayoutConstraintStatusProvider <NSObject>
- (BOOL)isSelectableConstraint:(IBLayoutConstraint *)arg1;
- (BOOL)isSelectedConstraint:(IBLayoutConstraint *)arg1;
- (BOOL)isConflictingConstraint:(IBLayoutConstraint *)arg1;
@end

