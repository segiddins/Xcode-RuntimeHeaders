//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBAbstractPlatformToolProxy.h>

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBCocoaTouchImageCatalogTool-Protocol.h>

@class NSString;

@interface IBCocoaTouchImageCatalogToolProxy : IBAbstractPlatformToolProxy <IBCocoaTouchImageCatalogTool>
{
}

- (void)registerSchemaProviders:(id)arg1 withSchemaProviderContextData:(id)arg2;
- (id)compileItemsWithCatalogRelativeIdentifierPaths:(id)arg1 tagSolutionSpace:(id)arg2 options:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
