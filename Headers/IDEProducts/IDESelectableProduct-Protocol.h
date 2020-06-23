//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEProducts/DVTInvalidation-Protocol.h>

@class IDEProductCategory, IDEProductIdentifier, IDEProductVersion, NSArray, NSString, NSURL;

@protocol IDESelectableProduct <DVTInvalidation>
@property(nonatomic, readonly) NSString *adamId;
@property(nonatomic, readonly) IDEProductVersion *mostRecentVersionAvailableForSale;
@property(nonatomic, readonly) NSArray *productVersions;
@property(nonatomic, readonly) IDEProductCategory *productCategory;
@property(nonatomic, readonly) NSArray *archives;
@property(nonatomic, readonly) IDEProductIdentifier *identifier;
@property(nonatomic, readonly) NSURL *cacheImageURL;
@property(nonatomic, readonly) NSString *name;
@end
