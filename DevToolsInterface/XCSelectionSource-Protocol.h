//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsInterface/NSObject-Protocol.h>

@class NSArray, NSWindow, XCSelection;

@protocol XCSelectionSource <NSObject>
- (NSWindow *)windowOfSelection;
- (BOOL)wantsToRetainFocusDuringSelection;
- (void)revealItems:(NSArray *)arg1 select:(BOOL)arg2;
- (XCSelection *)xcSelection;
@end

