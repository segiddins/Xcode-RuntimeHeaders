//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderKit/IBDocumentArchiving-Protocol.h>
#import <IDEInterfaceBuilderKit/NSCoding-Protocol.h>

@class NSString;

@interface IBAbstractStoryboardSegueTemplate : NSObject <IBDocumentArchiving, NSCoding>
{
    NSString *_identifier;
    NSString *_segueClassName;
    NSString *_destinationControllerIdentifier;
    NSString *_trigger;
    NSString *_destinationControllerCreationSelectorName;
}

+ (id)segueTemplateWithIdentifier:(id)arg1 trigger:(id)arg2 segueClassName:(id)arg3 destinationControllerIdentifier:(id)arg4 destinationControllerCreationSelectorName:(id)arg5;
+ (BOOL)requiresDestinationControllerIdentifier;
+ (id)codingKeyForPropertyName:(id)arg1;
+ (id)instantiateWithDocumentUnarchiver:(id)arg1;
@property(copy) NSString *destinationControllerCreationSelectorName; // @synthesize destinationControllerCreationSelectorName=_destinationControllerCreationSelectorName;
@property(copy) NSString *trigger; // @synthesize trigger=_trigger;
@property(copy) NSString *destinationControllerIdentifier; // @synthesize destinationControllerIdentifier=_destinationControllerIdentifier;
@property(copy) NSString *segueClassName; // @synthesize segueClassName=_segueClassName;
@property(copy) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(readonly, copy) NSString *debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)ibLocalAttributeKeyPaths;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

