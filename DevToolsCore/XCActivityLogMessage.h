//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <DevToolsCore/NSCopying-Protocol.h>

@class NSMutableArray, NSString, XCActivityLogSection;

@interface XCActivityLogMessage : NSObject <NSCopying>
{
    unsigned long long _uniqueNumber;
    NSString *_title;
    double _timeEmitted;
    XCActivityLogSection *_supersection;
    struct _NSRange _rangeInSectionText;
    XCActivityLogMessage *_supermessage;
    NSMutableArray *_submessages;
}

+ (unsigned long long)getNextUniqueLogMessageNumber;
- (void)writeToSerializer:(id)arg1;
- (id)initFromDeserializer:(id)arg1;
- (void)logRecorder:(id)arg1 addSectionTextRange:(struct _NSRange)arg2;
- (void)logRecorder:(id)arg1 setSectionTextRange:(struct _NSRange)arg2;
- (void)logRecorder:(id)arg1 addSubmessage:(id)arg2;
- (void)addSubmessage:(id)arg1;
- (id)submessages;
- (void)_setSupermessage:(id)arg1;
- (id)supermessage;
- (void)setSectionTextRange:(struct _NSRange)arg1;
- (struct _NSRange)rangeInSectionText;
- (void)_setSupersection:(id)arg1;
- (id)supersection;
- (id)description;
- (double)timeEmitted;
- (id)title;
- (unsigned long long)uniqueNumber;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithTitle:(id)arg1;

@end

