//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DTGraphKit/DTMemoryGraphItem.h>

@interface DTMemoryGraphInstanceItem : DTMemoryGraphItem
{
    unsigned int _nodeName;
}

- (id)parentItem;
- (BOOL)isRoot;
- (BOOL)isGroup;
- (unsigned long long)leakedCount;
- (unsigned long long)count;
- (id)name;
- (CDStruct_599faf0f)nodeDetails;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)identifier;
- (long long)itemKind;
- (id)initWithNode:(unsigned int)arg1 graphIndex:(id)arg2;

@end

