//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSURL.h>

#import <DVTFoundation/DVTSimpleSerialization-Protocol.h>

@interface NSURL (DVTNSURLAdditions) <DVTSimpleSerialization>
+ (id)dvt_URLWithScheme:(id)arg1 path:(id)arg2 documentParameters:(id)arg3 locationParameters:(id)arg4;
+ (id)dvt_fileURLWithAbsoluteOrRelativePath:(id)arg1;
- (id)dvt_locationParameters;
- (id)dvt_documentParameters;
- (id)dvt_sanitizedFilePath;
@end

