//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSData.h>

#import <IDEInterfaceBuilderKit/IBDocumentArchiving-Protocol.h>

@class NSString;

@interface NSData (IBIDEDataAdditions) <IBDocumentArchiving>
+ (id)instantiateWithDocumentUnarchiver:(id)arg1;
- (BOOL)ib_isBZip2Compressed;
- (id)ib_bzip2DecompressedData;
- (id)ib_bzip2CompressedData;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (id)ibCoerceToDescriptivePListWithStrictness:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

