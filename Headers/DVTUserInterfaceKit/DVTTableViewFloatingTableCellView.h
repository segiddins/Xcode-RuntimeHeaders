//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class DVTTableViewFloatingRowViewLineView, NSTableColumn;

@interface DVTTableViewFloatingTableCellView : NSTableCellView
{
    DVTTableViewFloatingRowViewLineView *_separatorView;
    BOOL _floating;
    NSTableColumn *_column;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSTableColumn *column; // @synthesize column=_column;
@property(nonatomic) BOOL floating; // @synthesize floating=_floating;
- (void)layout;
- (void)updateLayer;
@property(nonatomic) BOOL separatorHidden;
- (id)initWithFrame:(struct CGRect)arg1;

@end
