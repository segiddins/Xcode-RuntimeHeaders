//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

@interface DTOrderedDictionaryKeyEnumerator : NSEnumerator
{
    NSEnumerator *setEnumerator;
}

- (id)nextObject;
- (void)dealloc;
- (id)initWithSetEnumerator:(id)arg1;

@end

