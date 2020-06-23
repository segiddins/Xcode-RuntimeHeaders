//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDEProductIdentifier.h>

@class IDEProductCategory, NSString;

@interface IDEMalformedProductIdentifier : IDEProductIdentifier
{
    IDEProductCategory *_productCategory;
    NSString *_bundleIdentifier;
    NSString *_name;
}

+ (id)objectFromJSONRepresentation:(id)arg1 error:(id *)arg2;
+ (id)malformedProductIdentifierWithArchive:(id)arg1;
- (void).cxx_destruct;
@property(readonly) NSString *name; // @synthesize name=_name;
- (id)bundleIdentifier;
- (id)productCategory;
- (id)JSONRepresentation;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithProductCategory:(id)arg1 name:(id)arg2 bundleIdentifier:(id)arg3;

@end

