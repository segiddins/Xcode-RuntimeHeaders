//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ModelIO/MDLComponent-Protocol.h>
#import <ModelIO/NSFastEnumeration-Protocol.h>

@class MDLObject, NSArray;

@protocol MDLObjectContainerComponent <MDLComponent, NSFastEnumeration>
@property(readonly, retain, nonatomic) NSArray *objects;
- (void)removeObject:(MDLObject *)arg1;
- (void)addObject:(MDLObject *)arg1;
@end

