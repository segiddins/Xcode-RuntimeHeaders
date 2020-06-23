//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEPlaygroundsKit/IDEPlaygroundLoggerLogEntry-Protocol.h>

@class NSAttributedString, NSData, NSString;
@protocol IDEPlaygroundLoggerObjectReflectionDecoder;

@interface IDEPlaygroundLoggerObjectReflection : NSObject <IDEPlaygroundLoggerLogEntry>
{
    NSString *_name;
    BOOL _hasAttemptedObjectDecoding;
    id _decodedObject;
    BOOL _summaryIsPreferredSidebarRepresentation;
    NSString *_typeName;
    NSString *_typeNameForDisplay;
    NSString *_summary;
    NSString *_tag;
    NSData *_data;
    id <IDEPlaygroundLoggerObjectReflectionDecoder> _decoder;
}

+ (id)objectReflectionForTag:(id)arg1 typeName:(id)arg2 summaryIsPreferredSidebarRepresentation:(BOOL)arg3 summary:(id)arg4 usingName:(id)arg5 andData:(id)arg6;
- (void).cxx_destruct;
@property(readonly) id <IDEPlaygroundLoggerObjectReflectionDecoder> decoder; // @synthesize decoder=_decoder;
@property(readonly, copy) NSData *data; // @synthesize data=_data;
@property(readonly, copy) NSString *tag; // @synthesize tag=_tag;
@property(readonly, copy) NSString *summary; // @synthesize summary=_summary;
@property(readonly) BOOL summaryIsPreferredSidebarRepresentation; // @synthesize summaryIsPreferredSidebarRepresentation=_summaryIsPreferredSidebarRepresentation;
@property(readonly, copy) NSString *typeNameForDisplay; // @synthesize typeNameForDisplay=_typeNameForDisplay;
@property(readonly, copy) NSString *typeName; // @synthesize typeName=_typeName;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSAttributedString *attributedSummary;
@property(readonly) id decodedObject;
- (id)_initWithName:(id)arg1 tag:(id)arg2 typeName:(id)arg3 summaryIsPreferredSidebarRepresentation:(BOOL)arg4 summary:(id)arg5 data:(id)arg6 decoder:(id)arg7;
- (id)initWithName:(id)arg1 tag:(id)arg2 typeName:(id)arg3 summaryIsPreferredSidebarRepresentation:(BOOL)arg4 summary:(id)arg5 data:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

