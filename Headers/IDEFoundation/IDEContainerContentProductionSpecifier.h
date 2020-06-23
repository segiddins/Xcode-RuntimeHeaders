//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/NSCopying-Protocol.h>

@class IDEContainer, NSSet;
@protocol IDEContainerContentProducer;

@interface IDEContainerContentProductionSpecifier : NSObject <NSCopying>
{
    IDEContainer *_container;
    NSSet *_types;
    id <IDEContainerContentProducer> _producer;
}

- (void).cxx_destruct;
@property(readonly) id <IDEContainerContentProducer> producer; // @synthesize producer=_producer;
@property(readonly) NSSet *types; // @synthesize types=_types;
@property(readonly) IDEContainer *container; // @synthesize container=_container;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToContentProductionSpecifier:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithContainer:(id)arg1 types:(id)arg2 producer:(id)arg3;

@end
