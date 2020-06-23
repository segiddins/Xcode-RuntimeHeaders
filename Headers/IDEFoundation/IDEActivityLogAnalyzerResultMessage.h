//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDEActivityLogMessage.h>

@class NSString;

@interface IDEActivityLogAnalyzerResultMessage : IDEActivityLogMessage
{
    NSString *_resultType;
    long long _keyEventIndex;
}

+ (id)analyzerMessageType;
@property long long keyEventIndex; // @synthesize keyEventIndex=_keyEventIndex;
- (void).cxx_destruct;
- (void)dvt_writeToSerializer:(id)arg1;
- (id)dvt_initFromDeserializer:(id)arg1;
- (id)initWithTitle:(id)arg1 location:(id)arg2 resultType:(id)arg3 categoryIdentifier:(id)arg4 keyEventIndex:(long long)arg5 submessages:(id)arg6;
- (id)resultCategory;
- (id)resultType;
- (void)setResultType:(id)arg1;
- (unsigned long long)totalNumberOfAnalyzerResults;
- (unsigned long long)totalNumberOfWarnings;

@end

