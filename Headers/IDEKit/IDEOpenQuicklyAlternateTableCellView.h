//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEOpenQuicklyAbstractTableCellView.h>

@class NSImageView, NSTextField;

@interface IDEOpenQuicklyAlternateTableCellView : IDEOpenQuicklyAbstractTableCellView
{
    NSTextField *_titleField;
    NSImageView *_iconView;
}

@property(readonly) NSImageView *iconView; // @synthesize iconView=_iconView;
@property(readonly) NSTextField *titleField; // @synthesize titleField=_titleField;
- (void).cxx_destruct;
- (void)arrangeSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

