//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GPUDebugger/DYPFilterItem-Protocol.h>

@class NSArray, NSString;

@interface GPUTraceFilterItem : NSObject <DYPFilterItem>
{
    NSString *_combinedFilterStrings;
    int _type;
    int _source;
    NSArray *_filterStrings;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) int source; // @synthesize source=_source;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)localizedCaseInsensitiveContainsFilterString:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSArray *filterStrings; // @synthesize filterStrings=_filterStrings;
- (id)initWithFilterText:(id)arg1 andType:(int)arg2 andSource:(int)arg3;
- (id)initWithFilterText:(id)arg1 andType:(int)arg2;
- (id)initWithCombinedFilterStrings:(id)arg1 andType:(int)arg2 andSource:(int)arg3;
- (id)initWithFilterStrings:(id)arg1 andType:(int)arg2 andSource:(int)arg3;
- (id)initWithFilterStrings:(id)arg1 andType:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

