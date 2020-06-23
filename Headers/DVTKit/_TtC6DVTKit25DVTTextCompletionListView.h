//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "DVTStructuredLayoutView.h"

@class DVTTextCompletionFormatContext, DVTTextCompletionItemTableCellView, MISSING_TYPE, NSNumber, NSObject, NSScreen, NSTableView, NSView;
@protocol DVTTextCompletionItem;

@interface _TtC6DVTKit25DVTTextCompletionListView : DVTStructuredLayoutView
{
    MISSING_TYPE *completionTableView;
    MISSING_TYPE *measurementCellView;
    MISSING_TYPE *placeholderField;
    MISSING_TYPE *completionScrollView;
    MISSING_TYPE *signatureArea;
    MISSING_TYPE *signatureField;
    MISSING_TYPE *divider;
    MISSING_TYPE *infoArea;
    MISSING_TYPE *longestInitialItem;
    MISSING_TYPE *_longestInitialSignatureValue;
    MISSING_TYPE *_formatContextForLongestInitialItem;
    MISSING_TYPE *_numberOfCompletionItems;
    MISSING_TYPE *_targetScreen;
    MISSING_TYPE *_typingLocation;
    MISSING_TYPE *_signatureValue;
    MISSING_TYPE *_previousWidth;
    MISSING_TYPE *_pinnedWidth;
    MISSING_TYPE *_pinnedWindowX;
    MISSING_TYPE *_pinnedOrientation;
    MISSING_TYPE *wasShowingPlaceholder;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)prepareForNewSession;
- (void)viewDidEndLiveResize;
- (void)dvt_positionSubviewsAndSizeSelfAfterSubviewLayout;
- (void)dvt_configureSubviewsBeforeSubviewLayout;
- (BOOL)isFlipped;
@property(nonatomic, retain) NSView *infoView;
@property(nonatomic, readonly) double lastInfoViewWidth;
- (id)init;
- (id)initWithCoder:(id)arg1;
@property(nonatomic, retain) NSObject *signatureValue;
@property(nonatomic) struct CGRect typingLocation;
@property(nonatomic, retain) NSScreen *targetScreen;
@property(nonatomic, retain) NSNumber *numberOfCompletionItems;
@property(nonatomic, retain) DVTTextCompletionFormatContext *formatContextForLongestInitialItem;
@property(nonatomic, retain) NSObject *longestInitialSignatureValue;
@property(nonatomic, retain) id <DVTTextCompletionItem> longestInitialItem; // @synthesize longestInitialItem;
@property(nonatomic, readonly) unsigned long long lineBreakModeForSignatureField;
@property(nonatomic, readonly) DVTTextCompletionItemTableCellView *measurementCellView; // @synthesize measurementCellView;
@property(nonatomic, readonly) NSTableView *completionTableView; // @synthesize completionTableView;

// Remaining properties
@property(nonatomic, readonly) BOOL flipped;

@end

