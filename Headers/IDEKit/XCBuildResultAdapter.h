//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/XCEDataNodeAdapterP-Protocol.h>

@class NSString, XCBuildResultsCell;

@interface XCBuildResultAdapter : NSObject <XCEDataNodeAdapterP>
{
    XCBuildResultsCell *_forwardingCell;
}

- (void).cxx_destruct;
- (void)clear;
- (void)_drawImage:(id)arg1 atPoint:(struct CGPoint)arg2;
- (id)accessibilityDescriptionForDataNode:(id)arg1;
- (id)dataNode:(id)arg1 outlineView:(id)arg2 dataCellForTableColumn:(id)arg3;
- (BOOL)isKeyAndFirstResponderForOutlineView:(id)arg1;
- (id)createTextViewForDataNode:(id)arg1;
- (void)expandActionForDataNode:(id)arg1;
- (void)_scrollToEndForDataNode:(id)arg1;
- (void)_recursiveSetTextExpanded:(BOOL)arg1 inDataNode:(id)arg2;
- (BOOL)textExpandedForDataNode:(id)arg1;
- (void)setTextExpanded:(BOOL)arg1 forDataNode:(id)arg2;
- (BOOL)expandableTitleForDataNode:(id)arg1;
- (BOOL)supportsTextExpansionAtMessageLevelForDataNode:(id)arg1;
- (BOOL)supportsTextExpansionAtSectionLevelForDataNode:(id)arg1;
- (BOOL)supportsTextExpansionForDataNode:(id)arg1;
- (BOOL)dataNode:(id)arg1 doubleClickInColumn:(id)arg2;
- (id)newAttributesForFont:(id)arg1 color:(id)arg2;
- (id)textColorForDataNode:(id)arg1;
- (double)verticaImageOffsetForDataNode:(id)arg1;
- (double)titleFontHeigthForDataNode:(id)arg1;
- (id)titleFontForDataNode:(id)arg1;
- (id)defaultBoldFont;
- (double)defaultFontHeight;
- (id)defaultFont;
- (id)imageForDataNode:(id)arg1;
- (id)titleForDataNode:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
