//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface DTDivisionInfo : NSObject
{
    double _position;
    NSString *_label;
    NSNumber *_originalValue;
}

+ (id)infoWithPosition:(double)arg1 label:(id)arg2;
@property(copy) NSNumber *originalValue; // @synthesize originalValue=_originalValue;
@property(readonly) NSString *label; // @synthesize label=_label;
@property(readonly) double position; // @synthesize position=_position;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithPosition:(double)arg1 label:(id)arg2;

@end

