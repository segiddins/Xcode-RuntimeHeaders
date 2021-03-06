//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEModelFoundation/NSCopying-Protocol.h>

@class DVTFilePath;

@interface _IDEDataModelCodeGeneratorCacheKey : NSObject <NSCopying>
{
    DVTFilePath *_contentsFilePath;
    DVTFilePath *_outputFilePath;
}

- (void).cxx_destruct;
@property(readonly, copy) DVTFilePath *outputFilePath; // @synthesize outputFilePath=_outputFilePath;
@property(readonly, copy) DVTFilePath *contentsFilePath; // @synthesize contentsFilePath=_contentsFilePath;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithContentsFilePath:(id)arg1 outputFilePath:(id)arg2;

@end

