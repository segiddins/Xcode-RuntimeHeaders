//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DebugHierarchyKit/DBGSnapshotProperty.h>

#import <DebuggerUI/DBGExtendedColorPropertyValue-Protocol.h>

@class NSArray, NSString;

@interface DBGSnapshotProperty (InspectorDisplayAdditions) <DBGExtendedColorPropertyValue>
@property(readonly) NSString *displayValue;
- (BOOL)_hasDisplayableName;
@property(readonly) NSString *displayName;
- (id)_subpropertiesSortedForDisplay:(id)arg1;
- (id)_subpropertiesFilteredByTheirStrategies:(id)arg1;
- (id)_subpropertiesByApplyingStrategiesToSubproperty:(id)arg1;
- (id)_subpropertiesByApplyingStrategies;
- (void)_setupDepth:(long long)arg1;
- (void)setDepth:(long long)arg1;
@property(readonly) long long depth;
- (id)_inspectorStrategies;
@property(readonly) NSArray *displaySubproperties;
- (id)dbg_catalogName;
- (id)dbg_colorName;
- (id)dbg_color;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

