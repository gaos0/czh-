package com.czh.productmanager.controller;

import com.czh.productmanager.pojo.Result;
import com.czh.productmanager.pojo.User;
import com.czh.productmanager.service.UserService;
import com.czh.productmanager.utils.JwtUtils;
import lombok.extern.slf4j.Slf4j;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RestController;

import java.util.HashMap;
import java.util.Map;

@Slf4j
@RestController
public class UserController {
    @Autowired
    private UserService userService;

    @PostMapping("/login")
    public Result login(@RequestBody User user)
    {
        User user1 = userService.login(user);
        if(user1!=null)
        {
            Map<String,Object> claims = new HashMap<>();
            claims.put("id",user1.getId());
            claims.put("username",user1.getUsername());

            String token = JwtUtils.generateJwt(claims);
            return Result.success(token);
        }
        return Result.error("用户名或密码错误");
    }


}
