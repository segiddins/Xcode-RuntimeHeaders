//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface IDEResultBundleManager : NSObject
{
    NSMapTable *_bundleProcessorsByInvocationRecord;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (id)processorForResultBundleAtURL:(id)arg1;
- (id)processedRecordForInvocationRecord:(id)arg1;
- (void)clearRecord:(id)arg1;
- (void)processRecord:(id)arg1 fromResultBundleURL:(id)arg2;
- (id)init;

@end

