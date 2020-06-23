//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class NSLayoutConstraint, NSTextField;

@interface DBGDynamicInspectorValueCell : NSTableCellView
{
    NSTextField *_titleField;
    NSTextField *_valueField;
    NSLayoutConstraint *_spacingConstraint;
}

@property __weak NSLayoutConstraint *spacingConstraint; // @synthesize spacingConstraint=_spacingConstraint;
@property __weak NSTextField *valueField; // @synthesize valueField=_valueField;
@property __weak NSTextField *titleField; // @synthesize titleField=_titleField;
- (void).cxx_destruct;
- (void)_setupWithTitle:(id)arg1 toolTip:(id)arg2 value:(id)arg3;

@end

