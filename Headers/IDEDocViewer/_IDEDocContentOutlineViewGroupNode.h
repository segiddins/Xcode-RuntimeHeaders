//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DSANode, NSArray;

@interface _IDEDocContentOutlineViewGroupNode : NSObject
{
    DSANode *_representedNode;
    NSArray *_descendants;
}

@property(copy) NSArray *descendants; // @synthesize descendants=_descendants;
@property(retain) DSANode *representedNode; // @synthesize representedNode=_representedNode;
- (void).cxx_destruct;
- (id)initWithNode:(id)arg1;

@end
