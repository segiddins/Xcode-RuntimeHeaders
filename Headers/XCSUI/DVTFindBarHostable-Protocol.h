//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <XCSUI/DVTFindBarFindable-Protocol.h>

@class DVTFindBar, NSView;
@protocol NSValidatedUserInterfaceItem;

@protocol DVTFindBarHostable <DVTFindBarFindable>
- (void)dismissFindBar:(DVTFindBar *)arg1 andRestoreSelection:(BOOL)arg2;

@optional
- (NSView *)viewToShowWrapOrEndOfFileBezelOn:(DVTFindBar *)arg1;
- (BOOL)dvtFindBar:(DVTFindBar *)arg1 validateUserInterfaceItem:(id <NSValidatedUserInterfaceItem>)arg2;
- (void)dvtFindBar:(DVTFindBar *)arg1 didWrap:(BOOL)arg2 reverse:(BOOL)arg3;
@end

