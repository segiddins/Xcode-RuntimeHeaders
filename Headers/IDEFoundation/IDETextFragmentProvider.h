//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol IDETextFragmentProviderSeed;

@interface IDETextFragmentProvider : NSObject
{
    NSObject<IDETextFragmentProviderSeed> *_seed;
}

+ (id)emptyTextProvider;
+ (id)allTextFragmentsForSeed:(id)arg1 fromFilePath:(id)arg2;
+ (BOOL)retainsSeed;
+ (void)generateTextFragmentProviderSeedForFilePath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (Class)textProviderClassForFilePath:(id)arg1 explicitFileDataType:(id)arg2;
+ (void)faultProviderClasses;
+ (id)textFragmentProviderLookupEntriesInPriorityOrder;
- (void).cxx_destruct;
@property(readonly) NSObject<IDETextFragmentProviderSeed> *seed; // @synthesize seed=_seed;
- (id)documentLocationForToken:(long long)arg1 documentURL:(id)arg2 timestamp:(id)arg3 range:(struct _NSRange)arg4;
- (void)enumerateTextFragments:(CDUnknownBlockType)arg1;
- (id)initWithSeed:(id)arg1;
- (id)init;

@end

