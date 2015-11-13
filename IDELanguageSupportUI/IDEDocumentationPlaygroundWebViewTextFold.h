//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DVTKit/DVTTextFold.h>

@class DVTWebViewTextAttachmentCell, IDEDocumentationPlaygroundWebViewController;

@interface IDEDocumentationPlaygroundWebViewTextFold : DVTTextFold
{
    IDEDocumentationPlaygroundWebViewController *_webViewController;
}

@property(retain) IDEDocumentationPlaygroundWebViewController *webViewController; // @synthesize webViewController=_webViewController;
- (void).cxx_destruct;
- (struct CGRect)foldingLayoutManager:(id)arg1 shouldUseBoundingRect:(struct CGRect)arg2 forGlyphRange:(struct _NSRange)arg3 inTextContainer:(id)arg4;
- (void)primitiveInvalidate;

// Remaining properties
@property(readonly) DVTWebViewTextAttachmentCell *attachmentCell; // @dynamic attachmentCell;

@end
