//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBStoryboardDocument.h>

@class IBColor;

@interface IBStoryboardDocument (IBDocumentCocoaTouchIntegration)
+ (id)keyPathsForValuesAffectingGlobalTintColor;
+ (id)keyPathsForValuesAffectingCocoaTouchPlatformAdapter;
+ (int)libraryInclusionStatusForWindow;
+ (int)libraryInclusionStatusForProxyObject;
- (void)unarchiveCocoaTouchDataWithDocumentUnarchiver:(id)arg1;
- (void)archiveCocoaTouchDataWithDocumentArchiver:(id)arg1;
@property(copy, nonatomic) IBColor *globalTintColor;
- (id)globalTintOverrideWarning;
- (BOOL)shouldShowGlobalTintOverrideWarning;
- (id)cocoaTouchPlatformAdapter;
- (void)flattenConnectionsIfNecessary;
- (void)replaceSystemMenusWithDiffs;
- (id)viewControllerRepresentativeForObject:(id)arg1;
- (void)giveGlobalTintColorToInheritingViews;
- (BOOL)isNonExistentAtRuntimePlaceholder:(id)arg1;
@end

