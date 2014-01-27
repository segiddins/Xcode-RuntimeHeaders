/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEModelFoundation/XDUMLNamespaceImp.h>

#import "XDUMLPackage-Protocol.h"

@class XDModel;

@interface XDUMLPackageImp : XDUMLNamespaceImp <XDUMLPackage>
{
    XDModel *_model;
}

- (void).cxx_destruct;
- (id)description;
- (void)setModel:(id)arg1;
- (id)model;
- (id)packageForName:(id)arg1;
- (void)removePackage:(id)arg1;
- (void)addPackage:(id)arg1 toQualifierPath:(id)arg2;
- (id)dataTypeForName:(id)arg1;
- (void)addDataType:(id)arg1 toQualifierPath:(id)arg2;
- (id)allInterfaces;
- (id)interfaceForName:(id)arg1;
- (void)removeInterface:(id)arg1;
- (void)addInterface:(id)arg1 toQualifierPath:(id)arg2;
- (id)allClasses;
- (id)classForName:(id)arg1;
- (void)removeClass:(id)arg1;
- (void)addClass:(id)arg1 toQualifierPath:(id)arg2;
- (void)addElement:(id)arg1 toQualifierPath:(id)arg2 withBucketNamed:(id)arg3;
- (id)packageAtQualifierPath:(id)arg1 forceCreation:(BOOL)arg2;
- (BOOL)lazyCreateBucketNamed:(id)arg1;
- (void)addType:(id)arg1;
- (id)nestingPackage;
- (id)nestedPackages;
- (id)ownedTypes;
- (id)ownedMembers;
- (void)deleteElementsBucketWithName:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithModel:(id)arg1;

@end
