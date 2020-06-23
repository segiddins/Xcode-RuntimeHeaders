//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBXMLDecoderAbstractValueElement.h>

@class NSDictionary, NSMutableArray, NSString;

@interface IBXMLDecoderAbstractObjectElement : IBXMLDecoderAbstractValueElement
{
    id decodedObject;
    NSDictionary *_keyedAbstractValueElements;
    NSString *_identifier;
    id _inlineAbstractValueElements[16];
    long long _inlineAbstractValueElementsCount;
    NSMutableArray *_mutableAbstractValueElements;
    BOOL _finishedAddingSubelements;
    NSString *_className;
}

- (void).cxx_destruct;
@property(readonly) NSString *className; // @synthesize className=_className;
@property(readonly) NSString *identifier;
- (id)resolvedAbstractObjectElement;
- (void)enumerateElements:(CDUnknownBlockType)arg1;
- (void)enumerateAbstractValueElements:(CDUnknownBlockType)arg1;
- (id)keyedAbstractValueElements;
- (void)finishedAddingSubelements;
- (long long)numberOfElements;
- (BOOL)hasInlineValues;
- (BOOL)acceptAbstractValueElement:(id)arg1 error:(id *)arg2;
- (id)initWithAttributes:(const char **)arg1 stringTable:(id)arg2 error:(id *)arg3;
- (id)decodedObject;
- (void)setDecodedObject:(id)arg1;

@end

