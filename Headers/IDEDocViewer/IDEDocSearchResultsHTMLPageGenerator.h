//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IDEDocSearchResultsHTMLPageGenerator : NSObject
{
}

- (void)_generateSearchResultsHTMLPageWithQuery:(id)arg1 results:(id)arg2 outputPath:(id)arg3;
- (id)_base64StringOfImage:(id)arg1;
- (id)_doubleResolutionImageOfImage:(id)arg1;
- (id)_embeddedMultiRepBase64OfImage:(id)arg1;
- (id)_tableRowForResultWithTitle:(id)arg1 URL:(id)arg2 icon:(id)arg3 abstract:(id)arg4 scope:(id)arg5 availability:(id)arg6;
- (void)generateSearchResultsHTMLPageWithQuery:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end

