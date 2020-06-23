//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/DVTServicesJSONSerialization-Protocol.h>

@class NSArray, NSString;

@interface IDEProductVersionBinaryInfos : NSObject <DVTServicesJSONSerialization>
{
    NSArray *_generationsOfBinaryUUIDs;
}

+ (id)objectFromJSONRepresentation:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
@property(readonly) NSArray *generationsOfBinaryUUIDs; // @synthesize generationsOfBinaryUUIDs=_generationsOfBinaryUUIDs;
- (id)JSONRepresentation;
- (id)UUIDs;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithSoftwareGenerationDescriptions:(id)arg1;
- (id)initWithGenerationsSlices:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
