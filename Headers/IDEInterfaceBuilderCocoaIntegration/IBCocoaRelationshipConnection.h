//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaIntegration/IBCocoaOutletConnection.h>

@class NSString;

@interface IBCocoaRelationshipConnection : IBCocoaOutletConnection
{
    NSString *_creationSelectorName;
}

+ (BOOL)isObjectValidOutletDestination:(id)arg1;
+ (BOOL)isObjectValidOutletSource:(id)arg1;
+ (id)connectionWithSource:(id)arg1 label:(id)arg2 destination:(id)arg3 creationSelectorName:(id)arg4;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *creationSelectorName; // @synthesize creationSelectorName=_creationSelectorName;
- (id)description;
- (id)archiveConnection;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForCoder;

@end

