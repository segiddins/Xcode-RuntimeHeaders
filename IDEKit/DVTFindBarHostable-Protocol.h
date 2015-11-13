//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEKit/DVTFindBarFindable-Protocol.h>

@class DVTFindBar, NSView;
@protocol NSValidatedUserInterfaceItem;

@protocol DVTFindBarHostable <DVTFindBarFindable>
- (void)dismissFindBar:(DVTFindBar *)arg1 andRestoreSelection:(BOOL)arg2;

@optional
- (NSView *)viewToShowWrapOrEndOfFileBezelOn:(DVTFindBar *)arg1;
- (BOOL)dvtFindBar:(DVTFindBar *)arg1 validateUserInterfaceItem:(id <NSValidatedUserInterfaceItem>)arg2;
- (void)dvtFindBar:(DVTFindBar *)arg1 didWrap:(BOOL)arg2 reverse:(BOOL)arg3;
@end

