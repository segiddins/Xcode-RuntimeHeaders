//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/XCBuildResultAdapter.h>

@interface XCLogItemAdapter : XCBuildResultAdapter
{
}

- (id)dataNodePersistentObjectComponent:(id)arg1;
- (void)dataNode:(id)arg1 clearForwardingCell:(id)arg2;
- (void)dataNode:(id)arg1 forwardingCell:(id)arg2 copyWithZone:(struct _NSZone *)arg3 copiedCell:(id)arg4;
- (BOOL)dataNode:(id)arg1 forwardingCell:(id)arg2 trackMouse:(id)arg3 inRect:(struct CGRect)arg4 ofView:(id)arg5 untilMouseUp:(BOOL)arg6;
- (unsigned long long)dataNode:(id)arg1 forwardingCell:(id)arg2 hitTestForEvent:(id)arg3 inRect:(struct CGRect)arg4 ofView:(id)arg5;
- (void)dataNode:(id)arg1 forwardingCell:(id)arg2 drawWithFrame:(struct CGRect)arg3 inView:(id)arg4;
- (struct CGRect)optionalTextFrameForCellFrame:(struct CGRect)arg1 inOutlineView:(id)arg2 forDataNode:(id)arg3;
- (id)accessibilityDescriptionForDataNode:(id)arg1;
- (id)secondRowStringForDataNode:(id)arg1;
- (id)titleSecondPartForDataNode:(id)arg1;
- (id)targetHeadingBadgeForDataNode:(id)arg1;
- (struct CGRect)_drawSummaryBackgroundWithRoundedRectInFrame:(struct CGRect)arg1 forDataNode:(id)arg2;
- (void)_drawExpandedTitleInFrame:(struct CGRect)arg1 selected:(BOOL)arg2 forDataNode:(id)arg3;
- (void)_drawOptionalTextInFrame:(struct CGRect)arg1 inView:(id)arg2 forDataNode:(id)arg3;
- (struct CGRect)drawAllIssuesForDataNode:(id)arg1 inFrame:(struct CGRect)arg2 attributes:(id)arg3 doDraw:(BOOL)arg4;
- (struct CGRect)drawIssues:(unsigned long long)arg1 withImage:(id)arg2 inFrame:(struct CGRect)arg3 attributes:(id)arg4 doDraw:(BOOL)arg5 verticalImageOffset:(double)arg6;
- (void)_updateButtonImagesForButtonCell:(id)arg1 inFrame:(struct CGRect)arg2 selectionKnown:(BOOL)arg3 selected:(BOOL)arg4 forDataNode:(id)arg5;
- (struct CGRect)_expandButtonFrameForFrame:(struct CGRect)arg1 ofView:(id)arg2 knownToDisplay:(BOOL)arg3 forDataNode:(id)arg4;
- (BOOL)shouldDrawButtonForExpandingTitleForDataNode:(id)arg1;
- (BOOL)shouldDrawButtonForExpandingTitle:(id)arg1 attributes:(id)arg2 forDataNode:(id)arg3;
- (BOOL)drawInMouseRowForDataNode:(id)arg1;
- (BOOL)anyImportantMessagesForDataNode:(id)arg1;
- (BOOL)anyIssuesForDataNode:(id)arg1;
- (unsigned long long)analyzerResultsForDataNode:(id)arg1;
- (unsigned long long)analyzerWarningsForDataNode:(id)arg1;
- (unsigned long long)warningsForDataNode:(id)arg1;
- (unsigned long long)errorsForDataNode:(id)arg1;
- (unsigned long long)testFailuresForDataNode:(id)arg1;
- (void)_drawRoundedRect:(struct CGRect)arg1 bgColor:(id)arg2 fgColor:(id)arg3;
- (void)_drawOvalInRect:(struct CGRect)arg1 bgColor:(id)arg2 fgColor:(id)arg3;
- (BOOL)isSummaryAdapter;
- (BOOL)isTargetHeadingAdapter;
- (BOOL)isInvocationAdapter;
- (BOOL)isUnitTestAdapter;
- (BOOL)filterChildData:(id)arg1 parentNode:(id)arg2 designatedAdapter:(id)arg3;
- (id)instantiateAddedChildWithData:(id)arg1 forDataNode:(id)arg2;
- (void)instantiateChildrenForDataNode:(id)arg1;
- (BOOL)dataNode:(id)arg1 handleReturnKey:(id)arg2 forOutlineView:(id)arg3 changeFocus:(BOOL)arg4;
- (id)subitemsForDataNode:(id)arg1;
- (BOOL)dataNode:(id)arg1 shouldEditTableColumn:(id)arg2;
- (BOOL)hasTranscriptForDataNode:(id)arg1;
- (BOOL)isDataNodeSelectable:(id)arg1;
- (BOOL)isDataNodeExpandable:(id)arg1;
- (void)dataNode:(id)arg1 outlineView:(id)arg2 willDisplayCell:(id)arg3 forTableColumn:(id)arg4;
- (double)heightOfRowForDataNode:(id)arg1;
- (double)_baseHeightOfRowForDataNode:(id)arg1;
- (id)dataNode:(id)arg1 objectValueForTableColumn:(id)arg2;
- (void)dataNodeConfigure:(id)arg1;
- (id)init;

@end

