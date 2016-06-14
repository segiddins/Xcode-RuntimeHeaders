//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableString, NSString, XCActivityLogSectionRecorder;

@interface XCActivityLogSection : NSObject
{
    unsigned long long _uniqueNumber;
    NSString *_title;
    double _timeOpened;
    double _timeClosed;
    NSMutableArray *_subsections;
    NSMutableString *_text;
    NSMutableArray *_messages;
    BOOL _wasCancelled;
    XCActivityLogSectionRecorder *_recorder;
}

+ (id)sectionByDeserializingData:(id)arg1 error:(id *)arg2;
+ (void)configureDeserializer:(id)arg1;
+ (unsigned long long)serializationFormatVersion;
+ (Class)logRecorderClass;
+ (unsigned long long)getNextUniqueLogSectionNumber;
- (id)serializedData;
- (void)configureSerializer:(id)arg1;
- (void)writeToSerializer:(id)arg1;
- (id)initFromDeserializer:(id)arg1;
- (id)description;
- (void)logRecorder:(id)arg1 didStopRecordingWithInfo:(id)arg2;
- (id)recorder;
- (BOOL)isOpen;
- (void)logRecorder:(id)arg1 setWasCancelled:(BOOL)arg2;
- (BOOL)wasCancelled;
- (void)logRecorder:(id)arg1 addMessage:(id)arg2;
- (id)messages;
- (void)logRecorder:(id)arg1 appendText:(id)arg2;
- (id)text;
- (void)logRecorder:(id)arg1 addSubsection:(id)arg2;
- (id)subsections;
- (double)timeClosed;
- (double)timeOpened;
- (id)title;
- (unsigned long long)uniqueNumber;
- (void)finalize;
- (void)dealloc;
- (id)init;
- (id)initWithTitle:(id)arg1;

@end

