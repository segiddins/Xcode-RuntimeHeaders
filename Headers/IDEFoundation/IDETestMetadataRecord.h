//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
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
@property(retain) NSNumber *mostRecentNormalizedExecutionTime; // @synthesize mostRecentNormalizedExecutionTime=_mostRecentNormalizedExecutionTime;
@property(readonly) XCTTestIdentifier *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)dictRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(id)arg1 dictionaryRepresentation:(id)arg2;
- (id)initWithIdentifier:(id)arg1;

@end

