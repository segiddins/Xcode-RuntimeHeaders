//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DVTKit/DVTCompletingTextViewDelegate-Protocol.h>

@class DVTAnnotationContext, DVTMutableRangeArray, DVTSourceTextView, NSArray, NSDictionary, NSEvent, NSMenu, NSNotification, NSString;

@protocol DVTSourceTextViewDelegate <DVTCompletingTextViewDelegate>

@optional
- (double)textView:(DVTSourceTextView *)arg1 constrainAccessoryAnnotationWidth:(double)arg2;
- (double)textView:(DVTSourceTextView *)arg1 constrainMaxAccessoryAnnotationWidth:(double)arg2;
- (double)textView:(DVTSourceTextView *)arg1 constrainMinAccessoryAnnotationWidth:(double)arg2;
- (NSArray *)directoriesForLiteralsInTextView:(DVTSourceTextView *)arg1;
- (NSArray *)textView:(DVTSourceTextView *)arg1 objectLiteralStringsForObjects:(NSArray *)arg2;
- (NSString *)textViewWillReturnPrintJobTitle:(DVTSourceTextView *)arg1;
- (void)textViewDidScroll:(DVTSourceTextView *)arg1;
- (void)setupGutterContextMenuWithMenu:(NSMenu *)arg1;
- (void)didEndTokenizedEditingWithRanges:(DVTMutableRangeArray *)arg1;
- (void)willStartTokenizedEditingWithRanges:(DVTMutableRangeArray *)arg1;
- (void)tokenizableRangesWithRange:(struct _NSRange)arg1 completionBlock:(void (^)(NSArray *))arg2;
- (void)textViewDidFinishAnimatingScroll:(DVTSourceTextView *)arg1;
- (void)textViewDidLoadAnnotationProviders:(DVTSourceTextView *)arg1;
- (void)textView:(DVTSourceTextView *)arg1 didRemoveAnnotations:(NSArray *)arg2;
- (void)textView:(DVTSourceTextView *)arg1 didAddAnnotations:(NSArray *)arg2;
- (DVTAnnotationContext *)annotationContextForTextView:(DVTSourceTextView *)arg1;
- (NSDictionary *)syntaxColoringContextForTextView:(DVTSourceTextView *)arg1;
- (void)textViewDidChangeFolding:(NSNotification *)arg1;
- (void)textViewWillChangeFolding:(NSNotification *)arg1;
- (void)textView:(DVTSourceTextView *)arg1 didClickOnTemporaryLinkAtCharacterIndex:(unsigned long long)arg2 event:(NSEvent *)arg3 isAltEvent:(BOOL)arg4;
- (BOOL)textView:(DVTSourceTextView *)arg1 shouldShowTemporaryLinkForCharacterAtIndex:(unsigned long long)arg2 proposedRange:(struct _NSRange)arg3 effectiveRanges:(id *)arg4;
- (void)textView:(DVTSourceTextView *)arg1 handleMouseDidExitSidebar:(NSEvent *)arg2;
- (void)textView:(DVTSourceTextView *)arg1 handleMouseDidMoveOverSidebar:(NSEvent *)arg2 atLineNumber:(unsigned long long)arg3;
- (void)textView:(DVTSourceTextView *)arg1 handleMouseDownInSidebar:(NSEvent *)arg2 atLineNumber:(unsigned long long)arg3;
@end

