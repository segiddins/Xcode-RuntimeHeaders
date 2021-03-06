//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/DVTServicesJSONSerialization-Protocol.h>
#import <IDEFoundation/NSCopying-Protocol.h>

@class IDEProductCategory, NSString;

@interface IDEProductIdentifier : NSObject <DVTServicesJSONSerialization, NSCopying>
{
    NSString *_bundleIdentifier;
    IDEProductCategory *_productCategory;
}

+ (id)objectFromJSONRepresentation:(id)arg1 error:(id *)arg2;
+ (id)productIdentifierOrMalformedProductIdentifierForArchive:(id)arg1;
+ (id)productIdentifierWithBundleIdentifier:(id)arg1 productCategory:(id)arg2;
- (void).cxx_destruct;
@property(readonly) IDEProductCategory *productCategory; // @synthesize productCategory=_productCategory;
@property(readonly) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (id)JSONRepresentation;
- (id)userDefaultsKey;
- (id)_stringRepresentation;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (long long)compare:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 productCategory:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

