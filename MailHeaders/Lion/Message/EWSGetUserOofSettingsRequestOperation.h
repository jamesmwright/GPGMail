/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import <Message/EWSRequestOperation.h>

@class EWSEmailAddress;

@interface EWSGetUserOofSettingsRequestOperation : EWSRequestOperation
{
    EWSEmailAddress *_emailAddress;
}

+ (Class)classForResponse;
- (id)initWithEmailAddress:(id)arg1 gateway:(id)arg2 errorHandler:(id)arg3;
- (id)initWithGateway:(id)arg1 errorHandler:(id)arg2;
- (void)dealloc;
- (id)prepareRequest;
@property(retain, nonatomic) EWSEmailAddress *emailAddress; // @synthesize emailAddress=_emailAddress;

@end

