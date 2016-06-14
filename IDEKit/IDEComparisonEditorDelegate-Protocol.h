//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/NSObject-Protocol.h>

@class DVTDocumentLocation, IDEComparisonEditor, IDEEditorDocument;

@protocol IDEComparisonEditorDelegate <NSObject>

@optional
- (BOOL)comparisonEditorShouldCloseDocumentsDuringWillOpenSpecifier:(IDEComparisonEditor *)arg1;
- (void)comparisonEditor:(IDEComparisonEditor *)arg1 didReplaceAncestorDocument:(IDEEditorDocument *)arg2;
- (void)comparisonEditor:(IDEComparisonEditor *)arg1 willReplaceAncestorDocument:(IDEEditorDocument *)arg2;
- (DVTDocumentLocation *)comparisonEditor:(IDEComparisonEditor *)arg1 substituteDocumentLocationForAncestorDocumentLocation:(DVTDocumentLocation *)arg2;
- (void)comparisonEditor:(IDEComparisonEditor *)arg1 didReplaceSecondaryDocument:(IDEEditorDocument *)arg2;
- (void)comparisonEditor:(IDEComparisonEditor *)arg1 willReplaceSecondaryDocument:(IDEEditorDocument *)arg2;
- (DVTDocumentLocation *)comparisonEditor:(IDEComparisonEditor *)arg1 substituteDocumentLocationForSecondaryDocumentLocation:(DVTDocumentLocation *)arg2;
- (void)comparisonEditor:(IDEComparisonEditor *)arg1 didReplacePrimaryDocument:(IDEEditorDocument *)arg2;
- (void)comparisonEditor:(IDEComparisonEditor *)arg1 willReplacePrimaryDocument:(IDEEditorDocument *)arg2;
- (DVTDocumentLocation *)comparisonEditor:(IDEComparisonEditor *)arg1 substituteDocumentLocationForPrimaryDocumentLocation:(DVTDocumentLocation *)arg2;
@end

