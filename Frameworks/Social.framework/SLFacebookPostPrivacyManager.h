/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class ACAccount, NSArray, SLFacebookPostPrivacySetting;

@interface SLFacebookPostPrivacyManager : NSObject
{
    ACAccount *_account;
    NSArray *_privacySettings;
}

+ (id)baseAudienceButtonImageNameForPrivacySettingType:(int)arg1;
- (void).cxx_destruct;
- (void)updatePrivacySettingsWithCompletionHandler:(id)arg1;
- (void)_handlePrivacySettingsUpdateResponseWithData:(id)arg1 urlResponse:(id)arg2 error:(id)arg3 handler:(id)arg4;
- (id)_privacySettingsFromPrivacyOptionDictionaries:(id)arg1;
- (id)defaultPrivacySetting;
@property(retain) SLFacebookPostPrivacySetting *privacySetting; // @dynamic privacySetting;
- (id)_userDefaultsDict;
- (void)_setPrivacySettings:(id)arg1;
- (id)privacySettings;
- (id)initWithAccount:(id)arg1;

@end

