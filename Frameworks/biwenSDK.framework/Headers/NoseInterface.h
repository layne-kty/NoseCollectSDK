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


@protocol NoseInterfaceDelegate <NSObject>
@optional

/*
 判断采集是否成功
 @param collectStatus 采集状态  yes 成功   no 失败
 */
- (void)noseCollectIsSuccess:(BOOL)collectStatus;

@end



@interface NoseInterface : NSObject


/**
 初始化SDK
 */
+ (void)initNoseCollect;


/**
 弹出采集页面
 @param dogCode 宠物编号 不能为空
 */
+ (void)pushNoseCollectViewController:(UIViewController *)controller
                             Animated:(BOOL)animated
                              dogCode:(NSString *)dogCode
                           completion:(void(^)(void))completion;


/**
 添加代理获取监听各种事件，可添加多个代理

 @param delegate delegate
 */
+ (void)addDelegate:(id<NoseInterfaceDelegate>)delegate;

@end

NS_ASSUME_NONNULL_END
