//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/NSObject-Protocol.h>

@class NSArray, NSStackView;

@protocol NSStackViewDelegate <NSObject>

@optional
- (void)stackView:(NSStackView *)arg1 didReattachViews:(NSArray *)arg2;
- (void)stackView:(NSStackView *)arg1 willDetachViews:(NSArray *)arg2;
@end

