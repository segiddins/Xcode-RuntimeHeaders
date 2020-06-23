//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IBCocoaTouchToolFoundation/IBUISimulatedBarMetrics.h>

@class IBColor;

@interface IBUISimulatedNavigationBarMetrics : IBUISimulatedBarMetrics
{
    BOOL _translucent;
    BOOL _prompted;
    IBColor *_tintColor;
    IBColor *_barTintColor;
}

+ (id)simulatedNavigationBarMetricsWithStyle:(long long)arg1 translucent:(BOOL)arg2 prompt:(BOOL)arg3 tintColor:(id)arg4 barTintColor:(id)arg5;
+ (id)defaultMetrics;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) IBColor *barTintColor; // @synthesize barTintColor=_barTintColor;
@property(readonly, copy, nonatomic) IBColor *tintColor; // @synthesize tintColor=_tintColor;
@property(readonly, nonatomic, getter=isPrompted) BOOL prompted; // @synthesize prompted=_prompted;
@property(readonly, nonatomic, getter=isTranslucent) BOOL translucent; // @synthesize translucent=_translucent;
- (id)description;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 translucent:(BOOL)arg2 prompted:(BOOL)arg3 tintColor:(id)arg4 barTintColor:(id)arg5;

@end

