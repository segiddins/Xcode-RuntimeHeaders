//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEPlaygroundsFoundation/NSObject-Protocol.h>

@class IDEPIFGUID;
@protocol IDEPIFSerializer;

@protocol IDEPIFGenerating <NSObject>
- (id)pifRepresentation:(id <IDEPIFSerializer>)arg1;
@property(nonatomic, readonly) IDEPIFGUID *PIFGUID;
@end
