//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTKit/NSObject-Protocol.h>

@class DVTColorLiteralQuickEditViewController, NSColor;

@protocol DVTColorLiteralQuickEditViewControllerDelegate <NSObject>
- (void)colorQuickEdit:(DVTColorLiteralQuickEditViewController *)arg1 didSelectMoreColorOptions:(NSColor *)arg2;
- (void)colorQuickEdit:(DVTColorLiteralQuickEditViewController *)arg1 didSelectColor:(NSColor *)arg2;
- (void)colorQuickEdit:(DVTColorLiteralQuickEditViewController *)arg1 didHighlightColor:(NSColor *)arg2;
@end

