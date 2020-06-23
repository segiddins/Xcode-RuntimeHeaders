//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class NSString, Xcode3LegacyLocalizationUpgrade;

@interface _Xcode3ProjectLegacyLocalizationUpgradeAssistantTableCellView : NSTableCellView
{
}

+ (id)keyPathsForValuesAffectingReplaceModernItem;
+ (id)keyPathsForValuesAffectingUseExistingModernItem;
+ (id)keyPathsForValuesAffectingReplaceModernItemTitle;
+ (id)keyPathsForValuesAffectingUseExistingModernItemTitle;
+ (id)keyPathsForValuesAffectingCanChooseBetweenItems;
+ (id)keyPathsForValuesAffectingRepresentedUpgrade;
@property BOOL replaceModernItem;
@property BOOL useExistingModernItem;
@property(readonly, copy) NSString *replaceModernItemTitle;
@property(readonly, copy) NSString *useExistingModernItemTitle;
@property(readonly) BOOL canChooseBetweenItems;
@property(retain) Xcode3LegacyLocalizationUpgrade *representedUpgrade;

@end

