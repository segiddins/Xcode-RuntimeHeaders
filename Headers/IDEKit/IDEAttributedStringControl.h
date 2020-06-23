//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTStructuredLayoutKit/DVTLayoutView_ML.h>

#import <IDEKit/DVTFontTextFieldCellDelegate-Protocol.h>
#import <IDEKit/DVTInvalidation-Protocol.h>
#import <IDEKit/IDEAttributedStringControlTextViewDelegate-Protocol.h>
#import <IDEKit/IDEGroupedSegmentedControlDelegate-Protocol.h>
#import <IDEKit/IDEParagraphStylePopoverControllerDelegate-Protocol.h>

@class DVTFontTextField, DVTSegmentColorWell, DVTStackBacktrace, IDEAttributedStringControlParagraphStylePopoverController, IDEAttributedStringControlTextView, IDEGroupedSegmentedControl, IDEGroupedSegmentedControlGroup, IDEGroupedSegmentedControlItem, NSAttributedString, NSDictionary, NSFont, NSPopover, NSScrollView, NSStepper, NSString, NSTextView;
@protocol DVTFontTextFieldDataSource;

@interface IDEAttributedStringControl : DVTLayoutView_ML <IDEGroupedSegmentedControlDelegate, IDEParagraphStylePopoverControllerDelegate, IDEAttributedStringControlTextViewDelegate, DVTInvalidation, DVTFontTextFieldCellDelegate>
{
    NSScrollView *_scrollView;
    IDEAttributedStringControlTextView *_textView;
    DVTFontTextField *_fontControl;
    NSStepper *_fontControlStepper;
    IDEGroupedSegmentedControl *_attributesStrip;
    DVTSegmentColorWell *_foregroundColorOverlay;
    DVTSegmentColorWell *_backgroundColorOverlay;
    IDEGroupedSegmentedControlGroup *_alignmentGroup;
    IDEGroupedSegmentedControlGroup *_colorGroup;
    IDEGroupedSegmentedControlGroup *_moreGroup;
    IDEGroupedSegmentedControlItem *_leftAlignmentItem;
    IDEGroupedSegmentedControlItem *_centerAlignmentItem;
    IDEGroupedSegmentedControlItem *_rightAlignmentItem;
    IDEGroupedSegmentedControlItem *_justifiedAlignmentItem;
    IDEGroupedSegmentedControlItem *_naturalAlignmentItem;
    IDEGroupedSegmentedControlItem *_foregroundColorItem;
    IDEGroupedSegmentedControlItem *_backgroundColorItem;
    IDEGroupedSegmentedControlItem *_moreItem;
    NSPopover *_paragraphStylePopover;
    IDEAttributedStringControlParagraphStylePopoverController *_paragraphStylePopoverController;
    long long numberOfEdits;
    NSFont *_currentFontForSelection;
    id _target;
    SEL _action;
    NSDictionary *_defaultTypingAttributes;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *defaultTypingAttributes; // @synthesize defaultTypingAttributes=_defaultTypingAttributes;
@property SEL action; // @synthesize action=_action;
@property __weak id target; // @synthesize target=_target;
@property(retain) id <DVTFontTextFieldDataSource> fontTextFieldDataSource;
- (void)layoutBottomUp;
- (void)layoutTopDown;
- (struct CGRect)frameToPlaceView:(id)arg1 afterView:(id)arg2 withGap:(double)arg3;
- (void)layoutScrollView;
- (struct CGSize)textViewSizeForContainerSize:(struct CGSize)arg1;
- (struct CGSize)updateContainerLayoutAndComputeBounds;
- (struct CGSize)textContainerSize;
- (double)textViewWidth;
- (struct CGSize)scrollViewContentSizeForFrameSize:(struct CGSize)arg1;
- (CDStruct_d659fc14)scrollViewConfiguration;
- (BOOL)isFlipped;
- (void)textDidEndEditing:(id)arg1;
- (void)textViewDidCommitEditing:(id)arg1;
- (void)paragraphStylePopoverControllerDidChangeAttributes:(id)arg1;
- (void)incrementFontSize:(id)arg1;
- (void)fontWellUpdated:(id)arg1;
- (void)changeBackgroundColor:(id)arg1;
- (void)changeForegroundColor:(id)arg1;
- (void)updateSelectedRangesWithValue:(id)arg1 forAttribute:(id)arg2;
- (void)groupedSegmentedControl:(id)arg1 userClickedItem:(id)arg2 inGroup:(id)arg3;
- (void)applyValueFromFontControl;
- (void)commitUpdatedAttributedStringValueToModelIfNeeded;
- (void)commitUpdatedAttributedStringValueToModel;
- (void)pushFontValue:(id)arg1 toFontWell:(id)arg2;
- (void)pushColorValue:(id)arg1 toColorWell:(id)arg2;
- (void)textDidChange:(id)arg1;
- (void)textViewDidChangeTypingAttributes:(id)arg1;
- (void)textViewDidChangeSelection:(id)arg1;
- (void)refreshAttributeControls;
- (void)fontTextFieldCell:(id)arg1 enumerateMultipleValues:(CDUnknownBlockType)arg2;
- (id)paragraphEditingProxiesForSelection;
- (id)attributeValuesInSelectionForAttribute:(id)arg1;
- (void)enumerateSelectedRangesForAttribute:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)enumerateSelectedParagraphsWithBlock:(CDUnknownBlockType)arg1;
- (void)enumeratePargraphsInRange:(struct _NSRange)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)rangesToScanForAttributes;
@property(retain) NSFont *currentFontForSelection;
@property(copy) NSAttributedString *attributedStringValue;
@property(copy) NSString *placeholder;
@property(readonly) NSTextView *textView;
- (void)awakeFromNib;
- (void)setupPargraphStylePopUp;
- (void)setupAttributesStrip;
- (void)setupColorWells;
- (void)setupLayout;
- (double)accessoryCenterAnchor;
- (void)primitiveInvalidate;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

