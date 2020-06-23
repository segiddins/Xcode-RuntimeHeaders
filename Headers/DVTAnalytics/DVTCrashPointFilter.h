//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTAnalytics/DVTServicesFilenameSerialization-Protocol.h>
#import <DVTAnalytics/NSCopying-Protocol.h>

@class NSString;

@interface DVTCrashPointFilter : NSObject <NSCopying, DVTServicesFilenameSerialization>
{
    long long _filterType;
    NSString *_filter;
}

+ (id)objectFromFilenameRepresentation:(id)arg1 error:(id *)arg2;
+ (id)emptyFilter;
- (void).cxx_destruct;
@property(readonly) NSString *filter; // @synthesize filter=_filter;
@property(readonly) long long filterType; // @synthesize filterType=_filterType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)filenameRepresentation;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initEmptyFilter;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

