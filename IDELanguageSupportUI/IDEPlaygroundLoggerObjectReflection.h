//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDELanguageSupportUI/IDEPlaygroundLoggerLogEntry-Protocol.h>

@class NSAttributedString, NSData, NSString;
@protocol IDEPlaygroundLoggerObjectReflectionDecoder;

@interface IDEPlaygroundLoggerObjectReflection : NSObject <IDEPlaygroundLoggerLogEntry>
{
    NSString *_name;
    BOOL _hasDecodedObject;
    id _decodedObject;
    BOOL _summaryIsPreferredSidebarRepresentation;
    NSString *_typeName;
    NSString *_summary;
    NSString *_tag;
    NSData *_data;
    id <IDEPlaygroundLoggerObjectReflectionDecoder> _decoder;
}

+ (id)objectReflectionForTag:(id)arg1 typeName:(id)arg2 summaryIsPreferredSidebarRepresentation:(BOOL)arg3 summary:(id)arg4 usingName:(id)arg5 andData:(id)arg6;
@property(readonly) id <IDEPlaygroundLoggerObjectReflectionDecoder> decoder; // @synthesize decoder=_decoder;
@property(readonly, copy) NSData *data; // @synthesize data=_data;
@property(readonly, copy) NSString *tag; // @synthesize tag=_tag;
@property(readonly, copy) NSString *summary; // @synthesize summary=_summary;
@property(readonly) BOOL summaryIsPreferredSidebarRepresentation; // @synthesize summaryIsPreferredSidebarRepresentation=_summaryIsPreferredSidebarRepresentation;
@property(readonly, copy) NSString *typeName; // @synthesize typeName=_typeName;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
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

