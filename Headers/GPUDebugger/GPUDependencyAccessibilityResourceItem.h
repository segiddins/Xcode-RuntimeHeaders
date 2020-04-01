//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GPUDebugger/NSAccessibilityButton-Protocol.h>

@class GPUDependencyAccessibilityItem, NSString;

__attribute__((visibility("hidden")))
@interface GPUDependencyAccessibilityResourceItem : NSObject <NSAccessibilityButton>
{
    GPUDependencyAccessibilityItem *_parent;
    unsigned long long _slot;
}

- (void).cxx_destruct;
- (BOOL)isAccessibilitySelected;
- (BOOL)accessibilityPerformPress;
- (long long)attachmentIndex;
- (id)accessibilityLabel;
- (id)accessibilityParent;
- (struct CGRect)accessibilityFrame;
- (id)accessibilityTitle;
- (id)resource;
- (id)initWithParent:(id)arg1 slot:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

