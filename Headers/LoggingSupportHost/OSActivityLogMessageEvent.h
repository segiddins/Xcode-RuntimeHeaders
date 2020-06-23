//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LoggingSupportHost/OSActivityEventMessage.h>

@class NSString;

@interface OSActivityLogMessageEvent : OSActivityEventMessage
{
    unsigned char _messageType;
    NSString *_subsystem;
    NSString *_category;
    unsigned long long _senderProgramCounter;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned char messageType; // @synthesize messageType=_messageType;
@property(readonly, nonatomic) unsigned long long senderProgramCounter; // @synthesize senderProgramCounter=_senderProgramCounter;
@property(readonly, copy, nonatomic) NSString *category; // @synthesize category=_category;
@property(readonly, copy, nonatomic) NSString *subsystem; // @synthesize subsystem=_subsystem;
- (void)_addProperties:(id)arg1;
- (id)initWithEntry:(struct os_activity_stream_entry_s *)arg1;

@end
