//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/NSObject-Protocol.h>

@class IBXMLCoder, NSString;
@protocol IBCollection;

@protocol IBXMLCoderDelegate <NSObject>
- (NSString *)xmlCoder:(IBXMLCoder *)arg1 classNameForClass:(Class)arg2;
- (BOOL)xmlCoder:(IBXMLCoder *)arg1 object:(id)arg2 shouldEncodeObject:(id *)arg3 forKey:(NSString *)arg4 conditional:(BOOL)arg5;
- (long long (^)(id, id))xmlCoder:(IBXMLCoder *)arg1 comparatorForCollection:(id <IBCollection>)arg2;
@end
