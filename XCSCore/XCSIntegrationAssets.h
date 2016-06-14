//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, XCSIntegrationAsset;

@interface XCSIntegrationAssets : NSObject
{
    XCSIntegrationAsset *_sourceControlLog;
    XCSIntegrationAsset *_buildServiceLog;
    XCSIntegrationAsset *_product;
    XCSIntegrationAsset *_archive;
    XCSIntegrationAsset *_xcodebuildOutput;
    XCSIntegrationAsset *_xcodebuildLog;
    NSArray *_triggerAssets;
    NSArray *_additionalAssets;
}

+ (id)emptyAssets;
@property(retain) NSArray *additionalAssets; // @synthesize additionalAssets=_additionalAssets;
@property(retain) NSArray *triggerAssets; // @synthesize triggerAssets=_triggerAssets;
@property(retain) XCSIntegrationAsset *xcodebuildLog; // @synthesize xcodebuildLog=_xcodebuildLog;
@property(retain) XCSIntegrationAsset *xcodebuildOutput; // @synthesize xcodebuildOutput=_xcodebuildOutput;
@property(retain) XCSIntegrationAsset *archive; // @synthesize archive=_archive;
@property(retain) XCSIntegrationAsset *product; // @synthesize product=_product;
@property(retain) XCSIntegrationAsset *buildServiceLog; // @synthesize buildServiceLog=_buildServiceLog;
@property(retain) XCSIntegrationAsset *sourceControlLog; // @synthesize sourceControlLog=_sourceControlLog;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithContents:(id)arg1 service:(id)arg2 validationErrors:(id *)arg3;
- (id)initWithSourceControlLog:(id)arg1 buildServiceLog:(id)arg2 product:(id)arg3 archive:(id)arg4 xcodebuildOutput:(id)arg5 xcodebuildLog:(id)arg6 triggerAssets:(id)arg7 additionalAssets:(id)arg8;
- (id)init;

@end

