//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DebuggerFoundation/DBGAbstractViewDescriber.h>

@interface DBGViewDebuggerMacDescriber : DBGAbstractViewDescriber
{
}

+ (BOOL)shouldInstantiateInLaunchSession:(id)arg1;
+ (void)initialize;
- (void)primitiveInvalidate;
- (id)initialRequestPropertyActions;
- (id)targetKitFamilyIdentifier;
- (void)_asyncStringFromDataValueSummary:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_asyncAskForInspectableFontFromDataValue:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_asyncAskForInspectableImageFromDataValue:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_asyncAskForInspectableColorFromDataValue:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)_alwaysEncodeLayersOptionValue;
- (id)_turnOnLayersAsSnapshotsOptionValue;
- (void)fetchViewInfo:(CDUnknownBlockType)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (BOOL)inspectableValueForDataValue:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)customNavigableIconForObject:(id)arg1 withClassHierarchy:(id)arg2;
- (id)classNameForDefaultViewIcon;

@end

