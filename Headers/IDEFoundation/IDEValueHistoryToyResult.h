//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDETimestampedPlaygroundResult.h>

@class NSString;
@protocol IDEPlaygroundLoggerLogEntry;

@interface IDEValueHistoryToyResult : IDETimestampedPlaygroundResult
{
    id <IDEPlaygroundLoggerLogEntry> _toyValue;
    NSString *_label;
}

@property(readonly, copy) NSString *label; // @synthesize label=_label;
@property(readonly) id <IDEPlaygroundLoggerLogEntry> toyValue; // @synthesize toyValue=_toyValue;
- (void).cxx_destruct;
- (id)initWithSubjectIdentifier:(id)arg1 resultDate:(id)arg2 toyValue:(id)arg3 resultLabel:(id)arg4;
- (id)initWithChannelIdentifier:(id)arg1 subjectIdentifier:(id)arg2 sequenceNumber:(unsigned long long)arg3;

@end

