//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderKit/NSObject-Protocol.h>

@class IBDocumentArchiver, IBDocumentResourceReference, NSArray, NSError, NSString;

@protocol IBArchivableDocument <NSObject>
- (NSError *)documentArchiver:(IBDocumentArchiver *)arg1 errorForArchivingIssues:(NSArray *)arg2;
- (NSString *)documentArchiver:(IBDocumentArchiver *)arg1 issueTextForUnknownEnumeratedValue:(long long)arg2 fromEnumeration:(NSString *)arg3 forKey:(NSString *)arg4;
- (void)documentArchiver:(IBDocumentArchiver *)arg1 didArchiveObject:(id)arg2;
- (void)documentArchiver:(IBDocumentArchiver *)arg1 willArchiveObject:(id)arg2;
- (IBDocumentResourceReference *)documentArchiver:(IBDocumentArchiver *)arg1 resourceReferenceIfNeededForObject:(id)arg2 referenceType:(NSString *)arg3;
- (NSString *)documentArchiver:(IBDocumentArchiver *)arg1 namespaceForObject:(id)arg2 referenceType:(NSString *)arg3;
- (NSString *)documentArchiver:(IBDocumentArchiver *)arg1 referenceIDForObject:(id)arg2 referenceType:(NSString *)arg3 forFirstReferencingThroughKey:(NSString *)arg4;
- (void)archiveDocument:(IBDocumentArchiver *)arg1;
@end

