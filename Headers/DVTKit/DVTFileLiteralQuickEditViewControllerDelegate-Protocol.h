//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTKit/NSObject-Protocol.h>

@class DVTFileLiteralQuickEditViewController, DVTFilePath;

@protocol DVTFileLiteralQuickEditViewControllerDelegate <NSObject>
- (void)fileQuickEdit:(DVTFileLiteralQuickEditViewController *)arg1 didClickMoreButtonForFilePath:(DVTFilePath *)arg2;
- (void)fileQuickEdit:(DVTFileLiteralQuickEditViewController *)arg1 didSelectFilePath:(DVTFilePath *)arg2;
@end

