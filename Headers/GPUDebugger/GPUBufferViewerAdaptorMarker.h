//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GPUDebugger/GPUBufferViewerMarker-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GPUBufferViewerAdaptorMarker : NSObject <GPUBufferViewerMarker>
{
    NSString *_label;
    unsigned long long _rangeType;
    struct _NSRange _range;
}

@property(nonatomic) unsigned long long rangeType; // @synthesize rangeType=_rangeType;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (id)initWithLabel:(id)arg1 range:(struct _NSRange)arg2 rangeType:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

