//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IBDocument, NSArray;

@interface IBPredecessorRepresentation : NSObject
{
    NSArray *displayValues;
    IBDocument *document;
    id endPoint;
}

@property(readonly) IBDocument *document; // @synthesize document;
@property(readonly) id endPoint; // @synthesize endPoint;
@property(readonly, copy) NSArray *displayValues; // @synthesize displayValues;
- (void).cxx_destruct;
- (void)disconnect;
- (BOOL)canDisconnect;
- (id)initWithEndPoint:(id)arg1 displayValues:(id)arg2 document:(id)arg3;

@end

