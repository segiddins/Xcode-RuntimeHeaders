//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/IDEPlaygroundLoggerObjectReflectionDecoder-Protocol.h>

@class NSNumberFormatter, NSString;

@interface IDEPlaygroundLoggerObjectReflectionDecoderForSize : NSObject <IDEPlaygroundLoggerObjectReflectionDecoder>
{
    NSNumberFormatter *_cachedNumberFormatter;
}

- (void).cxx_destruct;
- (id)createAttributedSummaryForObjectReflection:(id)arg1;
- (id)decodeObjectReflection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

