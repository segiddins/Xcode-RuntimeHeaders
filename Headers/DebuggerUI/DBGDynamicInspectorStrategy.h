//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DebuggerUI/DBGDynamicStrategy-Protocol.h>

@class NSString;

@interface DBGDynamicInspectorStrategy : NSObject <DBGDynamicStrategy>
{
    NSString *_parameter;
}

@property(copy, nonatomic) NSString *parameter; // @synthesize parameter=_parameter;
- (void).cxx_destruct;
- (id)initWithParameter:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

