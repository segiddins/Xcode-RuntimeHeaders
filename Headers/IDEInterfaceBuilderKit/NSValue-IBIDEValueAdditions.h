//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSValue.h>

#import <IDEInterfaceBuilderKit/IBDocumentArchiving-Protocol.h>

@class NSString;

@interface NSValue (IBIDEValueAdditions) <IBDocumentArchiving>
+ (id)instantiateWithDocumentUnarchiver:(id)arg1;
- (id)ib_valueByChanging:(id)arg1 forStructMemberKeyPath:(id)arg2;
- (id)ib_stringRepresentation;
- (BOOL)ib_isRange;
- (BOOL)ib_isPoint;
- (BOOL)ib_isRect;
- (BOOL)ib_isSize;
- (id)ibTransformValueBeforePushingOntoUndoStackWithDocument:(id)arg1;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (long long)documentArchivingValueType;
- (id)ibCoerceToDescriptivePListWithStrictness:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

