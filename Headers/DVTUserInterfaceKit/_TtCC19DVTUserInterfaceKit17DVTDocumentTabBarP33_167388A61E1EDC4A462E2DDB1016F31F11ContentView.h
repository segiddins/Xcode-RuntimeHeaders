//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTStructuredLayoutKit/DVTStructuredLayoutView.h>

#import <DVTUserInterfaceKit/NSSpringLoadingDestination-Protocol.h>

@class MISSING_TYPE;

@interface _TtCC19DVTUserInterfaceKit17DVTDocumentTabBarP33_167388A61E1EDC4A462E2DDB1016F31F11ContentView : DVTStructuredLayoutView <NSSpringLoadingDestination>
{
    MISSING_TYPE *_insertionIndex;
    MISSING_TYPE *_minimumWidth;
    MISSING_TYPE *tabBar;
    MISSING_TYPE *itemToAnimateInsertion;
    MISSING_TYPE *animateLayouts;
    MISSING_TYPE *_insertionSpacing;
    MISSING_TYPE *previousItemViews;
}

+ (BOOL)isCompatibleWithResponsiveScrolling;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)scrollWheel:(id)arg1;
- (void)springLoadingExited:(id)arg1;
- (unsigned long long)springLoadingUpdated:(id)arg1;
- (unsigned long long)springLoadingEntered:(id)arg1;
- (void)springLoadingHighlightChanged:(id)arg1;
- (void)springLoadingActivated:(BOOL)arg1 draggingInfo:(id)arg2;
- (void)concludeDragOperation:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (void)draggingEnded:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)dvt_positionSubviewsAndSizeSelfAfterSubviewLayout;
- (void)dvt_configureSubviewsBeforeSubviewLayout;
- (void)willRemoveSubview:(id)arg1;
- (void)didAddSubview:(id)arg1;

@end

