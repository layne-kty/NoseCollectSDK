//
//  NoseInterface.h
//  biwenSDK
//
//  Created by layne on 2020/4/30.
//  Copyright © 2020 layne. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "NoseErrorDefine.h"
#import "NoseCollectModel.h"

NS_ASSUME_NONNULL_BEGIN


@protocol NoseInterfaceDelegate <NSObject>
@optional

/*
 判断采集是否成功
 @param noseBackCode 采集状态  yes 成功   no 失败
 */
- (void)noseCollectIsSuccess:(NOSEBackCode)noseBackCode;

/**
 判断识别是否成功
 @param dogArray 当1：N识别时 返回数组
 */
- (void)noseLinvenseIsSuccess:(NOSEBackCode)noseBackCode
                     dogArray:(NSArray <NoseCollectModel *>*)dogArray;

/**
 当重复采集时返回dogId
 @param dogId 狗Id
 */
- (void)repeatCollectCode:(NOSEBackCode)noseBackCode
                    dogId:(NSString *)dogId;

@end



@interface NoseInterface : NSObject


/**
 初始化SDK
 */
+ (void)initNoseCollect;


/**
 弹出采集界面
 @param dogCode 宠物编号 不能为空
 @param needRepetCheck  是否需要启用重复采集
 @param needActiveCheck  是否需要启用活体检测
 */
+ (void)pushNoseCollectViewController:(UIViewController *)controller
                           repetCheck:(BOOL)needRepetCheck
                           activeCheck:(BOOL)needActiveCheck
                              dogCode:(NSString *)dogCode
                             Animated:(BOOL)animated
                           completion:(void(^)(void))completion;

/**
 弹出识别界面 （1：1）
 @param dogCode 宠物编号 不能为空
 */
+ (void)pushDiscernViewController:(UIViewController *)controller
                          dogCode:(NSString *)dogCode
                         Animated:(BOOL)animated
                       completion:(void(^)(void))completion;

/**
 弹出识别界面 （1:n）
 */
+ (void)pushDiscernAllViewController:(UIViewController *)controller
                         Animated:(BOOL)animated
                       completion:(void(^)(void))completion;

/**
重置文件
 @param dogCode 宠物编号 不能为空
*/
+ (void)resetFileWithDogCode:(NSString *)dogCode
                   onSuccess:(void (^)(void))onSuccess
                   onFailure:(void (^)(NSString *))onFailure;

/**
 添加代理获取监听各种事件，可添加多个代理

 @param delegate delegate
 */
+ (void)addDelegate:(id<NoseInterfaceDelegate>)delegate;

@end

NS_ASSUME_NONNULL_END
