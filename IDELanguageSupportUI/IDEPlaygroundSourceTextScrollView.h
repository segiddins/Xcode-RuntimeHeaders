//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DVTKit/DVTSourceTextScrollView.h>

@class DVTObservingToken, IDEPlaygroundEditor, NSButton, NSString;
@protocol NSObject;

@interface IDEPlaygroundSourceTextScrollView : DVTSourceTextScrollView
{
    long long _contentStyle;
    NSButton *_disclosureTriangleButton;
    DVTObservingToken *_accessoryAnnotationWidthObservingToken;
    id <NSObject> _fontAndColorSettingsChangeObservingToken;
    BOOL _selected;
    BOOL _disclosed;
    double _contentViewLeftMargin;
    double _contentViewRightMargin;
    double _contentViewTopMargin;
    double _contentViewBottomMargin;
    NSString *_boxTitle;
    IDEPlaygroundEditor *_playgroundEditor;
}

+ (BOOL)isCompatibleWithResponsiveScrolling;
@property(retain, nonatomic) IDEPlaygroundEditor *playgroundEditor; // @synthesize playgroundEditor=_playgroundEditor;
@property(copy) NSString *boxTitle; // @synthesize boxTitle=_boxTitle;
@property double contentViewBottomMargin; // @synthesize contentViewBottomMargin=_contentViewBottomMargin;
@property double contentViewTopMargin; // @synthesize contentViewTopMargin=_contentViewTopMargin;
@property double contentViewRightMargin; // @synthesize contentViewRightMargin=_contentViewRightMargin;
@property double contentViewLeftMargin; // @synthesize contentViewLeftMargin=_contentViewLeftMargin;
- (void).cxx_destruct;
- (void)_disclosureTriangleButtonAction:(id)arg1;
- (void)_fillRect:(struct CGRect)arg1 dirtyRect:(struct CGRect)arg2 fillColor:(id)arg3;
- (void)_drawGutterAndResultSidebarBackgroundsIfNecessary:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawBoxContent:(struct CGRect)arg1;
- (void)scrollWheel:(id)arg1;
- (void)tile;
- (void)tileBoxContentView;
- (struct CGRect)_disclosureTriangleRectForBounds:(struct CGRect)arg1;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;
@property(getter=isDisclosed) BOOL disclosed; // @synthesize disclosed=_disclosed;
@property(getter=isSelected) BOOL selected; // @synthesize selected=_selected;
@property long long contentStyle; // @synthesize contentStyle=_contentStyle;
- (id)initWithFrame:(struct CGRect)arg1;

@end

