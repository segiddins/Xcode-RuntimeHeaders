//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTLayerImageExporter;
@protocol OS_dispatch_queue;

@interface DBGExporterAndQueue : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    DVTLayerImageExporter *_exporter;
}

- (void).cxx_destruct;
@property(retain) DVTLayerImageExporter *exporter; // @synthesize exporter=_exporter;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;

@end

