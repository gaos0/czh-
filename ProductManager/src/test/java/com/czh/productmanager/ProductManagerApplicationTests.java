package com.czh.productmanager;

import com.czh.productmanager.pojo.User;
import com.czh.productmanager.service.UserService;
import org.junit.jupiter.api.Test;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.boot.test.context.SpringBootTest;

@SpringBootTest
class ProductManagerApplicationTests {

    @Autowired
    private UserService userService;

    @Test
    void contextLoads() {
        User user = new User();
        user.setUsername("20216622");
        user.setPassword("123456");
        User user1 = userService.login(user);
    }

}
