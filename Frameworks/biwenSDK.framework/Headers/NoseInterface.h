//
//  NoseInterface.h
//  biwenSDK
//
//  Created by layne on 2020/4/30.
//  Copyright © 2020 layne. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface NoseInterface : NSObject

/**
 初始化SDK
 */
+ (void)initNoseCollect;

/**
 登录
 @param userName 用户名
 @param password 登录密码
 */
+ (void)loginWithuserName:(NSString *)userName
                 password:(NSString *)password
               completion:(void (^)(NSInteger))block;

/**
 弹出采集页面
 */
+ (void)pushNoseCollectViewController:(UIViewController *)controller
                             Animated:(BOOL)animated
                           completion:(void(^)(void))completion;

@end

NS_ASSUME_NONNULL_END
