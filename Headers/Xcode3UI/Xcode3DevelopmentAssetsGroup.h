//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Xcode3UI/Xcode3BuildFileGroup.h>

@class DVTNotificationToken;

@interface Xcode3DevelopmentAssetsGroup : Xcode3BuildFileGroup
{
    DVTNotificationToken *_referenceRemovedNotificationObservation;
    DVTNotificationToken *_referencePathChangedNotificationObservation;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) DVTNotificationToken *referencePathChangedNotificationObservation; // @synthesize referencePathChangedNotificationObservation=_referencePathChangedNotificationObservation;
@property(retain, nonatomic) DVTNotificationToken *referenceRemovedNotificationObservation; // @synthesize referenceRemovedNotificationObservation=_referenceRemovedNotificationObservation;
- (BOOL)containsItemIdenticalTo:(id)arg1;
- (BOOL)removeItemsAtIndexes:(id)arg1;
- (BOOL)canRemoveItemsAtIndexes:(id)arg1;
- (BOOL)insertItems:(id)arg1 atIndex:(unsigned long long)arg2;
- (BOOL)canInsertItems:(id)arg1;
- (BOOL)acceptsItem:(id)arg1;
- (id)referenceOfItem:(id)arg1;
- (id)developmentAssetsPaths;
- (id)buildPhaseItems;
- (void)refreshBuildPhaseItems;
- (void)primitiveInvalidate;
- (void)initializeGroup;

@end

