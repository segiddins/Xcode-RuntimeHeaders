//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTStructuredLayoutKit/DVTLayoutView_ML.h>

@class IBConnectionPanelScroller, NSView;

@interface IBConnectionPanelScrollView : DVTLayoutView_ML
{
    BOOL _autohidesScrollers;
    BOOL _allowRoomForGrowBox;
    BOOL _resizesContentVertically;
    BOOL _resizesContentHorizontally;
    NSView *_clipView;
    double _scrollerSize;
    IBConnectionPanelScroller *_verticalScroller;
    IBConnectionPanelScroller *_horizontalScroller;
    NSView *_documentView;
}

@property(retain, nonatomic) NSView *documentView; // @synthesize documentView=_documentView;
@property(readonly) IBConnectionPanelScroller *horizontalScroller; // @synthesize horizontalScroller=_horizontalScroller;
@property(readonly) IBConnectionPanelScroller *verticalScroller; // @synthesize verticalScroller=_verticalScroller;
@property(nonatomic) BOOL resizesContentHorizontally; // @synthesize resizesContentHorizontally=_resizesContentHorizontally;
@property(nonatomic) BOOL resizesContentVertically; // @synthesize resizesContentVertically=_resizesContentVertically;
@property(nonatomic) BOOL allowRoomForGrowBox; // @synthesize allowRoomForGrowBox=_allowRoomForGrowBox;
@property(nonatomic) BOOL autohidesScrollers; // @synthesize autohidesScrollers=_autohidesScrollers;
@property double scrollerSize; // @synthesize scrollerSize=_scrollerSize;
@property(readonly) NSView *contentView; // @synthesize contentView=_clipView;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)scrollWheel:(id)arg1;
@property(readonly) BOOL hasHorizontalScroller;
@property(readonly) BOOL hasVerticalScroller;
@property struct CGSize scrollPosition;
- (void)scrollVertically:(id)arg1;
- (void)scrollHorizontally:(id)arg1;
- (void)layoutBottomUp;
- (void)didLayoutSubview:(id)arg1;
- (void)layoutTopDown;
- (id)dvt_subviewsOrderedForLayout;
- (void)constrainDocumentFrameOrigin;
- (void)updateScrollerHiddenState;
- (void)adjustKnobs;
- (struct CGSize)frameSizeForContentSize:(struct CGSize)arg1;
- (struct CGRect)growBoxRect;
- (struct CGRect)vertScrollerRect;
- (struct CGRect)horzScrollerRect;
- (struct CGRect)contentRect;
- (double)borderSize;
- (id)initWithFrame:(struct CGRect)arg1;

@end

