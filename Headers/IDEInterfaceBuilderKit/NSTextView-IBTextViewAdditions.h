//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTextView.h>

#import <IDEInterfaceBuilderKit/IBFindIndicatorProvider-Protocol.h>

@class NSString;

@interface NSTextView (IBTextViewAdditions) <IBFindIndicatorProvider>
- (id)ib_showFindIndicatorForTextRange:(struct _NSRange)arg1 takeFocus:(BOOL)arg2;
- (struct _NSRange)ib_findIndicatorRangeForSearchString:(id)arg1;
- (id)ib_findableStringValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

