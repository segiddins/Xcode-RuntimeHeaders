//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTUserInterfaceKit/DVTOutlineView.h>

@class MISSING_TYPE;

@interface _TtC16DVTExplorableKit22DVTExplorerOutlineView : DVTOutlineView
{
    MISSING_TYPE *highlightFragments;
    MISSING_TYPE *oneLineCellID;
    MISSING_TYPE *multiLineCellID;
    MISSING_TYPE *processingMouseEvent;
    MISSING_TYPE *processingKeyEvent;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)dvt_interceptDisclosureButtonAction:(id)arg1;
- (id)makeViewWithIdentifier:(id)arg1 owner:(id)arg2;
- (struct CGRect)frameOfOutlineCellAtRow:(long long)arg1;
- (void)mouseDown:(id)arg1;
- (void)keyDown:(id)arg1;

@end
