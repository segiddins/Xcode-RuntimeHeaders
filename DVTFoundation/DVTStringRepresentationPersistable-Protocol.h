//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DVTFoundation/NSObject-Protocol.h>

@class NSString;

@protocol DVTStringRepresentationPersistable <NSObject>
- (NSString *)dvt_persistableStringRepresentation;
- (id)dvt_initFromPersistableStringRepresentation:(NSString *)arg1 error:(id *)arg2;
@end

