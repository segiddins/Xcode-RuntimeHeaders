//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class NSBox, NSTextField;

@interface IDEDistributionTableCellView : NSTableCellView
{
    NSBox *_bottomBorder;
    NSTextField *_titleField;
}

- (void).cxx_destruct;
@property(retain) NSTextField *titleField; // @synthesize titleField=_titleField;
@property(retain) NSBox *bottomBorder; // @synthesize bottomBorder=_bottomBorder;
- (double)heightAccomodatingTextFieldWrappingWithColumnWidth:(double)arg1;

@end

