//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSTextFieldCell.h>

@interface XCDateCell : NSTextFieldCell
{
    double iLastWidth;
    int iDateDetailLevel;
    int iTodayAndYesterdayLevel;
}

+ (void)initialize;
- (void)drawWithExpansionFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGRect)expansionFrameWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)dateStringToDraw;
- (void)updateDetailLevel;
- (void)updateDetailLevelWidths;
- (id)yesterdayString;
- (id)todayString;
- (double)widthOfLongestDateStringWithLevel:(int)arg1;
- (id)dateFormatterForDetailLevel:(int)arg1;
- (id)timeDateFormatter;
- (id)textAttributes;

@end

