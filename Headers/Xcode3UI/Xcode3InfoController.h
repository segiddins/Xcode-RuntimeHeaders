//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;
@protocol IDEBlueprint;

@interface Xcode3InfoController : NSObject
{
    id <IDEBlueprint> _blueprint;
}

@property(readonly) id <IDEBlueprint> blueprint; // @synthesize blueprint=_blueprint;
- (void).cxx_destruct;
- (id)initWithBlueprint:(id)arg1;

// Remaining properties
@property(copy) NSDictionary *infoDictionary; // @dynamic infoDictionary;
@property(readonly) NSArray *slices; // @dynamic slices;

@end

