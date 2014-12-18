//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface DVQueryType : NSObject
{
    NSString *title;
    NSString *identifier;
}

+ (id)searchingCategory;
+ (id)noResultsCategory;
+ (id)webResultsCategory;
+ (id)fullTextCategory;
+ (id)titleCategory;
+ (id)apiCategory;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier;
@property(retain, nonatomic) NSString *title; // @synthesize title;
- (BOOL)isSearchingCategory;
- (BOOL)isNoResultsCategory;
- (BOOL)isWebCategory;
- (BOOL)isFullTextCategory;
- (BOOL)isTitleCategory;
- (BOOL)isAPICategory;

@end

