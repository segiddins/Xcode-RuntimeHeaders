//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIViewCachedGeometryInfo.h>

@protocol IBUIViewCachedItemFramesDictionaryInfoDelegate;

@interface IBUIViewCachedItemFramesDictionaryInfo : IBUIViewCachedGeometryInfo
{
    id <IBUIViewCachedItemFramesDictionaryInfoDelegate> _delegate;
}

@property __weak id <IBUIViewCachedItemFramesDictionaryInfoDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)cachedValueFromRequestedValue:(id)arg1;
- (id)marshaller;
- (id)initWithCachedKeyPath:(id)arg1 requestedKeyPath:(id)arg2 andDelegate:(id)arg3;

@end

