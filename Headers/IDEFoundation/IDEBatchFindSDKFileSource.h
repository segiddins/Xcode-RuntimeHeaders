//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDEBatchFindFileSource.h>

@class NSString;

@interface IDEBatchFindSDKFileSource : IDEBatchFindFileSource
{
    NSString *_SDKIdentifier;
}

+ (id)decodeFromPropertyListRepresentation:(id)arg1;
+ (id)propertyListIdentifier;
- (void).cxx_destruct;
@property(readonly) NSString *SDKIdentifier; // @synthesize SDKIdentifier=_SDKIdentifier;
- (void)accessContentGroupsWithWorkspace:(id)arg1 priority:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)accumulateContributingSources:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqualToFileSourceWithIdenticalClass:(id)arg1;
- (id)propertyListRepresentation;
- (id)initWithSDKIdentifier:(id)arg1;

@end
