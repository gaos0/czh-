package com.czh.productmanager.service;


import com.czh.productmanager.mapper.UserMapper;
import com.czh.productmanager.pojo.User;
import lombok.extern.slf4j.Slf4j;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

@Service
@Slf4j
public class UserServiceFunc implements UserService{

    @Autowired
    private UserMapper userMapper;
    @Override
    public User login(User user) {
        User user1 = userMapper.login(user.getUsername(),user.getPassword());
        return user1;
    }
}
