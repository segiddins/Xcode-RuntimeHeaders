//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DeltaFoundation/NSObject-Protocol.h>

@class DEContext, NSArray;

@protocol DEContextDelegate <NSObject>

@optional
- (void)diffContextDidUpdateDescriptorsSynchronously:(DEContext *)arg1 diffDescriptors:(NSArray *)arg2;
- (void)diffContextDidUpdateDescriptors:(DEContext *)arg1;
@end
