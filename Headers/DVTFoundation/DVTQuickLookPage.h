//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface DVTQuickLookPage : NSObject
{
    NSURL *_documentURL;
    unsigned long long _pageNumber;
}

@property(readonly) unsigned long long pageNumber; // @synthesize pageNumber=_pageNumber;
@property(readonly) NSURL *documentURL; // @synthesize documentURL=_documentURL;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDocumentURL:(id)arg1 pageNumber:(unsigned long long)arg2;

@end

