//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSNumber.h>

#import <IDEInterfaceBuilderKit/IBDocumentArchiving-Protocol.h>

@class NSString;

@interface NSNumber (IBMemberIDRepresentation) <IBDocumentArchiving>
+ (id)instantiateWithDocumentUnarchiver:(id)arg1;
- (id)ibMemberIDRepresentation;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (Class)classForDocumentArchiver:(id)arg1;
- (id)ibCoerceToDescriptivePListWithStrictness:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

