//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSSearchField.h>

@class MISSING_TYPE, NSFont, _TtC12SourceEditor25SourceEditorTextFindPanel;

@interface _TtC12SourceEditor25SourceEditorTextFindField : NSSearchField
{
    MISSING_TYPE *panel;
    MISSING_TYPE *insets;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)cancelOperation:(id)arg1;
- (struct CGRect)rectForSearchTextWhenCentered:(BOOL)arg1;
- (struct CGRect)rectForCancelButtonWhenCentered:(BOOL)arg1;
@property(nonatomic) struct NSEdgeInsets insets; // @synthesize insets;
@property(nonatomic, copy) id textFindValue;
@property(nonatomic, retain) NSFont *font;
@property(nonatomic) __weak _TtC12SourceEditor25SourceEditorTextFindPanel *panel; // @synthesize panel;

@end

