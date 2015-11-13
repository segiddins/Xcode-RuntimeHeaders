//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBAbstractStoryboardSegueTemplate.h>

#import <IDEInterfaceBuilderCocoaIntegration/IBDocumentArchiving-Protocol.h>
#import <IDEInterfaceBuilderCocoaIntegration/NSCoding-Protocol.h>

@class NSStoryboard, NSString;

@interface IBNSStoryboardSegueTemplate : IBAbstractStoryboardSegueTemplate <IBDocumentArchiving, NSCoding>
{
    NSStoryboard *_storyboard;
    BOOL _encodeAsRuntimeInstance;
}

+ (id)codingKeyForPropertyName:(id)arg1;
@property(retain) NSStoryboard *storyboard; // @synthesize storyboard=_storyboard;
- (void).cxx_destruct;
- (id)ibRuntimeClassName;
- (Class)classForDocumentArchiver:(id)arg1;
- (void)ibPrepareCocoaDocumentForCompiling:(id)arg1 withContext:(id)arg2;
- (BOOL)ibRequiresOutletToStoryboard;
- (Class)classForCoder;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

