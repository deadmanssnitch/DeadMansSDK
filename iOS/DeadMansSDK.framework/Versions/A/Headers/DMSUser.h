//
//  User.h
//  deadmanssnitch
//
//  Created by Tim Bugai on 7/30/13.
//  Copyright (c) 2013 Collective Idea. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void (^SessionHandler)();

@interface DMSUser : NSObject

@property (nonatomic) NSString						*username;
@property (nonatomic) NSString						*password;
@property (nonatomic, readonly) NSString	*authToken;
@property (nonatomic) NSData							*deviceToken;

+ (instancetype)currentUser;

- (void)signInSuccess:(SessionHandler)userSignedIn failure:(SessionHandler)failedSignIn error:(SessionHandler)requestError;
- (void)signOut:(SessionHandler)userSignedOut;

- (BOOL)isAuthenticated;

- (void)registerDevice;
@end
