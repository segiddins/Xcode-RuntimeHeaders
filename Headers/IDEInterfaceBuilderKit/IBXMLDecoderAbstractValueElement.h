//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBXMLDecoderElement.h>

@class NSData, NSString;

@interface IBXMLDecoderAbstractValueElement : IBXMLDecoderElement
{
    NSData *_value;
    NSString *_key;
}

- (void).cxx_destruct;
@property(readonly) NSString *key; // @synthesize key=_key;
- (id)interpretedBytesValue;
@property(readonly) double interpretedDoubleValue;
@property(readonly) float interpretedFloatValue;
@property(readonly) long long interpretedLongLongValue;
@property(readonly) BOOL interpretedBoolValue;
- (BOOL)requestInsertionIntoParent:(id)arg1 error:(id *)arg2;
- (id)initWithAttributes:(const char **)arg1 stringTable:(id)arg2 error:(id *)arg3;

@end

