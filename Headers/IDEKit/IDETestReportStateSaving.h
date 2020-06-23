//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTFilePath, NSArray, NSIndexPath, NSMutableDictionary, NSString;

@interface IDETestReportStateSaving : NSObject
{
    NSString *_identifier;
    NSString *_fileName;
    DVTFilePath *_storagePath;
    NSMutableDictionary *_cachedPathsForKey;
}

- (void).cxx_destruct;
@property(readonly) NSMutableDictionary *cachedPathsForKey; // @synthesize cachedPathsForKey=_cachedPathsForKey;
@property(copy, nonatomic) DVTFilePath *storagePath; // @synthesize storagePath=_storagePath;
@property(copy, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (BOOL)saveWithError:(id *)arg1;
@property(readonly, copy, nonatomic) NSArray *cachedItemIdentifiers;
- (void)purgeItemIdentifier:(id)arg1;
- (void)stashItemIdentifier:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *cachedPaths;
- (void)purgePath:(id)arg1;
- (void)stashPath:(id)arg1;
- (id)indexPathFromString:(id)arg1;
@property(copy) NSString *cachedSelectedItemIdentifier;
@property(copy) NSIndexPath *cachedSelectedItemPath;
- (id)userDefaultsKey;
- (id)cacheFilePath;
- (id)key;
- (id)fileNameWithExtension;
- (void)loadCache;
- (void)createStoragePath;
- (id)initWithIdentifier:(id)arg1 fileName:(id)arg2;

@end

