//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderCocoaIntegration/NSCoding-Protocol.h>

@class NSTabViewItem;

@interface IBNSTabViewControllerInspectorTabViewItem : NSObject <NSCoding>
{
    NSTabViewItem *_tabViewItem;
}

- (void).cxx_destruct;
@property(readonly) NSTabViewItem *tabViewItem; // @synthesize tabViewItem=_tabViewItem;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setLabel:(id)arg1;
- (id)label;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithTabViewItem:(id)arg1;

@end

