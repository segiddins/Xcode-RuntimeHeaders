//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface DSMQuery : NSObject
{
    NSString *_searchString;
    unsigned long long _queryMatchType;
    NSString *_tokenTypeKey;
    NSArray *_queryLanguages;
    NSString *_tokenScope;
    NSArray *_queryDocSets;
    NSArray *_sortDescriptors;
}

+ (id)queryForString:(id)arg1 matchType:(unsigned long long)arg2 tokenType:(id)arg3 languages:(id)arg4 tokenScope:(id)arg5 inDocSets:(id)arg6 sortDescriptors:(id)arg7;
@property(retain, nonatomic) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;
@property(retain, nonatomic) NSArray *docSets; // @synthesize docSets=_queryDocSets;
@property(retain, nonatomic) NSString *tokenScope; // @synthesize tokenScope=_tokenScope;
@property(retain, nonatomic) NSArray *languages; // @synthesize languages=_queryLanguages;
@property(retain, nonatomic) NSString *tokenTypeKey; // @synthesize tokenTypeKey=_tokenTypeKey;
@property(nonatomic) unsigned long long matchType; // @synthesize matchType=_queryMatchType;
@property(retain, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
- (id)description;
- (id)_debugDSAMatchTypeStringRepresentation:(unsigned long long)arg1;

@end

