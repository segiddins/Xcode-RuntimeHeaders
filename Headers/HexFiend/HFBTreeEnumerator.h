//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

@class HFBTreeLeaf;

@interface HFBTreeEnumerator : NSEnumerator
{
    HFBTreeLeaf *currentLeaf;
    unsigned int childIndex;
}

- (id)nextObject;
- (id)initWithLeaf:(id)arg1;

@end

