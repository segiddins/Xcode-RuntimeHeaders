//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Localization/NSCopying-Protocol.h>

@class NSArray, NSSet, NSString;

@interface LOCFileDescription : NSObject <NSCopying>
{
    NSString *_filepath;
    NSString *_originalAttributeValue;
    NSString *_buildPath;
    NSString *_uniqueId;
    NSString *_sourceLocale;
    NSString *_targetLocale;
    NSArray *_existingLanguages;
    NSArray *_targetMembership;
    NSSet *_supportedPlatforms;
}

- (void).cxx_destruct;
@property(copy) NSSet *supportedPlatforms; // @synthesize supportedPlatforms=_supportedPlatforms;
@property(copy) NSArray *targetMembership; // @synthesize targetMembership=_targetMembership;
@property(copy) NSArray *existingLanguages; // @synthesize existingLanguages=_existingLanguages;
@property(copy) NSString *targetLocale; // @synthesize targetLocale=_targetLocale;
@property(copy) NSString *sourceLocale; // @synthesize sourceLocale=_sourceLocale;
@property(copy) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;
@property(copy) NSString *buildPath; // @synthesize buildPath=_buildPath;
@property(copy) NSString *originalAttributeValue; // @synthesize originalAttributeValue=_originalAttributeValue;
@property(copy) NSString *filepath; // @synthesize filepath=_filepath;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPath:(id)arg1 error:(id *)arg2;
- (id)initWithPath:(id)arg1 originalAttributeValue:(id)arg2 buildPath:(id)arg3 uniqueId:(id)arg4 existingLanguages:(id)arg5 targetMembership:(id)arg6 error:(id *)arg7;
- (id)initWithPath:(id)arg1 originalAttributeValue:(id)arg2 supportedPlatforms:(id)arg3 buildPath:(id)arg4 uniqueId:(id)arg5 existingLanguages:(id)arg6 targetMembership:(id)arg7 error:(id *)arg8;

@end

