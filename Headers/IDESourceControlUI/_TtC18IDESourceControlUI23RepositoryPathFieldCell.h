//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTextFieldCell.h>

@class MISSING_TYPE;

@interface _TtC18IDESourceControlUI23RepositoryPathFieldCell : NSTextFieldCell
{
    MISSING_TYPE *CHOOSER_BUTTON_PAD;
    MISSING_TYPE *CHOOSER_BUTTON_HEIGHT;
    MISSING_TYPE *CHOOSER_BUTTON_WIDTH;
    MISSING_TYPE *delegate;
    MISSING_TYPE *chooseButtonCell;
}

- (void).cxx_destruct;
- (unsigned long long)hitTestForEvent:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3;
@property(nonatomic) BOOL enabled;
- (BOOL)isEnabled;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;
- (void)selectWithFrame:(struct CGRect)arg1 inView:(id)arg2 editor:(id)arg3 delegate:(id)arg4 start:(long long)arg5 length:(long long)arg6;
- (void)editWithFrame:(struct CGRect)arg1 inView:(id)arg2 editor:(id)arg3 delegate:(id)arg4 event:(id)arg5;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;
- (void)resetCursorRect:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)chooseWithSender:(id)arg1;
- (id)copyWithZone:(void *)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initTextCell:(id)arg1;
- (id)init;

@end

