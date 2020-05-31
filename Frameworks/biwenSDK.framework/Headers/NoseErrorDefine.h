//
//  NoseErrorDefine.h
//  TestDemo
//
//  Created by layne on 2020/5/24.
//  Copyright © 2020 layne. All rights reserved.
//

#ifndef NoseErrorDefine_h
#define NoseErrorDefine_h

typedef NS_ENUM(NSInteger, NOSEBackCode){
    NOSEBackCodeSuccess = 1,       // 采集成功
    NOSEBackCodeMatchSuccess = 2,     //匹配成功
    NOSEBackCodeError = -1,        // 采集失败
    NOSEBackCodeHasSame = -2,      // 重复采集了
    NOSEBackCodeNotActive = -3  , // 不是活体
    NOSEBackCodeNotNose = -4,     // 未检测到鼻子
    NOSEBackCodeNetError = -5,     // 系统异常 / 服务器错误
    NOSEBackCodeHasNotCollect = -6,  //  该编号暂未采集特征数据！
    NOSEBackCodeMatchFail = -7,     //匹配失败
    NOSEBackCodeIsNotExist = -8,     // 编号不存在
    NOSEBackCodeIsLoading = -9   // 特征数据生成中,请稍后再试！
};


#endif /* NoseErrorDefine_h */
