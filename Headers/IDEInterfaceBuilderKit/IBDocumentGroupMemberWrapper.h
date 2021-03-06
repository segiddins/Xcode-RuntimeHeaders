//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBDocumentMemberWrapper.h>

@class IBGroup, NSArray;

@interface IBDocumentGroupMemberWrapper : IBDocumentMemberWrapper
{
    NSArray *cachedChildWrappers;
}

+ (id)keyPathsForValuesAffectingGroup;
+ (id)childWrapperInvalidationNotificationNames;
- (void).cxx_destruct;
- (id)applicableInspectorSlicesForCategory:(id)arg1 suggestedSlices:(id)arg2;
- (void)didReorderDescendantConnection:(id)arg1;
- (void)didAddOrRemoveDescendantConnection:(id)arg1;
- (void)invalidateChildWrappersAfterDocumentMutationNotification:(id)arg1;
- (void)invalidateChildWrappers;
- (BOOL)wrapsNormalDocumentObject;
- (id)image;
- (id)name;
- (void)setChildWrappers:(id)arg1;
- (id)childWrappers;
@property(readonly) IBGroup *group;
- (void)primitiveInvalidate;
- (id)initWithMember:(id)arg1 document:(id)arg2;
- (void)unregisterForChildWrapperInvalidationNotificationsNamed:(id)arg1;
- (void)registerForChildWrapperInvalidationNotificationsNamed:(id)arg1;

@end

