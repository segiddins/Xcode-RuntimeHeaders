//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDERecordedThreadCollection.h>

@class NSData, NSString, NSURL;

@interface IDEMemoryData : IDERecordedThreadCollection
{
    BOOL _shouldAutoUpdate;
    BOOL _memoryFaulted;
    BOOL _showsAsMemoryFaulted;
    unsigned long long _startingAddress;
    NSString *_expression;
    unsigned long long _numberOfBytes;
    NSData *_rawMemoryData;
    NSData *_shadowMemoryData;
    NSString *_uuid;
    NSURL *_url;
}

- (void).cxx_destruct;
@property(retain) NSURL *url; // @synthesize url=_url;
@property(readonly) NSString *uuid; // @synthesize uuid=_uuid;
@property BOOL showsAsMemoryFaulted; // @synthesize showsAsMemoryFaulted=_showsAsMemoryFaulted;
@property(nonatomic, getter=isMemoryFaulted) BOOL memoryFaulted; // @synthesize memoryFaulted=_memoryFaulted;
@property BOOL shouldAutoUpdate; // @synthesize shouldAutoUpdate=_shouldAutoUpdate;
@property(copy) NSData *shadowMemoryData; // @synthesize shadowMemoryData=_shadowMemoryData;
@property(copy) NSData *rawMemoryData; // @synthesize rawMemoryData=_rawMemoryData;
@property unsigned long long numberOfBytes; // @synthesize numberOfBytes=_numberOfBytes;
@property(copy) NSString *expression; // @synthesize expression=_expression;
@property unsigned long long startingAddress; // @synthesize startingAddress=_startingAddress;
- (void)gatherAdditionalInformationForAddress:(unsigned long long)arg1 numberOfBytes:(unsigned long long)arg2;
- (void)primitiveInvalidate;
- (void)_updateUsingExpression:(id)arg1 numberOfBytes:(unsigned long long)arg2;
- (void)updateNumberOfBytes:(unsigned long long)arg1;
- (void)updateUsingExpression:(id)arg1;
- (void)update;
- (void)autoUpdate;
- (id)initWithExpression:(id)arg1 numberOfBytes:(unsigned long long)arg2 process:(id)arg3;
- (id)generateNewURL;

@end

