//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDEBatchFindFileSource.h>

@class NSArray;

@interface IDEBatchFindUnionSource : IDEBatchFindFileSource
{
    NSArray *_sources;
}

+ (id)decodeFromPropertyListRepresentation:(id)arg1;
+ (id)propertyListIdentifier;
- (void).cxx_destruct;
@property(readonly) NSArray *sources; // @synthesize sources=_sources;
- (void)accumulateContributingSources:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqualToFileSourceWithIdenticalClass:(id)arg1;
- (id)propertyListRepresentation;
- (id)initWithSources:(id)arg1;

@end
