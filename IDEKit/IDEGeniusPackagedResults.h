//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface IDEGeniusPackagedResults : NSObject
{
    NSArray *_geniusResults;
    NSString *_geniusCategory;
}

@property(readonly) NSString *geniusCategory; // @synthesize geniusCategory=_geniusCategory;
@property(readonly) NSArray *geniusResults; // @synthesize geniusResults=_geniusResults;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithGeniusResults:(id)arg1 geniusCategory:(id)arg2;
- (id)init;

@end

