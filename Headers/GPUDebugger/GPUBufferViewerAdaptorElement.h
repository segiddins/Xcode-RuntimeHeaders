//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GPUDebugger/GPUBufferViewerElement-Protocol.h>

@class NSString;
@protocol GPUBufferViewerDataSource;

__attribute__((visibility("hidden")))
@interface GPUBufferViewerAdaptorElement : NSObject <GPUBufferViewerElement>
{
    unsigned char _shift;
    id <GPUBufferViewerDataSource> _dataSource;
    NSString *_name;
    unsigned long long _type;
    unsigned long long _components;
    unsigned long long _rows;
    unsigned long long _bufferIndex;
    unsigned long long _bufferStride;
    NSString *_bufferLabel;
    unsigned long long _stepFunction;
    unsigned long long _stepRate;
    unsigned long long _mask;
    map_b7e40c1f _encodedResources;
    struct Buffer _dataBuffer;
    struct Struct _dataStruct;
}

+ (unsigned long long)computeElementTypeForStruct:(const struct Struct *)arg1;
+ (struct GPUBufferViewerAdaptorElementComponentsRows)computeComponentsAndRowsForTypeAlias:(int)arg1;
+ (unsigned char)computeShiftForMask:(unsigned long long)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) unsigned char shift; // @synthesize shift=_shift;
@property(nonatomic) unsigned long long mask; // @synthesize mask=_mask;
@property(nonatomic) unsigned long long stepRate; // @synthesize stepRate=_stepRate;
@property(nonatomic) unsigned long long stepFunction; // @synthesize stepFunction=_stepFunction;
@property(copy, nonatomic) NSString *bufferLabel; // @synthesize bufferLabel=_bufferLabel;
@property(nonatomic) unsigned long long bufferStride; // @synthesize bufferStride=_bufferStride;
@property(nonatomic) unsigned long long bufferIndex; // @synthesize bufferIndex=_bufferIndex;
@property(nonatomic) unsigned long long rows; // @synthesize rows=_rows;
@property(nonatomic) unsigned long long components; // @synthesize components=_components;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) __weak id <GPUBufferViewerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) map_b7e40c1f encodedResources; // @synthesize encodedResources=_encodedResources;
@property(nonatomic) struct Buffer dataBuffer; // @synthesize dataBuffer=_dataBuffer;
@property(nonatomic) struct Struct dataStruct; // @synthesize dataStruct=_dataStruct;
@property(readonly, copy) NSString *description;
- (id)initWithStruct:(const struct Struct *)arg1 buffer:(const struct Buffer *)arg2 encodedResources:(const map_b7e40c1f *)arg3 dataSource:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

