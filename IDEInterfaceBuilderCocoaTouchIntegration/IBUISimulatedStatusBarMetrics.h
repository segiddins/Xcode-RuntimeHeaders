//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUISimulatedBarMetrics.h>

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBDocumentArchiving-Protocol.h>
#import <IDEInterfaceBuilderCocoaTouchIntegration/NSCoding-Protocol.h>

@class NSString;

@interface IBUISimulatedStatusBarMetrics : IBUISimulatedBarMetrics <NSCoding, IBDocumentArchiving>
{
    int _statusBarStyle;
}

+ (double)statusBarHeight;
+ (id)simulatedStatusBarMetricsForStatusBarStyle:(int)arg1;
+ (id)simulatedBarMetricsForBarView:(id)arg1;
+ (id)simulatedStatusBarMetricsForStatusBar:(id)arg1;
@property(readonly, nonatomic) int statusBarStyle; // @synthesize statusBarStyle=_statusBarStyle;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)displayName;
- (BOOL)isEqual:(id)arg1;
- (double)heightForTargetRuntime:(id)arg1;
- (void)applyMetricsToBar:(id)arg1;
- (unsigned long long)barEdge;
- (BOOL)isTranslucentForTargetRuntime:(id)arg1;
- (id)ibWidgetType;
- (Class)barClass;
- (id)initWithStatusBarStyle:(int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

