//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

@interface IBICCatalogActionContext : NSObject
{
    NSSet *_focusedItems;
    long long _sourceUpdateStrategy;
}

@property(readonly) long long sourceUpdateStrategy; // @synthesize sourceUpdateStrategy=_sourceUpdateStrategy;
@property(readonly) NSSet *focusedItems; // @synthesize focusedItems=_focusedItems;
- (void).cxx_destruct;
- (id)initWithFocusedItems:(id)arg1 sourceUpdateStrategy:(long long)arg2;

@end

