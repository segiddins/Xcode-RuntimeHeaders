//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class XCActivityLogSection;

@interface XCActivityLogChangeEvent : NSObject
{
    XCActivityLogSection *_changedParent;
    XCActivityLogSection *_addedChild;
}

- (id)description;
- (id)addedChild;
- (id)changedParent;
- (void)dealloc;
- (id)initWithChangedParent:(id)arg1 addedChild:(id)arg2;

@end

