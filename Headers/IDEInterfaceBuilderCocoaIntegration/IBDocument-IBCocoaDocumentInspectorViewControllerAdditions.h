//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBDocument.h>

@class NSNumber;

@interface IBDocument (IBCocoaDocumentInspectorViewControllerAdditions)
+ (id)keyPathsForValuesAffectingInspectedCustomObjectInstantiationBehavior;
+ (BOOL)supportsWindowControllersDraggedFromLibrary;
+ (BOOL)wantsViewsInstalledInNSViewControllersDraggedFromLibrary;
- (BOOL)inspectedCustomObjectInstantiationBehavior;
- (void)setInspectedCustomObjectInstantiationBehavior:(BOOL)arg1;
@property(retain, nonatomic) NSNumber *explicitCustomObjectInstantiationBehavior;
- (long long)effectiveCustomObjectInstantiationBehavior;
- (long long)defaultCustomObjectInstantiationBehavior;
- (BOOL)isObjectFilesOwner:(id)arg1;
- (BOOL)isObjectApplication:(id)arg1;
- (id)bindingManager;
- (id)cocoaPlatformAdapter;
@end

