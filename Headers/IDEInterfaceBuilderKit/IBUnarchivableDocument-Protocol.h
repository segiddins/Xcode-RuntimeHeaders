//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderKit/NSObject-Protocol.h>

@class IBDocumentResourceReference, IBDocumentUnarchiver, NSSet, NSString;

@protocol IBUnarchivableDocument <NSObject>
- (Class)documentUnarchiver:(IBDocumentUnarchiver *)arg1 classForUnknownElementNamed:(NSString *)arg2;
- (NSSet *)documentUnarchiverAllowedReferenceTypes:(IBDocumentUnarchiver *)arg1;
- (BOOL)documentUnarchiverIsUnarchivingStackBasedTreeNode:(IBDocumentUnarchiver *)arg1;
- (void)documentUnarchiver:(IBDocumentUnarchiver *)arg1 didUnarchiveObject:(id)arg2;
- (void)documentUnarchiver:(IBDocumentUnarchiver *)arg1 willUnarchiveObject:(id)arg2;
- (id)documentUnarchiver:(IBDocumentUnarchiver *)arg1 objectForResourceReference:(IBDocumentResourceReference *)arg2 referenceType:(NSString *)arg3;
- (id)documentUnarchiver:(IBDocumentUnarchiver *)arg1 objectForReferenceID:(NSString *)arg2 namespaceID:(NSString *)arg3 referenceType:(NSString *)arg4;
- (BOOL)unarchiveDocumentWithUnarchiver:(IBDocumentUnarchiver *)arg1 error:(id *)arg2;
@end

