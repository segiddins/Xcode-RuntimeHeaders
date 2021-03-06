//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DebuggerUI/DBGViewObjectHierarchyItem.h>

#import <DebuggerUI/DBGLayoutConstraintInspectable-Protocol.h>

@class DBGLayoutConstraint, NSString;
@protocol DBGLayoutConstraintItem;

@interface DBGLayoutConstraintHierarchyItem : DBGViewObjectHierarchyItem <DBGLayoutConstraintInspectable>
{
}

+ (id)keyPathsForValuesAffectingNavigableItem_additionalFilterMatchingText;
@property(readonly) id <DBGLayoutConstraintItem> secondItem;
@property(readonly) id <DBGLayoutConstraintItem> firstItem;
@property(readonly, copy) NSString *constraintIdentifier;
- (id)navigableItem_additionalFilterMatchingText;
- (id)navigableItem_image;
- (BOOL)isEqual:(id)arg1;
@property(readonly) DBGLayoutConstraint *proxiedLayoutConstraint;

@end

