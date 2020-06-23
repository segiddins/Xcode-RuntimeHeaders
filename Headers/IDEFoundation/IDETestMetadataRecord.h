//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/NSCopying-Protocol.h>

@class NSNumber, XCTTestIdentifier;

@interface IDETestMetadataRecord : NSObject <NSCopying>
{
    XCTTestIdentifier *_identifier;
    NSNumber *_mostRecentNormalizedExecutionTime;
}

+ (id)allFields;
- (void).cxx_destruct;
@property(retain) NSNumber *mostRecentNormalizedExecutionTime; // @synthesize mostRecentNormalizedExecutionTime=_mostRecentNormalizedExecutionTime;
@property(readonly) XCTTestIdentifier *identifier; // @synthesize identifier=_identifier;
- (id)dictRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(id)arg1 dictionaryRepresentation:(id)arg2;
- (id)initWithIdentifier:(id)arg1;

@end
