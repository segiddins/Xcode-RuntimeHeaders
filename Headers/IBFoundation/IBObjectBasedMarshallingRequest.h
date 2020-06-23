//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IBFoundation/IBBinaryArchiving-Protocol.h>
#import <IBFoundation/IBObjectRepresentationTranslator-Protocol.h>

@class IBMarshallableObjectPackage, NSString;

@interface IBObjectBasedMarshallingRequest : NSObject <IBBinaryArchiving, IBObjectRepresentationTranslator>
{
    NSString *_identifier;
    IBMarshallableObjectPackage *_objectPackage;
}

+ (id)requestWithMarshallableObjectPackage:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) IBMarshallableObjectPackage *objectPackage; // @synthesize objectPackage=_objectPackage;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)objectForObjectRepresentation:(id)arg1;
- (id)objectRepresentationForObject:(id)arg1;
- (void)didFinishEncodingWithBinaryArchiver:(id)arg1;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (void)didFinishDecodingWithBinaryUnarchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithIdentifier:(id)arg1 marshallableObjectPackage:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

