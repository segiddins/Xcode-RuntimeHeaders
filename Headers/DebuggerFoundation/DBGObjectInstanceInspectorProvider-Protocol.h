//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DebuggerFoundation/NSObject-Protocol.h>

@class NSString;

@protocol DBGObjectInstanceInspectorProvider <NSObject>
@property(readonly) BOOL shouldDisplayMallocZone;
@property(readonly) BOOL shouldDisplayInstanceSize;
@property(readonly) BOOL shouldDisplayKind;
@property(readonly) BOOL shouldDisplayInferiorPointer;
@property(readonly) NSString *inferiorPointer;
@property(readonly) NSString *representedObjectClassNameForDisplay;

@optional
@property(readonly) NSString *mallocZoneForDisplay;
@property(readonly) NSString *instanceSizeForDisplay;
@property(readonly) NSString *kindForDisplay;
@end

