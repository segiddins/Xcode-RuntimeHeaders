//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GPUDebugger/NSCopying-Protocol.h>
#import <GPUDebugger/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol DYPFilterItem <NSObject, NSCopying>
@property(readonly, nonatomic) int source;
@property(readonly, nonatomic) int type;
@property(readonly, nonatomic) NSArray *filterStrings;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)localizedCaseInsensitiveContainsFilterString:(NSString *)arg1;
- (id)initWithFilterStrings:(NSArray *)arg1 andType:(int)arg2 andSource:(int)arg3;
- (id)initWithFilterStrings:(NSArray *)arg1 andType:(int)arg2;
@end

