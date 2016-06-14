//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSURL;

@interface XCRASearchResult : NSObject
{
    id _content;
    NSURL *_url;
    NSDictionary *_context;
}

+ (id)searchResultWithContent:(id)arg1 url:(id)arg2 context:(id)arg3;
+ (id)searchResultWithString:(id)arg1 makeHTML:(BOOL)arg2;
+ (id)_stringBySubstitutingHTMLEntitiesForAmpersandAndAngleBracketsInString:(id)arg1;
+ (id)searchResultWithString:(id)arg1;
- (void)setContext:(id)arg1;
- (id)context;
- (void)setUrl:(id)arg1;
- (id)url;
- (void)setContent:(id)arg1;
- (id)content;
- (id)description;
- (void)dealloc;
- (id)initWithContent:(id)arg1 url:(id)arg2 context:(id)arg3;

@end

