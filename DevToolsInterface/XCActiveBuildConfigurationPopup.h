//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/XCProjectPopup.h>

@interface XCActiveBuildConfigurationPopup : XCProjectPopup
{
}

+ (id)itemIdentifier;
- (id)formatMenuString;
- (id)toolTip;
- (id)paletteLabel;
- (id)label;
- (void)popupSelectionActionAtIndex:(long long)arg1 withProject:(id)arg2;
- (void)rebuildPopup:(id)arg1;
- (BOOL)isInterestedInChangesToProject:(id)arg1;
- (void)removeObserversWithProject:(id)arg1;
- (void)addObserversWithProject:(id)arg1;

@end

