//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBBinaryArchiving-Protocol.h>
#import <IDEInterfaceBuilderCocoaTouchIntegration/IBDocumentArchiving-Protocol.h>
#import <IDEInterfaceBuilderCocoaTouchIntegration/NSCoding-Protocol.h>
#import <IDEInterfaceBuilderCocoaTouchIntegration/NSCopying-Protocol.h>

@class NSString;

@interface IBUITextInputPasswordRules : NSObject <IBDocumentArchiving, IBBinaryArchiving, NSCoding, NSCopying>
{
    NSString *_passwordRulesDescriptor;
}

+ (id)passwordRulesWithDescriptor:(id)arg1;
+ (id)instantiateWithDocumentUnarchiver:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *passwordRulesDescriptor; // @synthesize passwordRulesDescriptor=_passwordRulesDescriptor;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPasswordRulesDescriptor:(id)arg1;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

