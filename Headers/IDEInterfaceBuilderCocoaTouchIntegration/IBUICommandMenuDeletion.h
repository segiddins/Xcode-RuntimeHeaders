//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUICommandChange.h>

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBDocumentArchiving-Protocol.h>
#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIMenuChildDeletion-Protocol.h>

@class NSString;

@interface IBUICommandMenuDeletion : IBUICommandChange <IBDocumentArchiving, IBUIMenuChildDeletion>
{
    BOOL _active;
    NSString *_title;
}

+ (void)registerMarshallingRecordHandlers;
+ (id)instantiateWithDocumentUnarchiver:(id)arg1;
@property(nonatomic, getter=isActive) BOOL active; // @synthesize active=_active;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)unarchiveAnchor:(id)arg1;
- (void)archiveAnchor:(id)arg1;
- (id)ibLocalAttributeKeyPaths;
- (Class)classToTakeInitialMarshalledKeysFrom:(id)arg1;
- (id)runtimeClassNameForContext:(id)arg1 returningOptionalFallbackClassName:(id *)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTargetRuntime:(id)arg1;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

