//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CALayer;

@interface _DVTMark : NSObject
{
    double _location;
    long long _lineNumber;
    unsigned long long _type;
    CALayer *_layer;
}

@property __weak CALayer *layer; // @synthesize layer=_layer;
@property(readonly) unsigned long long type; // @synthesize type=_type;
@property(readonly) long long lineNumber; // @synthesize lineNumber=_lineNumber;
@property(readonly) double location; // @synthesize location=_location;
- (void).cxx_destruct;
- (id)description;
- (long long)_compareToLocationThenTypeOf:(id)arg1;
- (long long)_compareToTypeOf:(id)arg1;
- (id)_initWith:(double)arg1 lineNumber:(long long)arg2 type:(unsigned long long)arg3;

@end

