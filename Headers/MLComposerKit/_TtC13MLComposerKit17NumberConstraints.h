//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSNumberFormatter.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC13MLComposerKit17NumberConstraints : NSNumberFormatter
{
    MISSING_TYPE *maxValue;
    MISSING_TYPE *minValue;
    MISSING_TYPE *isInt;
}

- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)stringForObjectValue:(id)arg1;
- (BOOL)getObjectValue:(id *)arg1 forString:(id)arg2 errorDescription:(id *)arg3;
- (BOOL)isPartialStringValid:(id)arg1 newEditingString:(id *)arg2 errorDescription:(id *)arg3;

@end
