//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DYGLVertexAttribute : NSObject
{
    unsigned char _normalized;
    unsigned char _integer;
    int _attributeType;
    unsigned int _index;
    int _size;
    unsigned int _dataType;
    unsigned int _divisor;
    int _stride;
    unsigned int _arrayBuffer;
    unsigned long long _pointer;
    NSString *_clientDataURL;
    long long _clientDataOffset;
}

@property(readonly, nonatomic) long long clientDataOffset; // @synthesize clientDataOffset=_clientDataOffset;
@property(readonly, retain, nonatomic) NSString *clientDataURL; // @synthesize clientDataURL=_clientDataURL;
@property(readonly, nonatomic) unsigned long long pointer; // @synthesize pointer=_pointer;
@property(readonly, nonatomic) unsigned int arrayBuffer; // @synthesize arrayBuffer=_arrayBuffer;
@property(readonly, nonatomic) int stride; // @synthesize stride=_stride;
@property(readonly, nonatomic) unsigned int divisor; // @synthesize divisor=_divisor;
@property(readonly, nonatomic, getter=isInteger) unsigned char integer; // @synthesize integer=_integer;
@property(readonly, nonatomic, getter=isNormalized) unsigned char normalized; // @synthesize normalized=_normalized;
@property(readonly, nonatomic) unsigned int dataType; // @synthesize dataType=_dataType;
@property(readonly, nonatomic) int size; // @synthesize size=_size;
@property(readonly, nonatomic) unsigned int index; // @synthesize index=_index;
@property(readonly, nonatomic) int attributeType; // @synthesize attributeType=_attributeType;
- (void).cxx_destruct;
- (id)description;
- (id)initWithProperties:(id)arg1;
- (id)init;

@end

